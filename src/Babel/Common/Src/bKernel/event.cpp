#include <stdlib.h>
#include <string.h>
#include <bKernel/crc32.h>
#include <bKernel/heap.h>
#include <bKernel/event.h>
#include <bKernel/mutex.h>
#include <bKernel/debug.h>

static TBEvent events;
static OSMutex eventMutex;

extern int bInsideEventCallback;

inline TBEvent* bFindEvent(u32 crc)
{
    for (TBEvent* event = events.next; event != &events; event = event->next)
    {
        if (event->crc == crc)
            return event;
    }
    return NULL;
}

int bkCreateEvent(char* eventName)
{
    TBEvent* event;
    u32 crc = bkStringLwrCRC(eventName, 0);

    bkWaitMutex(&eventMutex);

    event = bFindEvent(crc);
    if (event)
    {
        ++event->refCount;
        bkReleaseMutex(&eventMutex);
        return 1;
    }

    event = (TBEvent*)bkHeapAllocEx(sizeof(TBEvent), (char*)"File", 0, 0x2001, (u32)"Event", 0);
    if (!event)
    {
        bkReleaseMutex(&eventMutex);
        return 0;
    }

    event->prev = events.prev;
    event->next = &events;

    event->prev->next = event;
    event->next->prev = event;

    strcpy(event->name, eventName);

    event->clients.prev = &event->clients;
    event->clients.next = &event->clients;

    event->crc = crc;
    event->noofQueues = 0;
    event->refCount = 1;
    bkReleaseMutex(&eventMutex);
    return 1;
}

int bkPopEvent(TBEventClient* client, char* parmBuffer, void* data)
{
    // client->type always seems to be EBEVENTCLIENTTYPE_QUEUE

    if (client->queue.size == 0)
        return 0;

    // TODO: Why are there NULL checks on the client->queue.queue.parms and data arrays??
    // This is worth looking into later, because there may be inline shenanigans.

    bkWaitMutex(&eventMutex);
    if ((client->queue.flags & 1) != 0)
    {
        int i = --client->queue.size;
        if ((parmBuffer != NULL) && (client->queue.queue[i].parms != NULL))
        {
            strcpy(parmBuffer, (client->queue.queue[i].parms));
        }

        if ((data != NULL) && (client->queue.queue[client->queue.size].data != NULL))
        {
            memcpy(data, client->queue.queue[client->queue.size].data, sizeof(client->queue.queue->data));
        }
    }
    else
    {
        if ((parmBuffer != NULL) && (client->queue.queue != NULL))
        {
            strcpy(parmBuffer, client->queue.queue->parms);
        }

        if ((data != NULL) && (client->queue.queue->data != NULL))
        {
            memcpy(data, client->queue.queue->data, 16);
        }

        if (client->queue.size > 1)
        {
            memmove(client->queue.queue, client->queue.queue + 1, (client->queue.size - 1) * sizeof(TBEventEntry));
        }

        --client->queue.size;
    }
    bkReleaseMutex(&eventMutex);
    return 1;
}

static void DeleteEvent(TBEvent* event)
{
    bkWaitMutex(&eventMutex);
    if (event->refCount >= 2)
    {
        --event->refCount;
        bkReleaseMutex(&eventMutex);
        return;
    }
    
    // Free clients
    TBEventClient* client = event->clients.next;
    while (client != &event->clients)
    {
        client = client->next;
        bkHeapFree(client->prev);
        client->prev = NULL;
    }

    // Remove event from the events list
    event->clients.prev = &event->clients;
    event->clients.next = &event->clients;
    event->next->prev = event->prev;
    event->prev->next = event->next;

    bkReleaseMutex(&eventMutex);
    bkHeapFree(event);
}

void bkDeleteEvent(char* eventName)
{
    TBEvent* event;
    if (eventName != NULL)
    {
        event = bFindEvent(bkStringLwrCRC(eventName, 0));
        if (event == NULL)
            return;
        DeleteEvent(event);
    }
    else
    {
        event = events.next;
        while (event != &events)
        {
            event = event->next;
            DeleteEvent(event->prev);
        }
    }
}

