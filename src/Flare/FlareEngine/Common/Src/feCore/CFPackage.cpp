#include <string.h>
#include <bKernel/crc32.h>
#include <feCore/CFPackage.h>

// TODO: These belong somewhere in bActor
typedef void (*TFixupAnimationEventCallback)(struct _TBActor*, struct _TBActorNode*, struct _TBActorAnimEvent*);
typedef void (*TFreeAnimationEventCallback)(struct _TBActor*, struct _TBActorNode*, struct _TBActorAnimEvent*);
typedef void (*TPlayAnimationEventCallback)(struct _TBActorInstance*, struct _TBActorNodeInstance*, struct _TBActorAnimEvent*);

static void FixupAnimationEvent(struct _TBActor* actor, struct _TBActorNode* node, struct _TBActorAnimEvent* event)
{
    struct CFActionListEntry* actions; // r31
    int noofActions; // r29
}

static void FreeAnimationEvent(struct _TBActor* actor, struct _TBActorNode* node, struct _TBActorAnimEvent* event)
{
    struct CFActionListEntry* actions; // r31
}

static void PlayAnimationEvent(struct _TBActorInstance* actorInstance, struct _TBActorNodeInstance* nodeInstance, struct _TBActorAnimEvent* event)
{
    int valid; // r11
}

CFPackage::CFPackage()
{
    fConstruct(NULL);
}

void CFPackage::fConstruct(char* vName)
{
    int l;
    int len;

    size = 0;
    flags.allFlags = 0;
    packagePtr = NULL;
    priority = EFPACKAGEPRIORITY_NOTNEEDED;
    loadingTime = 0.0f;
    prev = next = this;
    reservedBlockPtr = NULL;
    reservedBlockGroup = 0;
    nextReservedBlockGroup = 0;
    state = EFPACKAGESTATE_NOTLOADED;
    fixupPool = NULL;

    if (vName)
    {
        len = strlen(vName);

        // Convert vName to lowercase
        for (l = 0; l < len; ++l)
            name[l] = (vName[l] >= 'A' && vName[l] <= 'Z') ? vName[l] + ' ' : vName[l];

        name[l] = '\0';
        crc = bkStringLwrCRC(name, 0);
        flags.inUse = 1;
    }
    else
    {
        name[0] = '\0';
        crc = 0;
        flags.inUse = 0;
    }

    for (l = 0; l < 5; ++l)
    {
        priorities[l].mode = (struct CFMode*)0xDEADBEEF;
        priorities[l].priority = EFPACKAGEPRIORITY_INVALID;
    }

    // bSetAnimEventCallbacks(FixupAnimationEvent, FreeAnimationEvent, PlayAnimationEvent);
}

void CFPackage::fDestroy()
{
    next->prev = prev;
    prev->next = next;
    next = prev = this;
    flags.inUse = 0;
    flags.temporary = 0;
}

CFPackage::~CFPackage()
{
    fDestroy();
}

int CFPackage::fLoad()
{

}

void CFPackage::fBeginUnload(int mustUnload)
{

}

void CFPackage::fFinishUnload()
{

}

void CFPackage::fFixup(int freeMemory)
{

}

int CFPackage::fFreePackageMemory()
{

}

void CFPackage::fSetPriority(EFPackagePriority vPriority, struct CFMode* mode, int instantUnload)
{

}

EFPackagePriority CFPackage::fGetHighestPriority()
{
    int l;
    EFPackagePriority highest = EFPACKAGEPRIORITY_NOTNEEDED;
    for (l = 0; l < 5; ++l)
    {
        if (priorities[l].priority > highest && priorities[l].priority != EFPACKAGEPRIORITY_INVALID)
            highest = priorities[l].priority;
    }
    return highest;
}

void CFPackage::SetReservedBlockGroup(unsigned int groupCRC)
{
    nextReservedBlockGroup = groupCRC;
}
