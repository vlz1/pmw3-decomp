#include <stdlib.h>
#include <string.h>
#include <bKernel/heap.h>
#include <bKernel/crc32.h>
#include <bKernel/debug.h>
#include <bKernel/commandLine.h>
#include <feCore/CFEnvironmentVars.h>
#include <feCore/SysVar.h>

CFEnvironmentVars* feEnvVars;
u32 feHeapSize = 0x5000;
u32 feInitFlags = 0x204;

CFEnvironmentVars::CFEnvironmentVars()
    : index(NULL), indexSize(0), indexMax(0)
{

}

CFEnvironmentVars::~CFEnvironmentVars()
{
    Free();
}

void CFEnvironmentVars::SetVar(char* varName, char* varVal, int exclusive)
{
    TFEnvironmentVar* var;
    TFEnvironmentVar* newIndex;
    int len;

    if (exclusive == 0 || !(var = FindVar(varName, NULL)))
    {
        if (indexSize == indexMax)
        {
            indexMax += 256;
            if (!(newIndex = (TFEnvironmentVar*)bkHeapRealloc(index, indexMax * 0x28)))
            {
                indexMax -= 256;
                return;
            }
            index = newIndex;
        }

        var = &index[indexSize];
        var->nameCrc = bkStringLwrCRC(varName, 0);
        strcpy(var->name, varName);
        ++indexSize;
    }
    else if (var->longVal != NULL)
    {
        bkHeapFree(var->longVal);
        var->longVal = NULL;
    }

    if (varVal != NULL)
    {
        if ((len = strlen(varVal)) < 8)
        {
            memcpy(var->shortVal, varVal, len + 1);
            var->longVal = NULL;
        }
        else
        {
            if ((var->longVal = (char*)HEAP_ALLOC(len + 1, HEAP_MODULE_FLARE)))
                memcpy(var->longVal, varVal, len + 1);
            var->shortVal[0] = '\0';
        }
    }
    else
    {
        var->longVal = NULL;
        var->shortVal[0] = '\0';
    }
}

TFEnvironmentVar* CFEnvironmentVars::FindVar(char* varName, int* counter)
{
    int l;
    unsigned int crc = bkStringLwrCRC(varName, 0);

    if (counter == NULL)
    {
        for (l = 0; l < indexSize; ++l)
        {
            if (index[l].nameCrc == crc)
                return &index[l];
        }
        return NULL;
    }

    for (l = *counter; l < indexSize; ++l)
    {
        if (index[l].nameCrc == crc)
        {
            *counter = l + 1;
            return &index[l];
        }
    }

    return NULL;
}

char* CFEnvironmentVars::FindVarVal(char* varName, int* counter)
{
    int l;
    unsigned int crc = bkStringLwrCRC(varName, 0);

    if (counter == NULL)
    {
        for (l = 0; l < indexSize; ++l)
        {
            if (index[l].nameCrc == crc)
                return index[l].longVal != NULL ? index[l].longVal : index[l].shortVal;
        }
        return NULL;
    }

    for (l = *counter; l < indexSize; ++l)
    {
        if (index[l].nameCrc == crc)
        {
            *counter = l + 1;
            return index[l].longVal != NULL ? index[l].longVal : index[l].shortVal;
        }
    }

    return NULL;
}

void CFEnvironmentVars::fFromCommandLine()
{
    int argc;
    int l;
    int len;
    char** argv;
    char* cp;
    char* bufPtr;
    char* nextBufPtr;
    char buf[512];

    bkGetCommandLine(&argc, &argv);

    for (l = 0; l < argc; ++l)
    {
        strcpy(buf, argv[l]);
        bufPtr = buf;

        cp = strchr(buf, '\"');
        if (cp && !strchr(cp + 1, '\"') && (l + 1 < argc))
        {
            ++l;
            strcat(buf, " ");
            strcat(buf, argv[l]);
        }

        do
        {
            cp = strchr(bufPtr, 0x95);
            if (cp)
            {
                *cp = '\0';
                nextBufPtr = cp + 1;
            }
            else
            {
                nextBufPtr = NULL;
            }

            bkPrintf("%d: %s\n", l, bufPtr);

            cp = strchr(bufPtr, '=');
            if (cp)
            {
                len = strlen(cp);
                if (cp[1] == '\"' && cp[len - 1] == '\"')
                {
                    cp[len - 1] = '\0';
                    *cp = '\0';
                    SetVar(bufPtr, cp + 2, 0);
                    cp[len - 1] = '\"';
                    *cp = '=';
                }
                else
                {
                    *cp = '\0';
                    SetVar(bufPtr, cp + 1, 0);
                    *cp = '=';
                }
            }
            else
            {
                SetVar(bufPtr, NULL, 0);
            }

            bufPtr = nextBufPtr;
        } while (bufPtr);
    }
}