TBEventClient* bkTrapEventCallback(char* eventName, TBEventCallback callback, void* context)
{
    TBEventClient* client;
    TBEvent* event = bFindEvent(bkStringLwrCRC(eventName, 0));

    if (event == NULL)
        return NULL;

    client = (TBEventClient*)bkHeapAllocEx(sizeof(TBEventClient), (char*)"File", 0, 0x2001, (u32)"Event Client (Callback)", 0);
    if (client == NULL)
        return NULL;

    client->prev = event->clients.prev;
    client->next = &event->clients;
    client->prev->next = client;
    client->next->prev = client;
    client->type = EBEVENTCLIENTTYPE_CALLBACK;
    client->callback.callback = callback;
    client->callback.callbackContext = context;
    client->event = event;
    return client;
}

TBEventClient * bkTrapEventQueue(char* eventName, int queueSize, unsigned int flags)
{
    TBEventClient* client;
    TBEvent* event = bFindEvent(bkStringLwrCRC(eventName, 0));

    if (event == NULL)
        return NULL;

    client = (TBEventClient*)bkHeapAllocEx((sizeof(TBEventEntry) * queueSize) + sizeof(TBEventClient), (char*)"File", 0, 0x2001, (u32)"Event Client (Queue)", 0);
    if (client == NULL)
        return NULL;

    client->prev = event->clients.prev;
    client->next = &event->clients;
    client->prev->next = client;
    client->next->prev = client;
    client->type = EBEVENTCLIENTTYPE_QUEUE;
    client->queue.queue = (TBEventEntry*)(client + 1);
    client->queue.size = 0;
    client->queue.maxSize = queueSize;
    client->queue.flags = flags;
    client->event = event;
    ++event->noofQueues;
    return client;
}

void bkDeleteEventClient(TBEventClient* client)
{
    bkWaitMutex(&eventMutex);

    client->next->prev = client->prev;
    client->prev->next = client->next;
    if (client->type == EBEVENTCLIENTTYPE_QUEUE)
        client->event->noofQueues--;

    bkHeapFree(client);
    bkReleaseMutex(&eventMutex);
}

void bkDeleteEventTraps(char* eventName)
{
    TBEvent* event = bFindEvent(bkStringLwrCRC(eventName, 0));
    TBEventClient* client;

    bkWaitMutex(&eventMutex);

    client = event->clients.next;
    while (client != &event->clients)
    {
        client = client->next;
        bkHeapFree(client->prev);
        client->prev = NULL;
    }
    event->clients.prev = &event->clients;
    event->clients.next = &event->clients;

    bkReleaseMutex(&eventMutex);
}

int bkGenerateEvent(char* eventName, char* parmString, void* data, int takeMutex)
{
    TBEvent* event;
    TBEventClient* client;

    if (takeMutex)
        bkWaitMutex(&eventMutex);

    event = bFindEvent(bkStringLwrCRC(eventName, 0));
    if (event == NULL)
    {
        if (takeMutex)
            bkReleaseMutex(&eventMutex);
        return 0;
    }

    client = event->clients.next;
    while (client != &event->clients)
    {
        if (client->type == EBEVENTCLIENTTYPE_CALLBACK)
        {
            bInsideEventCallback = 1;
            client->callback.callback(eventName, parmString, data, client->callback.callbackContext);
            bInsideEventCallback = 0;
            goto next;
        }
        else if (client->queue.size == client->queue.maxSize)
        {
            if ((client->queue.flags & 2) != 0)
            {
                if (client->queue.size > 1)
                {
                    memmove(client->queue.queue, client->queue.queue + 1, (client->queue.size - 1) * 0x110);
                }

                client->queue.size--;
            }
            else
            {
                bkPrintf("bkGenerateEvent: *** WARNING *** Event \'%s\' lost parameters \'%s\' \'%s\' due to queue overflow ***\n",
                    eventName,
                    !parmString ? "[NULL]" : parmString,
                    !data ? "[NULL]" : data
                );
                goto next;
            }
        }

        if (parmString != NULL)
            strcpy(client->queue.queue[client->queue.size].parms, parmString);
        else
            client->queue.queue[client->queue.size].parms[0] = '\0';

        if (data != NULL)
            memcpy(client->queue.queue[client->queue.size].data, data, 16);
        else
            memset(client->queue.queue[client->queue.size].data, 0, 16);

        client->queue.size++;
next:
        client = client->next;
    }

    if (takeMutex)
        bkReleaseMutex(&eventMutex);
    return 1;
}
