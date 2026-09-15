#pragma once

enum EBEventClientType
{
    EBEVENTCLIENTTYPE_CALLBACK = 0,
    EBEVENTCLIENTTYPE_QUEUE = 1,
};

typedef void (*TBEventCallback)(char*, char*, void*, void*);
typedef struct _TBEventEntry TBEventEntry;
typedef struct _TBEventClientCallback TBEventClientCallback;
typedef struct _TBEventClientQueue TBEventClientQueue;
typedef struct _TBEventClient TBEventClient;
typedef struct _TBEvent TBEvent;

struct _TBEventEntry
{
    char parms[256]; // offset 0x0, size 0x100
    unsigned char data[16]; // offset 0x100, size 0x10
};

struct _TBEventClientCallback
{
    void (* callback)(char *, char *, void *, void *); // offset 0x0, size 0x4
    void * callbackContext; // offset 0x4, size 0x4
};

struct _TBEventClientQueue
{
    struct _TBEventEntry * queue; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    int maxSize; // offset 0x8, size 0x4
    unsigned int flags; // offset 0xC, size 0x4
};

struct _TBEventClient
{
    TBEventClient* next; // offset 0x0, size 0x4
    TBEventClient* prev; // offset 0x4, size 0x4
    EBEventClientType type; // offset 0x8, size 0x4
    TBEvent * event; // offset 0xC, size 0x4
    union
    {
        TBEventClientCallback callback; // offset 0x0, size 0x8
        TBEventClientQueue queue; // offset 0x0, size 0x10
    }; // offset 0x10, size 0x10
};

struct _TBEvent
{
    char name[32]; // offset 0x0, size 0x20
    unsigned int crc; // offset 0x20, size 0x4
    TBEvent* next; // offset 0x24, size 0x4
    TBEvent* prev; // offset 0x28, size 0x4
    struct _TBEventClient clients; // offset 0x2C, size 0x20
    int noofQueues; // offset 0x4C, size 0x4
    int refCount; // offset 0x50, size 0x4
};

int bkCreateEvent(char* eventName);
int bkPopEvent(TBEventClient* client, char* parmBuffer, void* data);
void bkDeleteEvent(char* eventName);