#define MATCH_VAR_NAME(v, str, shortstr) (strcasecmp(var, str) == 0 || strcasecmp(var, shortstr) == 0)
#define IS_VALUE_TRUE(v) (strcasecmp(v, "TRUE") == 0 || strcasecmp(v, "1") == 0)

static void setInitInfoValue(char* var, char* value)
{
    if (MATCH_VAR_NAME(var, "heapsize", "hs"))
    {
        feHeapSize = atoi(value);
    }
    else if (MATCH_VAR_NAME(var, "nonexclusive", "nex"))
    {
        if (IS_VALUE_TRUE(value))
            feInitFlags |= 1;
        else
            feInitFlags &= ~1;
    }
    else if (MATCH_VAR_NAME(var, "exclusive", "ex"))
    {
        if (!IS_VALUE_TRUE(value))
            feInitFlags |= 1;
        else
            feInitFlags &= ~1;
    }
    else if (MATCH_VAR_NAME(var, "verboseresources", "vr"))
    {
        if (IS_VALUE_TRUE(value))
            feInitFlags |= 2;
        else
            feInitFlags &= ~2;
    }
    else if (MATCH_VAR_NAME(var, "nodebugoutput", "nd"))
    {
        if (IS_VALUE_TRUE(value))
            feInitFlags |= 8;
        else
            feInitFlags &= ~8;
    }
}

void GetInitInfoFromCommandLine()
{
    int argc;
    int l;
    int len;
    char** argv;
    char* cp;
    char* bufPtr;
    char* nextBufPtr;
    char buf[512];

    feHeapSize = GET_SYSVAR(DEFAULT_HEAP_SIZE);
    feInitFlags = GET_SYSVAR(BKINIT_FLAGS);

    if (feInitFlags & 0x4000)
        return;

    bkGetCommandLine(&argc, &argv);

    for (l = 0; l < argc; ++l)
    {
        strcpy(buf, argv[l]);
        bufPtr = buf;

        do
        {
            cp = strchr(bufPtr, 0x95);
            if (cp)
            {
                *cp = '\0';
                nextBufPtr = cp + 1;
            }
            else
            {
                nextBufPtr = NULL;
            }

            bkPrintf("%d: %s\n", l, bufPtr);

            cp = strchr(bufPtr, '=');
            if (cp)
            {
                len = strlen(cp);
                if (cp[1] == '\"' && cp[len - 1] == '\"')
                {
                    cp[len - 1] = '\0';
                    *cp = '\0';
                    setInitInfoValue(bufPtr, cp + 2);
                    cp[len - 1] = '\"';
                    *cp = '=';
                }
                else
                {
                    *cp = '\0';
                    setInitInfoValue(bufPtr, cp + 1);
                    *cp = '=';
                }
            }
            else
            {
                setInitInfoValue(bufPtr, "TRUE");
            }

            bufPtr = nextBufPtr;
        } while (bufPtr);
    }
}

void CFEnvironmentVars::Free()
{
    for (int l = 0; l < indexSize; ++l)
    {
        if (index[l].longVal)
        {
            bkHeapFree(index[l].longVal);
            index[l].longVal = NULL;
        }
    }

    if (index)
    {
        bkHeapFree(index);
        index = NULL;
        index = NULL;
    }

    indexMax = 0;
    indexSize = 0;
}
