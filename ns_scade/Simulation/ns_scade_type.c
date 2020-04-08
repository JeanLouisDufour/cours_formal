#include "ns_scade_type.h"

#include "SmuTypes.h"
#include "SmuPredefConv.h"
#include "SmuVTable.h"

#include "kcg_types.h"

#include <SmuConfig.h>

char strDefaultRealFormat[] = "%.5g"; /* (from .etp) */
#define UNUSED(x) (void)(x)
#define skip_whitespace(str) while(*str == ' ' || *str == '\t') str++

/****************************************************************
 ** _2_SSM_ST 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSim_2_SSM_STVTable_defined
    extern struct SimTypeVTable *pSim_2_SSM_STVTable;
  #else 
    struct SimTypeVTable *pSim_2_SSM_STVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSim_2_SSM_STVTable;
#endif

static SimEnumValUtils _2_SSM_ST_values[] = {
    { "send_msg1", SSM_st_send_msg1},
    { "send_msg1", SSM_st_send_msg1},
    { "recv_msg2_and_send_msg3", SSM_st_recv_msg2_and_send_msg3},
    { "recv_msg2_and_send_msg3", SSM_st_recv_msg2_and_send_msg3},
    { "connected", SSM_st_connected},
    { "connected", SSM_st_connected},
};
const int _2_SSM_ST_nb_values = 6;

int _2_SSM_ST_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSim_2_SSM_STVTable != NULL
        && pSim_2_SSM_STVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_2_SSM_STVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(_2_SSM_ST*)pValue, _2_SSM_ST_values, _2_SSM_ST_nb_values, pfnStrAppend, pStrObj); 
}

int check__2_SSM_ST_string(const char *str, char **endptr)
{
    static _2_SSM_ST rTemp;
    return string_to__2_SSM_ST(str, &rTemp, endptr);
}

int string_to__2_SSM_ST(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSim_2_SSM_STVTable != NULL) {
        nRet = string_to_VTable(str, pSim_2_SSM_STVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, _2_SSM_ST_values, _2_SSM_ST_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(_2_SSM_ST*)pValue = (_2_SSM_ST)nTemp;
    }
    return nRet;
}

int is__2_SSM_ST_double_conversion_allowed()
{
    if (pSim_2_SSM_STVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_2_SSM_STVTable);
    }
    return 1;
}

int _2_SSM_ST_to_double(const void *pValue, double *nValue)
{
    if (pSim_2_SSM_STVTable != NULL) {
        return VTable_to_double(pValue, pSim_2_SSM_STVTable, nValue);
    }
    *nValue = (double)*((_2_SSM_ST*)pValue);
    return 1;
}

int is__2_SSM_ST_long_conversion_allowed()
{
    if (pSim_2_SSM_STVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSim_2_SSM_STVTable);
    }
    return 1;
}

int _2_SSM_ST_to_long(const void *pValue, long *nValue)
{
    if (pSim_2_SSM_STVTable != NULL) {
        return VTable_to_long(pValue, pSim_2_SSM_STVTable, nValue);
    }
    *nValue = (long)*((_2_SSM_ST*)pValue);
    return 1;
}

void compare__2_SSM_ST(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSim_2_SSM_STVTable != NULL
        && pSim_2_SSM_STVTable->m_version >= Scv612
        && pSim_2_SSM_STVTable->m_pfnCompare != NULL) {
        if (pSim_2_SSM_STVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSim_2_SSM_STVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSim_2_SSM_STVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(_2_SSM_ST*)pValue1), (int)(*(_2_SSM_ST*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get__2_SSM_ST_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(_2_SSM_ST_values, _2_SSM_ST_nb_values, pfnStrAppend, pStrObj);
}

int init__2_SSM_ST(void *pValue)
{
    *(_2_SSM_ST*)pValue = SSM_st_send_msg1;
    return 1;
}

int release__2_SSM_ST(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy__2_SSM_ST(void *pToValue, const void *pFromValue)
{
    *((_2_SSM_ST*)pToValue) = *((_2_SSM_ST*)pFromValue);
    return 1;
}

SimTypeUtils _Type__2_SSM_ST_Utils = {
    _2_SSM_ST_to_string,
    check__2_SSM_ST_string,
    string_to__2_SSM_ST,
    is__2_SSM_ST_double_conversion_allowed,
    _2_SSM_ST_to_double,
    is__2_SSM_ST_long_conversion_allowed,
    _2_SSM_ST_to_long,
    compare__2_SSM_ST,
    get__2_SSM_ST_signature,
    init__2_SSM_ST,
    release__2_SSM_ST,
    copy__2_SSM_ST,
    sizeof(_2_SSM_ST)
};

/****************************************************************
 ** _3_SSM_TR 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSim_3_SSM_TRVTable_defined
    extern struct SimTypeVTable *pSim_3_SSM_TRVTable;
  #else 
    struct SimTypeVTable *pSim_3_SSM_TRVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSim_3_SSM_TRVTable;
#endif

static SimEnumValUtils _3_SSM_TR_values[] = {
    { "SSM_TR_no_trans_", SSM_TR_no_trans_},
    { "SSM_TR_no_trans_", SSM_TR_no_trans_},
    { "SSM_TR_send_msg1_recv_msg2_and_send_msg3_1_send_msg1", SSM_TR_send_msg1_recv_msg2_and_send_msg3_1_send_msg1},
    { "SSM_TR_send_msg1_recv_msg2_and_send_msg3_1_send_msg1", SSM_TR_send_msg1_recv_msg2_and_send_msg3_1_send_msg1},
    { "SSM_TR_recv_msg2_and_send_msg3_connected_1_recv_msg2_and_send_msg3", SSM_TR_recv_msg2_and_send_msg3_connected_1_recv_msg2_and_send_msg3},
    { "SSM_TR_recv_msg2_and_send_msg3_connected_1_recv_msg2_and_send_msg3", SSM_TR_recv_msg2_and_send_msg3_connected_1_recv_msg2_and_send_msg3},
};
const int _3_SSM_TR_nb_values = 6;

int _3_SSM_TR_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSim_3_SSM_TRVTable != NULL
        && pSim_3_SSM_TRVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_3_SSM_TRVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(_3_SSM_TR*)pValue, _3_SSM_TR_values, _3_SSM_TR_nb_values, pfnStrAppend, pStrObj); 
}

int check__3_SSM_TR_string(const char *str, char **endptr)
{
    static _3_SSM_TR rTemp;
    return string_to__3_SSM_TR(str, &rTemp, endptr);
}

int string_to__3_SSM_TR(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSim_3_SSM_TRVTable != NULL) {
        nRet = string_to_VTable(str, pSim_3_SSM_TRVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, _3_SSM_TR_values, _3_SSM_TR_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(_3_SSM_TR*)pValue = (_3_SSM_TR)nTemp;
    }
    return nRet;
}

int is__3_SSM_TR_double_conversion_allowed()
{
    if (pSim_3_SSM_TRVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_3_SSM_TRVTable);
    }
    return 1;
}

int _3_SSM_TR_to_double(const void *pValue, double *nValue)
{
    if (pSim_3_SSM_TRVTable != NULL) {
        return VTable_to_double(pValue, pSim_3_SSM_TRVTable, nValue);
    }
    *nValue = (double)*((_3_SSM_TR*)pValue);
    return 1;
}

int is__3_SSM_TR_long_conversion_allowed()
{
    if (pSim_3_SSM_TRVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSim_3_SSM_TRVTable);
    }
    return 1;
}

int _3_SSM_TR_to_long(const void *pValue, long *nValue)
{
    if (pSim_3_SSM_TRVTable != NULL) {
        return VTable_to_long(pValue, pSim_3_SSM_TRVTable, nValue);
    }
    *nValue = (long)*((_3_SSM_TR*)pValue);
    return 1;
}

void compare__3_SSM_TR(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSim_3_SSM_TRVTable != NULL
        && pSim_3_SSM_TRVTable->m_version >= Scv612
        && pSim_3_SSM_TRVTable->m_pfnCompare != NULL) {
        if (pSim_3_SSM_TRVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSim_3_SSM_TRVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSim_3_SSM_TRVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(_3_SSM_TR*)pValue1), (int)(*(_3_SSM_TR*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get__3_SSM_TR_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(_3_SSM_TR_values, _3_SSM_TR_nb_values, pfnStrAppend, pStrObj);
}

int init__3_SSM_TR(void *pValue)
{
    *(_3_SSM_TR*)pValue = SSM_TR_no_trans_;
    return 1;
}

int release__3_SSM_TR(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy__3_SSM_TR(void *pToValue, const void *pFromValue)
{
    *((_3_SSM_TR*)pToValue) = *((_3_SSM_TR*)pFromValue);
    return 1;
}

SimTypeUtils _Type__3_SSM_TR_Utils = {
    _3_SSM_TR_to_string,
    check__3_SSM_TR_string,
    string_to__3_SSM_TR,
    is__3_SSM_TR_double_conversion_allowed,
    _3_SSM_TR_to_double,
    is__3_SSM_TR_long_conversion_allowed,
    _3_SSM_TR_to_long,
    compare__3_SSM_TR,
    get__3_SSM_TR_signature,
    init__3_SSM_TR,
    release__3_SSM_TR,
    copy__3_SSM_TR,
    sizeof(_3_SSM_TR)
};

/****************************************************************
 ** agent 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimagentVTable_defined
    extern struct SimTypeVTable *pSimagentVTable;
  #else 
    struct SimTypeVTable *pSimagentVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimagentVTable;
#endif

static SimEnumValUtils agent_values[] = {
    { "Alice", Alice},
    { "Alice", Alice},
    { "Bob", Bob},
    { "Bob", Bob},
    { "Intruder", Intruder},
    { "Intruder", Intruder},
};
const int agent_nb_values = 6;

int agent_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimagentVTable != NULL
        && pSimagentVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimagentVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(agent*)pValue, agent_values, agent_nb_values, pfnStrAppend, pStrObj); 
}

int check_agent_string(const char *str, char **endptr)
{
    static agent rTemp;
    return string_to_agent(str, &rTemp, endptr);
}

int string_to_agent(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimagentVTable != NULL) {
        nRet = string_to_VTable(str, pSimagentVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, agent_values, agent_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(agent*)pValue = (agent)nTemp;
    }
    return nRet;
}

int is_agent_double_conversion_allowed()
{
    if (pSimagentVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimagentVTable);
    }
    return 1;
}

int agent_to_double(const void *pValue, double *nValue)
{
    if (pSimagentVTable != NULL) {
        return VTable_to_double(pValue, pSimagentVTable, nValue);
    }
    *nValue = (double)*((agent*)pValue);
    return 1;
}

int is_agent_long_conversion_allowed()
{
    if (pSimagentVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimagentVTable);
    }
    return 1;
}

int agent_to_long(const void *pValue, long *nValue)
{
    if (pSimagentVTable != NULL) {
        return VTable_to_long(pValue, pSimagentVTable, nValue);
    }
    *nValue = (long)*((agent*)pValue);
    return 1;
}

void compare_agent(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimagentVTable != NULL
        && pSimagentVTable->m_version >= Scv612
        && pSimagentVTable->m_pfnCompare != NULL) {
        if (pSimagentVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimagentVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimagentVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(agent*)pValue1), (int)(*(agent*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_agent_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(agent_values, agent_nb_values, pfnStrAppend, pStrObj);
}

int init_agent(void *pValue)
{
    *(agent*)pValue = Alice;
    return 1;
}

int release_agent(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_agent(void *pToValue, const void *pFromValue)
{
    *((agent*)pToValue) = *((agent*)pFromValue);
    return 1;
}

SimTypeUtils _Type_agent_Utils = {
    agent_to_string,
    check_agent_string,
    string_to_agent,
    is_agent_double_conversion_allowed,
    agent_to_double,
    is_agent_long_conversion_allowed,
    agent_to_long,
    compare_agent,
    get_agent_signature,
    init_agent,
    release_agent,
    copy_agent,
    sizeof(agent)
};

/****************************************************************
 ** array 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimarrayVTable_defined
    extern struct SimTypeVTable *pSimarrayVTable;
  #else 
    struct SimTypeVTable *pSimarrayVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimarrayVTable;
#endif

int array_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimarrayVTable != NULL
        && pSimarrayVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarrayVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnArrayToString(pValue, data_to_string, 2, sizeof(data), pfnStrAppend, pStrObj);
}

int check_array_string(const char *str, char **endptr)
{
    static array rTemp;
    return string_to_array(str, &rTemp, endptr);
}

int string_to_array(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimarrayVTable != NULL) {
        nRet = string_to_VTable(str, pSimarrayVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_data_Utils, 2, sizeof(data), endptr);
    }
    return nRet;
}

int is_array_double_conversion_allowed()
{
    if (pSimarrayVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarrayVTable);
    }
    return 0;
}

int array_to_double(const void *pValue, double *nValue)
{
    if (pSimarrayVTable != NULL) {
        return VTable_to_double(pValue, pSimarrayVTable, nValue);
    }
    return 0;
}

int is_array_long_conversion_allowed()
{
    if (pSimarrayVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimarrayVTable);
    }
    return 0;
}

int array_to_long(const void *pValue, long *nValue)
{
    if (pSimarrayVTable != NULL) {
        return VTable_to_long(pValue, pSimarrayVTable, nValue);
    }
    return 0;
}

void compare_array(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimarrayVTable != NULL
        && pSimarrayVTable->m_version >= Scv612
        && pSimarrayVTable->m_pfnCompare != NULL) {
        if (pSimarrayVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimarrayVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimarrayVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_data, 2, sizeof(data), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_array_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_data_signature, 2, pfnStrAppend, pStrObj); 
}

int init_array(void *pValue)
{
    size_t i;
    for (i = 0; i < 2; i++)
        init_data(&((data*)pValue)[i]);
    return 1;
}

int release_array(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_array(void *pToValue, const void *pFromValue)
{
    kcg_copy_array((array*)pToValue, (array*)pFromValue);
    return 1;
}

SimTypeUtils _Type_array_Utils = {
    array_to_string,
    check_array_string,
    string_to_array,
    is_array_double_conversion_allowed,
    array_to_double,
    is_array_long_conversion_allowed,
    array_to_long,
    compare_array,
    get_array_signature,
    init_array,
    release_array,
    copy_array,
    sizeof(array)
};

/****************************************************************
 ** data 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimdataVTable_defined
    extern struct SimTypeVTable *pSimdataVTable;
  #else 
    struct SimTypeVTable *pSimdataVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimdataVTable;
#endif

static SimEnumValUtils data_values[] = {
    { "No_data", No_data},
    { "No_data", No_data},
    { "AgentA", AgentA},
    { "AgentA", AgentA},
    { "AgentB", AgentB},
    { "AgentB", AgentB},
    { "AgentI", AgentI},
    { "AgentI", AgentI},
    { "NonceA", NonceA},
    { "NonceA", NonceA},
    { "NonceB", NonceB},
    { "NonceB", NonceB},
    { "NonceI", NonceI},
    { "NonceI", NonceI},
};
const int data_nb_values = 14;

int data_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimdataVTable != NULL
        && pSimdataVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimdataVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(data*)pValue, data_values, data_nb_values, pfnStrAppend, pStrObj); 
}

int check_data_string(const char *str, char **endptr)
{
    static data rTemp;
    return string_to_data(str, &rTemp, endptr);
}

int string_to_data(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimdataVTable != NULL) {
        nRet = string_to_VTable(str, pSimdataVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, data_values, data_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(data*)pValue = (data)nTemp;
    }
    return nRet;
}

int is_data_double_conversion_allowed()
{
    if (pSimdataVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimdataVTable);
    }
    return 1;
}

int data_to_double(const void *pValue, double *nValue)
{
    if (pSimdataVTable != NULL) {
        return VTable_to_double(pValue, pSimdataVTable, nValue);
    }
    *nValue = (double)*((data*)pValue);
    return 1;
}

int is_data_long_conversion_allowed()
{
    if (pSimdataVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimdataVTable);
    }
    return 1;
}

int data_to_long(const void *pValue, long *nValue)
{
    if (pSimdataVTable != NULL) {
        return VTable_to_long(pValue, pSimdataVTable, nValue);
    }
    *nValue = (long)*((data*)pValue);
    return 1;
}

void compare_data(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimdataVTable != NULL
        && pSimdataVTable->m_version >= Scv612
        && pSimdataVTable->m_pfnCompare != NULL) {
        if (pSimdataVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimdataVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimdataVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(data*)pValue1), (int)(*(data*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_data_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(data_values, data_nb_values, pfnStrAppend, pStrObj);
}

int init_data(void *pValue)
{
    *(data*)pValue = No_data;
    return 1;
}

int release_data(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_data(void *pToValue, const void *pFromValue)
{
    *((data*)pToValue) = *((data*)pFromValue);
    return 1;
}

SimTypeUtils _Type_data_Utils = {
    data_to_string,
    check_data_string,
    string_to_data,
    is_data_double_conversion_allowed,
    data_to_double,
    is_data_long_conversion_allowed,
    data_to_long,
    compare_data,
    get_data_signature,
    init_data,
    release_data,
    copy_data,
    sizeof(data)
};

/****************************************************************
 ** i_action 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimi_actionVTable_defined
    extern struct SimTypeVTable *pSimi_actionVTable;
  #else 
    struct SimTypeVTable *pSimi_actionVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimi_actionVTable;
#endif

static SimEnumValUtils i_action_values[] = {
    { "No_action", No_action},
    { "No_action", No_action},
    { "Memo", Memo},
    { "Memo", Memo},
    { "Erase", Erase},
    { "Erase", Erase},
    { "Reuse_for_A", Reuse_for_A},
    { "Reuse_for_A", Reuse_for_A},
    { "Reuse_for_B", Reuse_for_B},
    { "Reuse_for_B", Reuse_for_B},
    { "Msg1_for_A", Msg1_for_A},
    { "Msg1_for_A", Msg1_for_A},
    { "Msg1_for_B", Msg1_for_B},
    { "Msg1_for_B", Msg1_for_B},
    { "Msg1Fake_for_A", Msg1Fake_for_A},
    { "Msg1Fake_for_A", Msg1Fake_for_A},
    { "Msg1Fake_for_B", Msg1Fake_for_B},
    { "Msg1Fake_for_B", Msg1Fake_for_B},
    { "Msg3_for_A", Msg3_for_A},
    { "Msg3_for_A", Msg3_for_A},
    { "Msg3_for_B", Msg3_for_B},
    { "Msg3_for_B", Msg3_for_B},
};
const int i_action_nb_values = 22;

int i_action_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimi_actionVTable != NULL
        && pSimi_actionVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimi_actionVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(i_action*)pValue, i_action_values, i_action_nb_values, pfnStrAppend, pStrObj); 
}

int check_i_action_string(const char *str, char **endptr)
{
    static i_action rTemp;
    return string_to_i_action(str, &rTemp, endptr);
}

int string_to_i_action(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimi_actionVTable != NULL) {
        nRet = string_to_VTable(str, pSimi_actionVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, i_action_values, i_action_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(i_action*)pValue = (i_action)nTemp;
    }
    return nRet;
}

int is_i_action_double_conversion_allowed()
{
    if (pSimi_actionVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimi_actionVTable);
    }
    return 1;
}

int i_action_to_double(const void *pValue, double *nValue)
{
    if (pSimi_actionVTable != NULL) {
        return VTable_to_double(pValue, pSimi_actionVTable, nValue);
    }
    *nValue = (double)*((i_action*)pValue);
    return 1;
}

int is_i_action_long_conversion_allowed()
{
    if (pSimi_actionVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimi_actionVTable);
    }
    return 1;
}

int i_action_to_long(const void *pValue, long *nValue)
{
    if (pSimi_actionVTable != NULL) {
        return VTable_to_long(pValue, pSimi_actionVTable, nValue);
    }
    *nValue = (long)*((i_action*)pValue);
    return 1;
}

void compare_i_action(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimi_actionVTable != NULL
        && pSimi_actionVTable->m_version >= Scv612
        && pSimi_actionVTable->m_pfnCompare != NULL) {
        if (pSimi_actionVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimi_actionVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimi_actionVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(i_action*)pValue1), (int)(*(i_action*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_i_action_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(i_action_values, i_action_nb_values, pfnStrAppend, pStrObj);
}

int init_i_action(void *pValue)
{
    *(i_action*)pValue = No_action;
    return 1;
}

int release_i_action(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_i_action(void *pToValue, const void *pFromValue)
{
    *((i_action*)pToValue) = *((i_action*)pFromValue);
    return 1;
}

SimTypeUtils _Type_i_action_Utils = {
    i_action_to_string,
    check_i_action_string,
    string_to_i_action,
    is_i_action_double_conversion_allowed,
    i_action_to_double,
    is_i_action_long_conversion_allowed,
    i_action_to_long,
    compare_i_action,
    get_i_action_signature,
    init_i_action,
    release_i_action,
    copy_i_action,
    sizeof(i_action)
};

/****************************************************************
 ** kcg_bool 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimBoolVTable_defined
    extern struct SimTypeVTable *pSimBoolVTable;
  #else 
    struct SimTypeVTable *pSimBoolVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimBoolVTable;
#endif

int kcg_bool_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimBoolVTable != NULL
        && pSimBoolVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimBoolVTable->m_pfnToType(SptString, pValue), pStrObj);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
            return pfnStrAppend(*(char**)pSimBoolVTable->m_pfnToType(SptString, &value), pStrObj);
        }
    }
    return predef_kcg_bool_to_string(*((kcg_bool*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_bool_string(const char *str, char **endptr)
{
    static kcg_bool rTemp;
    return string_to_kcg_bool(str, &rTemp, endptr);
}

int string_to_kcg_bool(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    static SimBool rTemp;
    skip_whitespace(str);
    if (pSimBoolVTable != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: VTable function must return a kcg_<type> *variable: */
            nRet = string_to_VTable(str, pSimBoolVTable, pValue, endptr);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            nRet = string_to_VTable(str, pSimBoolVTable, &rTemp, endptr);
            if (nRet != 0) {
                *(kcg_bool*)pValue = (rTemp == SbTrue)? kcg_true : kcg_false;
            }
        }
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_bool(str, (kcg_bool*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_bool_double_conversion_allowed()
{
    if (pSimBoolVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimBoolVTable);
    }
    return 1;
}

int kcg_bool_to_double(const void *pValue, double *nValue)
{
    if (pSimBoolVTable != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_double(pValue, pSimBoolVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
            return VTable_to_double(&value, pSimBoolVTable, nValue);
        }
    }
    *nValue = *((kcg_bool*)pValue) == kcg_true ? 1.0 : 0.0;
    return 1;
}

int is_kcg_bool_long_conversion_allowed()
{
    if (pSimBoolVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimBoolVTable);
    }
    return 1;
}

