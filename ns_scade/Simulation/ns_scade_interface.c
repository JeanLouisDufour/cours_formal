#include "ns_scade_interface.h"
#include "ns_scade_type.h"
#include "ns_scade_mapping.h"
#include "SmuVTable.h"
#include <string.h>

#define UNUSED(x) (void)(x)
/* context */

inC_seq inputs_ctx;
static inC_seq inputs_ctx_execute;
outC_seq outputs_ctx;

static void _SCSIM_RestoreInterface(void) {
    init_agent(&inputs_ctx.a);
    init_agent(&inputs_ctx_execute.a);
    init_agent(&inputs_ctx.Alice_partner);
    init_agent(&inputs_ctx_execute.Alice_partner);
    init_i_action(&inputs_ctx.intruder_action);
    init_i_action(&inputs_ctx_execute.intruder_action);
    memset((void*)&outputs_ctx, 0, sizeof(outputs_ctx));
}

static void _SCSIM_ExecuteInterface(void) {
    pSimulator->m_pfnAcquireValueMutex(pSimulator);
    inputs_ctx_execute.a = inputs_ctx.a;
    inputs_ctx_execute.Alice_partner = inputs_ctx.Alice_partner;
    inputs_ctx_execute.intruder_action = inputs_ctx.intruder_action;
    pSimulator->m_pfnReleaseValueMutex(pSimulator);
}

#ifdef __cplusplus
extern "C" {
#endif

const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "5082be0ababd3a32b8115f23d101f394";
const char* _SCSIM_SmuTypesCheckSum = "1d4140d2de3b3e910e8a148dd1cf7a1a";

/* simulation */

int SimInit(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_USER_DEFINED_INIT
    seq_init(&outputs_ctx);
    nRet = 1;
#else
    nRet = 0;
#endif
#ifdef EXTENDED_SIM
    AfterSimInit();
#endif
    return nRet;
}

int SimReset(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_NO_EXTERN_CALL_TO_RESET
    seq_reset(&outputs_ctx);
    nRet = 1;
#else
    nRet = 0;
#endif
#ifdef EXTENDED_SIM
    AfterSimInit();
#endif
    return nRet;
}

#ifdef __cplusplus
    #ifdef pSimoutC_seqCIVTable_defined
        extern struct SimCustomInitVTable *pSimoutC_seqCIVTable;
    #else 
        struct SimCustomInitVTable *pSimoutC_seqCIVTable = NULL;
    #endif
#else
    struct SimCustomInitVTable *pSimoutC_seqCIVTable;
#endif

int SimCustomInit(void) {
    int nRet = 0;
    if (pSimoutC_seqCIVTable != NULL && 
        pSimoutC_seqCIVTable->m_pfnCustomInit != NULL) {
        /* VTable function provided => call it */
        nRet = pSimoutC_seqCIVTable->m_pfnCustomInit ((void*)&outputs_ctx);
    }
    else {
        /* VTable misssing => error */
        nRet = 0;
    }
    return nRet;
}

#ifdef EXTENDED_SIM
    int GraphicalInputsConnected = 1;
#endif

int SimStep(void) {
#ifdef EXTENDED_SIM
    if (GraphicalInputsConnected)
        BeforeSimStep();
#endif
    _SCSIM_ExecuteInterface();
    seq(&inputs_ctx_execute, &outputs_ctx);
#ifdef EXTENDED_SIM
    AfterSimStep();
#endif
    return 1;
}

int SimStop(void) {
#ifdef EXTENDED_SIM
    ExtendedSimStop();
#endif
    return 1;
}

void SsmUpdateValues(void) {
#ifdef EXTENDED_SIM
    UpdateValues();
#endif
}

void SsmConnectExternalInputs(int bConnect) {
#ifdef EXTENDED_SIM
    GraphicalInputsConnected = bConnect;
#else
    UNUSED(bConnect);
#endif
}

/* dump */

int SsmGetDumpSize(void) {
    int nSize = 0;
    nSize += sizeof(inC_seq);
    nSize += sizeof(outC_seq);
#ifdef EXTENDED_SIM
    nSize += ExtendedGetDumpSize();
#endif
    return nSize;
}

void SsmGatherDumpData(char * pData) {
    char* pCurrent = pData;
    memcpy(pCurrent, &inputs_ctx, sizeof(inC_seq));
    pCurrent += sizeof(inC_seq);
    memcpy(pCurrent, &outputs_ctx, sizeof(outC_seq));
    pCurrent += sizeof(outC_seq);
#ifdef EXTENDED_SIM
    ExtendedGatherDumpData(pCurrent);
#endif
}

void SsmRestoreDumpData(const char * pData) {
    const char* pCurrent = pData;
    memcpy(&inputs_ctx, pCurrent, sizeof(inC_seq));
    pCurrent += sizeof(inC_seq);
    memcpy(&outputs_ctx, pCurrent, sizeof(outC_seq));
    pCurrent += sizeof(outC_seq);
#ifdef EXTENDED_SIM
    ExtendedRestoreDumpData(pCurrent);
#endif
}

/* snapshot */

int SsmSaveSnapshot(const char * szFilePath, size_t nCycle) {
    /* Test Services API not available */
    UNUSED(szFilePath);
    UNUSED(nCycle);
    return 0;
}

int SsmLoadSnapshot(const char * szFilePath, size_t *nCycle) {
    /* Test Services API not available */
    UNUSED(szFilePath);
    UNUSED(nCycle);
    return 0;
}

/* checksum */

const char * SsmGetCheckSum() {
    return _SCSIM_CheckSum;
}

const char * SsmGetSmuTypesCheckSum() {
    return _SCSIM_SmuTypesCheckSum;
}

#ifdef __cplusplus
} /* "C" */
#endif