int kcg_bool_to_long(const void *pValue, long *nValue)
{
    if (pSimBoolVTable != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_long(pValue, pSimBoolVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
            return VTable_to_long(&value, pSimBoolVTable, nValue);
        }
    }
    *nValue = *((kcg_bool*)pValue) == kcg_true ? 1 : 0;
    return 1;
}

void compare_kcg_bool(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimBoolVTable != NULL
        && pSimBoolVTable->m_version >= Scv612
        && pSimBoolVTable->m_pfnCompare != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            unitResult = pSimBoolVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value1 = (*((const kcg_bool*)pValue1) == kcg_true)? SbTrue : SbFalse;
            SimBool value2 = (*((const kcg_bool*)pValue2) == kcg_true)? SbTrue : SbFalse;
            pSimBoolVTable->m_pfnCompare(&unitResult, &value1, &value2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_bool(pResult, *((kcg_bool*)pValue1), *((kcg_bool*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_bool_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("B", pStrObj);
}

int init_kcg_bool(void *pValue)
{
    *(kcg_bool*)pValue = kcg_false;
    return 1;
}

int release_kcg_bool(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_bool(void *pToValue, const void *pFromValue)
{
    *((kcg_bool*)pToValue) = *((kcg_bool*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_bool_Utils = {
    kcg_bool_to_string,
    check_kcg_bool_string,
    string_to_kcg_bool,
    is_kcg_bool_double_conversion_allowed,
    kcg_bool_to_double,
    is_kcg_bool_long_conversion_allowed,
    kcg_bool_to_long,
    compare_kcg_bool,
    get_kcg_bool_signature,
    init_kcg_bool,
    release_kcg_bool,
    copy_kcg_bool,
    sizeof(kcg_bool)
};

/****************************************************************
 ** kcg_char 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimCharVTable_defined
    extern struct SimTypeVTable *pSimCharVTable;
  #else 
    struct SimTypeVTable *pSimCharVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimCharVTable;
#endif

int kcg_char_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimCharVTable != NULL
        && pSimCharVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimCharVTable->m_pfnToType(SptString, pValue), pStrObj);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value = (char)(*(const kcg_char*)pValue);
            return pfnStrAppend(*(char**)pSimCharVTable->m_pfnToType(SptString, &value), pStrObj);
        }
    }
    return predef_kcg_char_to_string(*((kcg_char*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_char_string(const char *str, char **endptr)
{
    static kcg_char rTemp;
    return string_to_kcg_char(str, &rTemp, endptr);
}

int string_to_kcg_char(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    static char rTemp;
    skip_whitespace(str);
    if (pSimCharVTable != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: VTable function must return a kcg_<type> *variable: */
            nRet = string_to_VTable(str, pSimCharVTable, pValue, endptr);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            nRet = string_to_VTable(str, pSimCharVTable, &rTemp, endptr);
            if (nRet != 0) {
                *(kcg_char*)pValue = (kcg_char)rTemp;
            }
        }
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_char(str, (kcg_char*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_char_double_conversion_allowed()
{
    if (pSimCharVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimCharVTable);
    }
    return 1;
}

int kcg_char_to_double(const void *pValue, double *nValue)
{
    if (pSimCharVTable != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_double(pValue, pSimCharVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value = (char)(*(const kcg_char*)pValue);
            return VTable_to_double(&value, pSimCharVTable, nValue);
        }
    }
    *nValue = (double)*((kcg_char*)pValue);
    return 1;
}

int is_kcg_char_long_conversion_allowed()
{
    if (pSimCharVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimCharVTable);
    }
    return 1;
}

int kcg_char_to_long(const void *pValue, long *nValue)
{
    if (pSimCharVTable != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_long(pValue, pSimCharVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value = (char)(*(const kcg_char*)pValue);
            return VTable_to_long(&value, pSimCharVTable, nValue);
        }
    }
    *nValue = (long)*((kcg_char*)pValue);
    return 1;
}

void compare_kcg_char(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimCharVTable != NULL
        && pSimCharVTable->m_version >= Scv612
        && pSimCharVTable->m_pfnCompare != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            unitResult = pSimCharVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value1 = (char)(*(const kcg_char*)pValue1);
            char value2 = (char)(*(const kcg_char*)pValue2);
            pSimCharVTable->m_pfnCompare(&unitResult, &value1, &value2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_char(pResult, *((kcg_char*)pValue1), *((kcg_char*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_char_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("C", pStrObj);
}

int init_kcg_char(void *pValue)
{
    *(kcg_char*)pValue = 0;
    return 1;
}

int release_kcg_char(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_char(void *pToValue, const void *pFromValue)
{
    *((kcg_char*)pToValue) = *((kcg_char*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_char_Utils = {
    kcg_char_to_string,
    check_kcg_char_string,
    string_to_kcg_char,
    is_kcg_char_double_conversion_allowed,
    kcg_char_to_double,
    is_kcg_char_long_conversion_allowed,
    kcg_char_to_long,
    compare_kcg_char,
    get_kcg_char_signature,
    init_kcg_char,
    release_kcg_char,
    copy_kcg_char,
    sizeof(kcg_char)
};

/****************************************************************
 ** kcg_float32 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimFloat32VTable_defined
    extern struct SimTypeVTable *pSimFloat32VTable;
  #else 
    struct SimTypeVTable *pSimFloat32VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimFloat32VTable;
#endif

int kcg_float32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimFloat32VTable != NULL
        && pSimFloat32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimFloat32VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_float32_to_string(*((kcg_float32*)pValue), pConverter->m_RealFormat, pfnStrAppend, pStrObj);
}

int check_kcg_float32_string(const char *str, char **endptr)
{
    static kcg_float32 rTemp;
    return string_to_kcg_float32(str, &rTemp, endptr);
}

int string_to_kcg_float32(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimFloat32VTable != NULL) {
        nRet = string_to_VTable(str, pSimFloat32VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_float32(str, (kcg_float32*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_float32_double_conversion_allowed()
{
    if (pSimFloat32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimFloat32VTable);
    }
    return 1;
}

int kcg_float32_to_double(const void *pValue, double *nValue)
{
    if (pSimFloat32VTable != NULL) {
        return VTable_to_double(pValue, pSimFloat32VTable, nValue);
    }
    *nValue = (double)*((kcg_float32*)pValue);
    return 1;
}

int is_kcg_float32_long_conversion_allowed()
{
    if (pSimFloat32VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimFloat32VTable);
    }
    return 1;
}

int kcg_float32_to_long(const void *pValue, long *nValue)
{
    if (pSimFloat32VTable != NULL) {
        return VTable_to_long(pValue, pSimFloat32VTable, nValue);
    }
    *nValue = (long)*((kcg_float32*)pValue);
    return 1;
}

void compare_kcg_float32(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceFloat;
    if (pSimFloat32VTable != NULL
        && pSimFloat32VTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimFloat32VTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimFloat32VTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceFloat
               && pSimFloat32VTable->m_version >= Scv612
               && pSimFloat32VTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        unitResult = pSimFloat32VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison (with/without tolerance): */
        unitResult = predef_compare_kcg_float32(pResult, *((kcg_float32*)pValue1), *((kcg_float32*)pValue2), pTol);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_float32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("F32", pStrObj);
}

int init_kcg_float32(void *pValue)
{
    *(kcg_float32*)pValue = 0.0;
    return 1;
}

int release_kcg_float32(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_float32(void *pToValue, const void *pFromValue)
{
    *((kcg_float32*)pToValue) = *((kcg_float32*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_float32_Utils = {
    kcg_float32_to_string,
    check_kcg_float32_string,
    string_to_kcg_float32,
    is_kcg_float32_double_conversion_allowed,
    kcg_float32_to_double,
    is_kcg_float32_long_conversion_allowed,
    kcg_float32_to_long,
    compare_kcg_float32,
    get_kcg_float32_signature,
    init_kcg_float32,
    release_kcg_float32,
    copy_kcg_float32,
    sizeof(kcg_float32)
};

/****************************************************************
 ** kcg_float64 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimFloat64VTable_defined
    extern struct SimTypeVTable *pSimFloat64VTable;
  #else 
    struct SimTypeVTable *pSimFloat64VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimFloat64VTable;
#endif

int kcg_float64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimFloat64VTable != NULL
        && pSimFloat64VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimFloat64VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_float64_to_string(*((kcg_float64*)pValue), pConverter->m_RealFormat, pfnStrAppend, pStrObj);
}

int check_kcg_float64_string(const char *str, char **endptr)
{
    static kcg_float64 rTemp;
    return string_to_kcg_float64(str, &rTemp, endptr);
}

int string_to_kcg_float64(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimFloat64VTable != NULL) {
        nRet = string_to_VTable(str, pSimFloat64VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_float64(str, (kcg_float64*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_float64_double_conversion_allowed()
{
    if (pSimFloat64VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimFloat64VTable);
    }
    return 1;
}

int kcg_float64_to_double(const void *pValue, double *nValue)
{
    if (pSimFloat64VTable != NULL) {
        return VTable_to_double(pValue, pSimFloat64VTable, nValue);
    }
    *nValue = (double)*((kcg_float64*)pValue);
    return 1;
}

int is_kcg_float64_long_conversion_allowed()
{
    if (pSimFloat64VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimFloat64VTable);
    }
    return 1;
}

int kcg_float64_to_long(const void *pValue, long *nValue)
{
    if (pSimFloat64VTable != NULL) {
        return VTable_to_long(pValue, pSimFloat64VTable, nValue);
    }
    *nValue = (long)*((kcg_float64*)pValue);
    return 1;
}

void compare_kcg_float64(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimFloat64VTable != NULL
        && pSimFloat64VTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimFloat64VTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimFloat64VTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimFloat64VTable->m_version >= Scv612
               && pSimFloat64VTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        unitResult = pSimFloat64VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison (with/without tolerance): */
        unitResult = predef_compare_kcg_float64(pResult, *((kcg_float64*)pValue1), *((kcg_float64*)pValue2), pTol);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_float64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("F64", pStrObj);
}

int init_kcg_float64(void *pValue)
{
    *(kcg_float64*)pValue = 0.0;
    return 1;
}

int release_kcg_float64(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_float64(void *pToValue, const void *pFromValue)
{
    *((kcg_float64*)pToValue) = *((kcg_float64*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_float64_Utils = {
    kcg_float64_to_string,
    check_kcg_float64_string,
    string_to_kcg_float64,
    is_kcg_float64_double_conversion_allowed,
    kcg_float64_to_double,
    is_kcg_float64_long_conversion_allowed,
    kcg_float64_to_long,
    compare_kcg_float64,
    get_kcg_float64_signature,
    init_kcg_float64,
    release_kcg_float64,
    copy_kcg_float64,
    sizeof(kcg_float64)
};

/****************************************************************
 ** kcg_int16 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimInt16VTable_defined
    extern struct SimTypeVTable *pSimInt16VTable;
  #else 
    struct SimTypeVTable *pSimInt16VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimInt16VTable;
#endif

int kcg_int16_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt16VTable != NULL
        && pSimInt16VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt16VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_int16_to_string(*((kcg_int16*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_int16_string(const char *str, char **endptr)
{
    static kcg_int16 rTemp;
    return string_to_kcg_int16(str, &rTemp, endptr);
}

int string_to_kcg_int16(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimInt16VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt16VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_int16(str, (kcg_int16*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int16_double_conversion_allowed()
{
    if (pSimInt16VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt16VTable);
    }
    return 1;
}

int kcg_int16_to_double(const void *pValue, double *nValue)
{
    if (pSimInt16VTable != NULL) {
        return VTable_to_double(pValue, pSimInt16VTable, nValue);
    }
    *nValue = (double)*((kcg_int16*)pValue);
    return 1;
}

int is_kcg_int16_long_conversion_allowed()
{
    if (pSimInt16VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt16VTable);
    }
    return 1;
}

int kcg_int16_to_long(const void *pValue, long *nValue)
{
    if (pSimInt16VTable != NULL) {
        return VTable_to_long(pValue, pSimInt16VTable, nValue);
    }
    *nValue = (long)*((kcg_int16*)pValue);
    return 1;
}

void compare_kcg_int16(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt16VTable != NULL
        && pSimInt16VTable->m_version >= Scv612
        && pSimInt16VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt16VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int16(pResult, *((kcg_int16*)pValue1), *((kcg_int16*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_int16_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("I16", pStrObj);
}

int init_kcg_int16(void *pValue)
{
    *(kcg_int16*)pValue = 0;
    return 1;
}

int release_kcg_int16(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_int16(void *pToValue, const void *pFromValue)
{
    *((kcg_int16*)pToValue) = *((kcg_int16*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_int16_Utils = {
    kcg_int16_to_string,
    check_kcg_int16_string,
    string_to_kcg_int16,
    is_kcg_int16_double_conversion_allowed,
    kcg_int16_to_double,
    is_kcg_int16_long_conversion_allowed,
    kcg_int16_to_long,
    compare_kcg_int16,
    get_kcg_int16_signature,
    init_kcg_int16,
    release_kcg_int16,
    copy_kcg_int16,
    sizeof(kcg_int16)
};

/****************************************************************
 ** kcg_int32 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimInt32VTable_defined
    extern struct SimTypeVTable *pSimInt32VTable;
  #else 
    struct SimTypeVTable *pSimInt32VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimInt32VTable;
#endif

int kcg_int32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt32VTable != NULL
        && pSimInt32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt32VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_int32_to_string(*((kcg_int32*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_int32_string(const char *str, char **endptr)
{
    static kcg_int32 rTemp;
    return string_to_kcg_int32(str, &rTemp, endptr);
}

int string_to_kcg_int32(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimInt32VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt32VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_int32(str, (kcg_int32*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int32_double_conversion_allowed()
{
    if (pSimInt32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt32VTable);
    }
    return 1;
}

int kcg_int32_to_double(const void *pValue, double *nValue)
{
    if (pSimInt32VTable != NULL) {
        return VTable_to_double(pValue, pSimInt32VTable, nValue);
    }
    *nValue = (double)*((kcg_int32*)pValue);
    return 1;
}

int is_kcg_int32_long_conversion_allowed()
{
    if (pSimInt32VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt32VTable);
    }
    return 1;
}

int kcg_int32_to_long(const void *pValue, long *nValue)
{
    if (pSimInt32VTable != NULL) {
        return VTable_to_long(pValue, pSimInt32VTable, nValue);
    }
    *nValue = (long)*((kcg_int32*)pValue);
    return 1;
}

void compare_kcg_int32(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt32VTable != NULL
        && pSimInt32VTable->m_version >= Scv612
        && pSimInt32VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt32VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int32(pResult, *((kcg_int32*)pValue1), *((kcg_int32*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_int32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("I32", pStrObj);
}

int init_kcg_int32(void *pValue)
{
    *(kcg_int32*)pValue = 0;
    return 1;
}

int release_kcg_int32(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_int32(void *pToValue, const void *pFromValue)
{
    *((kcg_int32*)pToValue) = *((kcg_int32*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_int32_Utils = {
    kcg_int32_to_string,
    check_kcg_int32_string,
    string_to_kcg_int32,
    is_kcg_int32_double_conversion_allowed,
    kcg_int32_to_double,
    is_kcg_int32_long_conversion_allowed,
    kcg_int32_to_long,
    compare_kcg_int32,
    get_kcg_int32_signature,
    init_kcg_int32,
    release_kcg_int32,
    copy_kcg_int32,
    sizeof(kcg_int32)
};

/****************************************************************
 ** kcg_int64 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimInt64VTable_defined
    extern struct SimTypeVTable *pSimInt64VTable;
  #else 
    struct SimTypeVTable *pSimInt64VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimInt64VTable;
#endif

int kcg_int64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt64VTable != NULL
        && pSimInt64VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt64VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_int64_to_string(*((kcg_int64*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_int64_string(const char *str, char **endptr)
{
    static kcg_int64 rTemp;
    return string_to_kcg_int64(str, &rTemp, endptr);
}

int string_to_kcg_int64(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimInt64VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt64VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_int64(str, (kcg_int64*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int64_double_conversion_allowed()
{
    if (pSimInt64VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt64VTable);
    }
    return 1;
}

int kcg_int64_to_double(const void *pValue, double *nValue)
{
    if (pSimInt64VTable != NULL) {
        return VTable_to_double(pValue, pSimInt64VTable, nValue);
    }
    *nValue = (double)*((kcg_int64*)pValue);
    return 1;
}

int is_kcg_int64_long_conversion_allowed()
{
    if (pSimInt64VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt64VTable);
    }
    return 1;
}

int kcg_int64_to_long(const void *pValue, long *nValue)
{
    if (pSimInt64VTable != NULL) {
        return VTable_to_long(pValue, pSimInt64VTable, nValue);
    }
    *nValue = (long)*((kcg_int64*)pValue);
    return 1;
}

void compare_kcg_int64(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt64VTable != NULL
        && pSimInt64VTable->m_version >= Scv612
        && pSimInt64VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt64VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int64(pResult, *((kcg_int64*)pValue1), *((kcg_int64*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_int64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("I64", pStrObj);
}

int init_kcg_int64(void *pValue)
{
    *(kcg_int64*)pValue = 0;
    return 1;
}

int release_kcg_int64(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_int64(void *pToValue, const void *pFromValue)
{
    *((kcg_int64*)pToValue) = *((kcg_int64*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_int64_Utils = {
    kcg_int64_to_string,
    check_kcg_int64_string,
    string_to_kcg_int64,
    is_kcg_int64_double_conversion_allowed,
    kcg_int64_to_double,
    is_kcg_int64_long_conversion_allowed,
    kcg_int64_to_long,
    compare_kcg_int64,
    get_kcg_int64_signature,
    init_kcg_int64,
    release_kcg_int64,
    copy_kcg_int64,
    sizeof(kcg_int64)
};

/****************************************************************
 ** kcg_int8 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimInt8VTable_defined
    extern struct SimTypeVTable *pSimInt8VTable;
  #else 
    struct SimTypeVTable *pSimInt8VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimInt8VTable;
#endif

int kcg_int8_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt8VTable != NULL
        && pSimInt8VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt8VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_int8_to_string(*((kcg_int8*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_int8_string(const char *str, char **endptr)
{
    static kcg_int8 rTemp;
    return string_to_kcg_int8(str, &rTemp, endptr);
}

int string_to_kcg_int8(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimInt8VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt8VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_int8(str, (kcg_int8*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int8_double_conversion_allowed()
{
    if (pSimInt8VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt8VTable);
    }
    return 1;
}

int kcg_int8_to_double(const void *pValue, double *nValue)
{
    if (pSimInt8VTable != NULL) {
        return VTable_to_double(pValue, pSimInt8VTable, nValue);
    }
    *nValue = (double)*((kcg_int8*)pValue);
    return 1;
}

int is_kcg_int8_long_conversion_allowed()
{
    if (pSimInt8VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt8VTable);
    }
    return 1;
}

int kcg_int8_to_long(const void *pValue, long *nValue)
{
    if (pSimInt8VTable != NULL) {
        return VTable_to_long(pValue, pSimInt8VTable, nValue);
    }
    *nValue = (long)*((kcg_int8*)pValue);
    return 1;
}

void compare_kcg_int8(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt8VTable != NULL
        && pSimInt8VTable->m_version >= Scv612
        && pSimInt8VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt8VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int8(pResult, *((kcg_int8*)pValue1), *((kcg_int8*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_int8_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("I8", pStrObj);
}

int init_kcg_int8(void *pValue)
{
    *(kcg_int8*)pValue = 0;
    return 1;
}

int release_kcg_int8(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_int8(void *pToValue, const void *pFromValue)
{
    *((kcg_int8*)pToValue) = *((kcg_int8*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_int8_Utils = {
    kcg_int8_to_string,
    check_kcg_int8_string,
    string_to_kcg_int8,
    is_kcg_int8_double_conversion_allowed,
    kcg_int8_to_double,
    is_kcg_int8_long_conversion_allowed,
    kcg_int8_to_long,
    compare_kcg_int8,
    get_kcg_int8_signature,
    init_kcg_int8,
    release_kcg_int8,
    copy_kcg_int8,
    sizeof(kcg_int8)
};

/****************************************************************
 ** kcg_size 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSizeVTable_defined
    extern struct SimTypeVTable *pSimSizeVTable;
  #else 
    struct SimTypeVTable *pSimSizeVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSizeVTable;
#endif

int kcg_size_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSizeVTable != NULL
        && pSimSizeVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimSizeVTable->m_pfnToType(SptString, pValue), pStrObj);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            size_t value = (size_t)(*(const kcg_size*)pValue);
            return pfnStrAppend(*(char**)pSimSizeVTable->m_pfnToType(SptString, &value), pStrObj);
        }
    }
    return predef_kcg_size_to_string(*((kcg_size*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_size_string(const char *str, char **endptr)
{
    static kcg_size rTemp;
    return string_to_kcg_size(str, &rTemp, endptr);
}

int string_to_kcg_size(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    static size_t rTemp;
    skip_whitespace(str);
    if (pSimSizeVTable != NULL) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: VTable function must return a kcg_<type> *variable: */
            nRet = string_to_VTable(str, pSimSizeVTable, pValue, endptr);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            nRet = string_to_VTable(str, pSimSizeVTable, &rTemp, endptr);
            if (nRet != 0) {
                *(kcg_size*)pValue = (kcg_size)rTemp;
            }
        }
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_size(str, (kcg_size*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_size_double_conversion_allowed()
{
    if (pSimSizeVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSizeVTable);
    }
    return 1;
}

int kcg_size_to_double(const void *pValue, double *nValue)
{
    if (pSimSizeVTable != NULL) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_double(pValue, pSimSizeVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            size_t value = (size_t)(*(const kcg_size*)pValue);
            return VTable_to_double(&value, pSimSizeVTable, nValue);
        }
    }
    *nValue = (double)*((kcg_size*)pValue);
    return 1;
}

int is_kcg_size_long_conversion_allowed()
{
    if (pSimSizeVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSizeVTable);
    }
    return 1;
}

int kcg_size_to_long(const void *pValue, long *nValue)
{
    if (pSimSizeVTable != NULL) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_long(pValue, pSimSizeVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            size_t value = (size_t)(*(const kcg_size*)pValue);
            return VTable_to_long(&value, pSimSizeVTable, nValue);
        }
    }
    *nValue = (long)*((kcg_size*)pValue);
    return 1;
}

void compare_kcg_size(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSizeVTable != NULL
        && pSimSizeVTable->m_version >= Scv612
        && pSimSizeVTable->m_pfnCompare != NULL) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            unitResult = pSimSizeVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            size_t value1 = (size_t)(*(const kcg_size*)pValue1);
            size_t value2 = (size_t)(*(const kcg_size*)pValue2);
            pSimSizeVTable->m_pfnCompare(&unitResult, &value1, &value2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_size(pResult, *((kcg_size*)pValue1), *((kcg_size*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_size_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("S", pStrObj);
}

int init_kcg_size(void *pValue)
{
    *(kcg_size*)pValue = 0;
    return 1;
}

int release_kcg_size(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_size(void *pToValue, const void *pFromValue)
{
    *((kcg_size*)pToValue) = *((kcg_size*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_size_Utils = {
    kcg_size_to_string,
    check_kcg_size_string,
    string_to_kcg_size,
    is_kcg_size_double_conversion_allowed,
    kcg_size_to_double,
    is_kcg_size_long_conversion_allowed,
    kcg_size_to_long,
    compare_kcg_size,
    get_kcg_size_signature,
    init_kcg_size,
    release_kcg_size,
    copy_kcg_size,
    sizeof(kcg_size)
};

/****************************************************************
 ** kcg_uint16 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimUint16VTable_defined
    extern struct SimTypeVTable *pSimUint16VTable;
  #else 
    struct SimTypeVTable *pSimUint16VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimUint16VTable;
#endif

int kcg_uint16_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimUint16VTable != NULL
        && pSimUint16VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUint16VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_uint16_to_string(*((kcg_uint16*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_uint16_string(const char *str, char **endptr)
{
    static kcg_uint16 rTemp;
    return string_to_kcg_uint16(str, &rTemp, endptr);
}

int string_to_kcg_uint16(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimUint16VTable != NULL) {
        nRet = string_to_VTable(str, pSimUint16VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_uint16(str, (kcg_uint16*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_uint16_double_conversion_allowed()
{
    if (pSimUint16VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUint16VTable);
    }
    return 1;
}

int kcg_uint16_to_double(const void *pValue, double *nValue)
{
    if (pSimUint16VTable != NULL) {
        return VTable_to_double(pValue, pSimUint16VTable, nValue);
    }
    *nValue = (double)*((kcg_uint16*)pValue);
    return 1;
}

int is_kcg_uint16_long_conversion_allowed()
{
    if (pSimUint16VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimUint16VTable);
    }
    return 1;
}

int kcg_uint16_to_long(const void *pValue, long *nValue)
{
    if (pSimUint16VTable != NULL) {
        return VTable_to_long(pValue, pSimUint16VTable, nValue);
    }
    *nValue = (long)*((kcg_uint16*)pValue);
    return 1;
}

void compare_kcg_uint16(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimUint16VTable != NULL
        && pSimUint16VTable->m_version >= Scv612
        && pSimUint16VTable->m_pfnCompare != NULL) {
        unitResult = pSimUint16VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_uint16(pResult, *((kcg_uint16*)pValue1), *((kcg_uint16*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_uint16_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("UI16", pStrObj);
}

int init_kcg_uint16(void *pValue)
{
    *(kcg_uint16*)pValue = 0;
    return 1;
}

int release_kcg_uint16(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_uint16(void *pToValue, const void *pFromValue)
{
    *((kcg_uint16*)pToValue) = *((kcg_uint16*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_uint16_Utils = {
    kcg_uint16_to_string,
    check_kcg_uint16_string,
    string_to_kcg_uint16,
    is_kcg_uint16_double_conversion_allowed,
    kcg_uint16_to_double,
    is_kcg_uint16_long_conversion_allowed,
    kcg_uint16_to_long,
    compare_kcg_uint16,
    get_kcg_uint16_signature,
    init_kcg_uint16,
    release_kcg_uint16,
    copy_kcg_uint16,
    sizeof(kcg_uint16)
};

/****************************************************************
 ** kcg_uint32 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimUint32VTable_defined
    extern struct SimTypeVTable *pSimUint32VTable;
  #else 
    struct SimTypeVTable *pSimUint32VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimUint32VTable;
#endif

int kcg_uint32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimUint32VTable != NULL
        && pSimUint32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUint32VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_uint32_to_string(*((kcg_uint32*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_uint32_string(const char *str, char **endptr)
{
    static kcg_uint32 rTemp;
    return string_to_kcg_uint32(str, &rTemp, endptr);
}

int string_to_kcg_uint32(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimUint32VTable != NULL) {
        nRet = string_to_VTable(str, pSimUint32VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_uint32(str, (kcg_uint32*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_uint32_double_conversion_allowed()
{
    if (pSimUint32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUint32VTable);
    }
    return 1;
}

int kcg_uint32_to_double(const void *pValue, double *nValue)
{
    if (pSimUint32VTable != NULL) {
        return VTable_to_double(pValue, pSimUint32VTable, nValue);
    }
    *nValue = (double)*((kcg_uint32*)pValue);
    return 1;
}

int is_kcg_uint32_long_conversion_allowed()
{
    if (pSimUint32VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimUint32VTable);
    }
    return 1;
}

int kcg_uint32_to_long(const void *pValue, long *nValue)
{
    if (pSimUint32VTable != NULL) {
        return VTable_to_long(pValue, pSimUint32VTable, nValue);
    }
    *nValue = (long)*((kcg_uint32*)pValue);
    return 1;
}

void compare_kcg_uint32(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimUint32VTable != NULL
        && pSimUint32VTable->m_version >= Scv612
        && pSimUint32VTable->m_pfnCompare != NULL) {
        unitResult = pSimUint32VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_uint32(pResult, *((kcg_uint32*)pValue1), *((kcg_uint32*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_uint32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("UI32", pStrObj);
}

int init_kcg_uint32(void *pValue)
{
    *(kcg_uint32*)pValue = 0;
    return 1;
}

int release_kcg_uint32(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_uint32(void *pToValue, const void *pFromValue)
{
    *((kcg_uint32*)pToValue) = *((kcg_uint32*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_uint32_Utils = {
    kcg_uint32_to_string,
    check_kcg_uint32_string,
    string_to_kcg_uint32,
    is_kcg_uint32_double_conversion_allowed,
    kcg_uint32_to_double,
    is_kcg_uint32_long_conversion_allowed,
    kcg_uint32_to_long,
    compare_kcg_uint32,
    get_kcg_uint32_signature,
    init_kcg_uint32,
    release_kcg_uint32,
    copy_kcg_uint32,
    sizeof(kcg_uint32)
};

/****************************************************************
 ** kcg_uint64 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimUint64VTable_defined
    extern struct SimTypeVTable *pSimUint64VTable;
  #else 
    struct SimTypeVTable *pSimUint64VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimUint64VTable;
#endif

int kcg_uint64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimUint64VTable != NULL
        && pSimUint64VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUint64VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_uint64_to_string(*((kcg_uint64*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_uint64_string(const char *str, char **endptr)
{
    static kcg_uint64 rTemp;
    return string_to_kcg_uint64(str, &rTemp, endptr);
}

int string_to_kcg_uint64(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimUint64VTable != NULL) {
        nRet = string_to_VTable(str, pSimUint64VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_uint64(str, (kcg_uint64*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_uint64_double_conversion_allowed()
{
    if (pSimUint64VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUint64VTable);
    }
    return 1;
}

int kcg_uint64_to_double(const void *pValue, double *nValue)
{
    if (pSimUint64VTable != NULL) {
        return VTable_to_double(pValue, pSimUint64VTable, nValue);
    }
    *nValue = (double)*((kcg_uint64*)pValue);
    return 1;
}

int is_kcg_uint64_long_conversion_allowed()
{
    if (pSimUint64VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimUint64VTable);
    }
    return 1;
}

int kcg_uint64_to_long(const void *pValue, long *nValue)
{
    if (pSimUint64VTable != NULL) {
        return VTable_to_long(pValue, pSimUint64VTable, nValue);
    }
    *nValue = (long)*((kcg_uint64*)pValue);
    return 1;
}

void compare_kcg_uint64(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimUint64VTable != NULL
        && pSimUint64VTable->m_version >= Scv612
        && pSimUint64VTable->m_pfnCompare != NULL) {
        unitResult = pSimUint64VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_uint64(pResult, *((kcg_uint64*)pValue1), *((kcg_uint64*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_uint64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("UI64", pStrObj);
}

int init_kcg_uint64(void *pValue)
{
    *(kcg_uint64*)pValue = 0;
    return 1;
}

int release_kcg_uint64(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_uint64(void *pToValue, const void *pFromValue)
{
    *((kcg_uint64*)pToValue) = *((kcg_uint64*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_uint64_Utils = {
    kcg_uint64_to_string,
    check_kcg_uint64_string,
    string_to_kcg_uint64,
    is_kcg_uint64_double_conversion_allowed,
    kcg_uint64_to_double,
    is_kcg_uint64_long_conversion_allowed,
    kcg_uint64_to_long,
    compare_kcg_uint64,
    get_kcg_uint64_signature,
    init_kcg_uint64,
    release_kcg_uint64,
    copy_kcg_uint64,
    sizeof(kcg_uint64)
};

/****************************************************************
 ** kcg_uint8 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimUint8VTable_defined
    extern struct SimTypeVTable *pSimUint8VTable;
  #else 
    struct SimTypeVTable *pSimUint8VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimUint8VTable;
#endif

int kcg_uint8_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimUint8VTable != NULL
        && pSimUint8VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUint8VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_uint8_to_string(*((kcg_uint8*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_uint8_string(const char *str, char **endptr)
{
    static kcg_uint8 rTemp;
    return string_to_kcg_uint8(str, &rTemp, endptr);
}

int string_to_kcg_uint8(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimUint8VTable != NULL) {
        nRet = string_to_VTable(str, pSimUint8VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_uint8(str, (kcg_uint8*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_uint8_double_conversion_allowed()
{
    if (pSimUint8VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUint8VTable);
    }
    return 1;
}

int kcg_uint8_to_double(const void *pValue, double *nValue)
{
    if (pSimUint8VTable != NULL) {
        return VTable_to_double(pValue, pSimUint8VTable, nValue);
    }
    *nValue = (double)*((kcg_uint8*)pValue);
    return 1;
}

int is_kcg_uint8_long_conversion_allowed()
{
    if (pSimUint8VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimUint8VTable);
    }
    return 1;
}

int kcg_uint8_to_long(const void *pValue, long *nValue)
{
    if (pSimUint8VTable != NULL) {
        return VTable_to_long(pValue, pSimUint8VTable, nValue);
    }
    *nValue = (long)*((kcg_uint8*)pValue);
    return 1;
}

void compare_kcg_uint8(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimUint8VTable != NULL
        && pSimUint8VTable->m_version >= Scv612
        && pSimUint8VTable->m_pfnCompare != NULL) {
        unitResult = pSimUint8VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_uint8(pResult, *((kcg_uint8*)pValue1), *((kcg_uint8*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_uint8_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("UI8", pStrObj);
}

int init_kcg_uint8(void *pValue)
{
    *(kcg_uint8*)pValue = 0;
    return 1;
}

int release_kcg_uint8(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_uint8(void *pToValue, const void *pFromValue)
{
    *((kcg_uint8*)pToValue) = *((kcg_uint8*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_uint8_Utils = {
    kcg_uint8_to_string,
    check_kcg_uint8_string,
    string_to_kcg_uint8,
    is_kcg_uint8_double_conversion_allowed,
    kcg_uint8_to_double,
    is_kcg_uint8_long_conversion_allowed,
    kcg_uint8_to_long,
    compare_kcg_uint8,
    get_kcg_uint8_signature,
    init_kcg_uint8,
    release_kcg_uint8,
    copy_kcg_uint8,
    sizeof(kcg_uint8)
};

/****************************************************************
 ** key 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimkeyVTable_defined
    extern struct SimTypeVTable *pSimkeyVTable;
  #else 
    struct SimTypeVTable *pSimkeyVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimkeyVTable;
#endif

static SimEnumValUtils key_values[] = {
    { "KeyA", KeyA},
    { "KeyA", KeyA},
    { "KeyB", KeyB},
    { "KeyB", KeyB},
    { "KeyI", KeyI},
    { "KeyI", KeyI},
};
const int key_nb_values = 6;

int key_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimkeyVTable != NULL
        && pSimkeyVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimkeyVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(key*)pValue, key_values, key_nb_values, pfnStrAppend, pStrObj); 
}

int check_key_string(const char *str, char **endptr)
{
    static key rTemp;
    return string_to_key(str, &rTemp, endptr);
}

int string_to_key(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimkeyVTable != NULL) {
        nRet = string_to_VTable(str, pSimkeyVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, key_values, key_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(key*)pValue = (key)nTemp;
    }
    return nRet;
}

int is_key_double_conversion_allowed()
{
    if (pSimkeyVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimkeyVTable);
    }
    return 1;
}

int key_to_double(const void *pValue, double *nValue)
{
    if (pSimkeyVTable != NULL) {
        return VTable_to_double(pValue, pSimkeyVTable, nValue);
    }
    *nValue = (double)*((key*)pValue);
    return 1;
}

int is_key_long_conversion_allowed()
{
    if (pSimkeyVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimkeyVTable);
    }
    return 1;
}

int key_to_long(const void *pValue, long *nValue)
{
    if (pSimkeyVTable != NULL) {
        return VTable_to_long(pValue, pSimkeyVTable, nValue);
    }
    *nValue = (long)*((key*)pValue);
    return 1;
}

void compare_key(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimkeyVTable != NULL
        && pSimkeyVTable->m_version >= Scv612
        && pSimkeyVTable->m_pfnCompare != NULL) {
        if (pSimkeyVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimkeyVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimkeyVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(key*)pValue1), (int)(*(key*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_key_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(key_values, key_nb_values, pfnStrAppend, pStrObj);
}

int init_key(void *pValue)
{
    *(key*)pValue = KeyA;
    return 1;
}

int release_key(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_key(void *pToValue, const void *pFromValue)
{
    *((key*)pToValue) = *((key*)pFromValue);
    return 1;
}

SimTypeUtils _Type_key_Utils = {
    key_to_string,
    check_key_string,
    string_to_key,
    is_key_double_conversion_allowed,
    key_to_double,
    is_key_long_conversion_allowed,
    key_to_long,
    compare_key,
    get_key_signature,
    init_key,
    release_key,
    copy_key,
    sizeof(key)
};

/****************************************************************
 ** msg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimmsgVTable_defined
    extern struct SimTypeVTable *pSimmsgVTable;
  #else 
    struct SimTypeVTable *pSimmsgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimmsgVTable;
#endif

static SimFieldUtils msg_fields[] = {
    {"kind", offsetof(msg,kind), &_Type_msg_kind_Utils},
    {"dest", offsetof(msg,dest), &_Type_agent_Utils},
    {"k", offsetof(msg,k), &_Type_key_Utils},
    {"d", offsetof(msg,d), &_Type_array_Utils},
};

int msg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimmsgVTable != NULL
        && pSimmsgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimmsgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, msg_fields, 4, pfnStrAppend, pStrObj);
}

int check_msg_string(const char *str, char **endptr)
{
    static msg rTemp;
    return string_to_msg(str, &rTemp, endptr);
}

int string_to_msg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimmsgVTable != NULL) {
        nRet = string_to_VTable(str, pSimmsgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, msg_fields, 4, endptr);
    }
    return nRet;
}

int is_msg_double_conversion_allowed()
{
    if (pSimmsgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimmsgVTable);
    }
    return 0;
}

int msg_to_double(const void *pValue, double *nValue)
{
    if (pSimmsgVTable != NULL) {
        return VTable_to_double(pValue, pSimmsgVTable, nValue);
    }
    return 0;
}

int is_msg_long_conversion_allowed()
{
    if (pSimmsgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimmsgVTable);
    }
    return 0;
}

int msg_to_long(const void *pValue, long *nValue)
{
    if (pSimmsgVTable != NULL) {
        return VTable_to_long(pValue, pSimmsgVTable, nValue);
    }
    return 0;
}

void compare_msg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimmsgVTable != NULL
        && pSimmsgVTable->m_version >= Scv612
        && pSimmsgVTable->m_pfnCompare != NULL) {
        if (pSimmsgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimmsgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimmsgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, msg_fields, 4, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_msg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(msg_fields, 4, pfnStrAppend, pStrObj);
}

int init_msg(void *pValue)
{
    init_msg_kind(&(((msg*)pValue)->kind));
    init_agent(&(((msg*)pValue)->dest));
    init_key(&(((msg*)pValue)->k));
    init_array(&(((msg*)pValue)->d));
    return 1;
}

int release_msg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_msg(void *pToValue, const void *pFromValue)
{
    kcg_copy_msg((msg*)pToValue, (msg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_msg_Utils = {
    msg_to_string,
    check_msg_string,
    string_to_msg,
    is_msg_double_conversion_allowed,
    msg_to_double,
    is_msg_long_conversion_allowed,
    msg_to_long,
    compare_msg,
    get_msg_signature,
    init_msg,
    release_msg,
    copy_msg,
    sizeof(msg)
};

/****************************************************************
 ** msg_kind 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimmsg_kindVTable_defined
    extern struct SimTypeVTable *pSimmsg_kindVTable;
  #else 
    struct SimTypeVTable *pSimmsg_kindVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimmsg_kindVTable;
#endif

static SimEnumValUtils msg_kind_values[] = {
    { "No_msg", No_msg},
    { "No_msg", No_msg},
    { "Msg1", Msg1},
    { "Msg1", Msg1},
    { "Msg2", Msg2},
    { "Msg2", Msg2},
    { "Msg3", Msg3},
    { "Msg3", Msg3},
};
const int msg_kind_nb_values = 8;

int msg_kind_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimmsg_kindVTable != NULL
        && pSimmsg_kindVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimmsg_kindVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(msg_kind*)pValue, msg_kind_values, msg_kind_nb_values, pfnStrAppend, pStrObj); 
}

int check_msg_kind_string(const char *str, char **endptr)
{
    static msg_kind rTemp;
    return string_to_msg_kind(str, &rTemp, endptr);
}

int string_to_msg_kind(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimmsg_kindVTable != NULL) {
        nRet = string_to_VTable(str, pSimmsg_kindVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, msg_kind_values, msg_kind_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(msg_kind*)pValue = (msg_kind)nTemp;
    }
    return nRet;
}

int is_msg_kind_double_conversion_allowed()
{
    if (pSimmsg_kindVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimmsg_kindVTable);
    }
    return 1;
}

int msg_kind_to_double(const void *pValue, double *nValue)
{
    if (pSimmsg_kindVTable != NULL) {
        return VTable_to_double(pValue, pSimmsg_kindVTable, nValue);
    }
    *nValue = (double)*((msg_kind*)pValue);
    return 1;
}

int is_msg_kind_long_conversion_allowed()
{
    if (pSimmsg_kindVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimmsg_kindVTable);
    }
    return 1;
}

int msg_kind_to_long(const void *pValue, long *nValue)
{
    if (pSimmsg_kindVTable != NULL) {
        return VTable_to_long(pValue, pSimmsg_kindVTable, nValue);
    }
    *nValue = (long)*((msg_kind*)pValue);
    return 1;
}

void compare_msg_kind(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimmsg_kindVTable != NULL
        && pSimmsg_kindVTable->m_version >= Scv612
        && pSimmsg_kindVTable->m_pfnCompare != NULL) {
        if (pSimmsg_kindVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimmsg_kindVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimmsg_kindVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(msg_kind*)pValue1), (int)(*(msg_kind*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_msg_kind_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(msg_kind_values, msg_kind_nb_values, pfnStrAppend, pStrObj);
}

int init_msg_kind(void *pValue)
{
    *(msg_kind*)pValue = No_msg;
    return 1;
}

int release_msg_kind(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_msg_kind(void *pToValue, const void *pFromValue)
{
    *((msg_kind*)pToValue) = *((msg_kind*)pFromValue);
    return 1;
}

SimTypeUtils _Type_msg_kind_Utils = {
    msg_kind_to_string,
    check_msg_kind_string,
    string_to_msg_kind,
    is_msg_kind_double_conversion_allowed,
    msg_kind_to_double,
    is_msg_kind_long_conversion_allowed,
    msg_kind_to_long,
    compare_msg_kind,
    get_msg_kind_signature,
    init_msg_kind,
    release_msg_kind,
    copy_msg_kind,
    sizeof(msg_kind)
};

/****************************************************************
 ** SSM_ST 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_STVTable_defined
    extern struct SimTypeVTable *pSimSSM_STVTable;
  #else 
    struct SimTypeVTable *pSimSSM_STVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_STVTable;
#endif

static SimEnumValUtils SSM_ST_values[] = {
    { "recv_msg1_and_send_msg2", SSM_st_recv_msg1_and_send_msg2},
    { "recv_msg1_and_send_msg2", SSM_st_recv_msg1_and_send_msg2},
    { "recv_msg3", SSM_st_recv_msg3},
    { "recv_msg3", SSM_st_recv_msg3},
    { "connected", _4_SSM_st_connected},
    { "connected", _4_SSM_st_connected},
};
const int SSM_ST_nb_values = 6;

int SSM_ST_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_STVTable != NULL
        && pSimSSM_STVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_STVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST*)pValue, SSM_ST_values, SSM_ST_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_ST_string(const char *str, char **endptr)
{
    static SSM_ST rTemp;
    return string_to_SSM_ST(str, &rTemp, endptr);
}

int string_to_SSM_ST(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_STVTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_STVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_values, SSM_ST_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST*)pValue = (SSM_ST)nTemp;
    }
    return nRet;
}

int is_SSM_ST_double_conversion_allowed()
{
    if (pSimSSM_STVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_STVTable);
    }
    return 1;
}

int SSM_ST_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_STVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_STVTable, nValue);
    }
    *nValue = (double)*((SSM_ST*)pValue);
    return 1;
}

int is_SSM_ST_long_conversion_allowed()
{
    if (pSimSSM_STVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_STVTable);
    }
    return 1;
}

int SSM_ST_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_STVTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_STVTable, nValue);
    }
    *nValue = (long)*((SSM_ST*)pValue);
    return 1;
}

void compare_SSM_ST(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_STVTable != NULL
        && pSimSSM_STVTable->m_version >= Scv612
        && pSimSSM_STVTable->m_pfnCompare != NULL) {
        if (pSimSSM_STVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_STVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_STVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST*)pValue1), (int)(*(SSM_ST*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_ST_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_ST_values, SSM_ST_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_ST(void *pValue)
{
    *(SSM_ST*)pValue = SSM_st_recv_msg1_and_send_msg2;
    return 1;
}

int release_SSM_ST(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_ST(void *pToValue, const void *pFromValue)
{
    *((SSM_ST*)pToValue) = *((SSM_ST*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_ST_Utils = {
    SSM_ST_to_string,
    check_SSM_ST_string,
    string_to_SSM_ST,
    is_SSM_ST_double_conversion_allowed,
    SSM_ST_to_double,
    is_SSM_ST_long_conversion_allowed,
    SSM_ST_to_long,
    compare_SSM_ST,
    get_SSM_ST_signature,
    init_SSM_ST,
    release_SSM_ST,
    copy_SSM_ST,
    sizeof(SSM_ST)
};

/****************************************************************
 ** SSM_TR 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_TRVTable_defined
    extern struct SimTypeVTable *pSimSSM_TRVTable;
  #else 
    struct SimTypeVTable *pSimSSM_TRVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_TRVTable;
#endif

static SimEnumValUtils SSM_TR_values[] = {
    { "_5_SSM_TR_no_trans_", _5_SSM_TR_no_trans_},
    { "_5_SSM_TR_no_trans_", _5_SSM_TR_no_trans_},
    { "SSM_TR_recv_msg1_and_send_msg2_recv_msg3_1_recv_msg1_and_send_msg2", SSM_TR_recv_msg1_and_send_msg2_recv_msg3_1_recv_msg1_and_send_msg2},
    { "SSM_TR_recv_msg1_and_send_msg2_recv_msg3_1_recv_msg1_and_send_msg2", SSM_TR_recv_msg1_and_send_msg2_recv_msg3_1_recv_msg1_and_send_msg2},
    { "SSM_TR_recv_msg3_connected_1_recv_msg3", SSM_TR_recv_msg3_connected_1_recv_msg3},
    { "SSM_TR_recv_msg3_connected_1_recv_msg3", SSM_TR_recv_msg3_connected_1_recv_msg3},
};
const int SSM_TR_nb_values = 6;

int SSM_TR_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_TRVTable != NULL
        && pSimSSM_TRVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TRVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR*)pValue, SSM_TR_values, SSM_TR_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_TR_string(const char *str, char **endptr)
{
    static SSM_TR rTemp;
    return string_to_SSM_TR(str, &rTemp, endptr);
}

int string_to_SSM_TR(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_TRVTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_TRVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_values, SSM_TR_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR*)pValue = (SSM_TR)nTemp;
    }
    return nRet;
}

int is_SSM_TR_double_conversion_allowed()
{
    if (pSimSSM_TRVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_TRVTable);
    }
    return 1;
}

int SSM_TR_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_TRVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TRVTable, nValue);
    }
    *nValue = (double)*((SSM_TR*)pValue);
    return 1;
}

int is_SSM_TR_long_conversion_allowed()
{
    if (pSimSSM_TRVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_TRVTable);
    }
    return 1;
}

int SSM_TR_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_TRVTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_TRVTable, nValue);
    }
    *nValue = (long)*((SSM_TR*)pValue);
    return 1;
}

void compare_SSM_TR(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_TRVTable != NULL
        && pSimSSM_TRVTable->m_version >= Scv612
        && pSimSSM_TRVTable->m_pfnCompare != NULL) {
        if (pSimSSM_TRVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_TRVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_TRVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR*)pValue1), (int)(*(SSM_TR*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_TR_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_TR_values, SSM_TR_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_TR(void *pValue)
{
    *(SSM_TR*)pValue = _5_SSM_TR_no_trans_;
    return 1;
}

int release_SSM_TR(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_TR(void *pToValue, const void *pFromValue)
{
    *((SSM_TR*)pToValue) = *((SSM_TR*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_TR_Utils = {
    SSM_TR_to_string,
    check_SSM_TR_string,
    string_to_SSM_TR,
    is_SSM_TR_double_conversion_allowed,
    SSM_TR_to_double,
    is_SSM_TR_long_conversion_allowed,
    SSM_TR_to_long,
    compare_SSM_TR,
    get_SSM_TR_signature,
    init_SSM_TR,
    release_SSM_TR,
    copy_SSM_TR,
    sizeof(SSM_TR)
};

