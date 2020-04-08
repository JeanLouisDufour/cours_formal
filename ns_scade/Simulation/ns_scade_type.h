#ifndef NS_SCADE_TYPES_CONVERSION
#define NS_SCADE_TYPES_CONVERSION

#include "SmuTypes.h"

/****************************************************************
 ** _2_SSM_ST 
 ****************************************************************/
extern int _2_SSM_ST_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check__2_SSM_ST_string(const char *str, char **endptr);
extern int string_to__2_SSM_ST(const char *str, void *pValue, char **endptr);
extern int is__2_SSM_ST_double_conversion_allowed();
extern int _2_SSM_ST_to_double(const void *pValue, double *nValue);
extern int is__2_SSM_ST_long_conversion_allowed();
extern int _2_SSM_ST_to_long(const void *pValue, long *nValue);
extern void compare__2_SSM_ST(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get__2_SSM_ST_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init__2_SSM_ST(void *pValue);
extern int release__2_SSM_ST(void *pValue);
extern int copy__2_SSM_ST(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type__2_SSM_ST_Utils;

/****************************************************************
 ** _3_SSM_TR 
 ****************************************************************/
extern int _3_SSM_TR_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check__3_SSM_TR_string(const char *str, char **endptr);
extern int string_to__3_SSM_TR(const char *str, void *pValue, char **endptr);
extern int is__3_SSM_TR_double_conversion_allowed();
extern int _3_SSM_TR_to_double(const void *pValue, double *nValue);
extern int is__3_SSM_TR_long_conversion_allowed();
extern int _3_SSM_TR_to_long(const void *pValue, long *nValue);
extern void compare__3_SSM_TR(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get__3_SSM_TR_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init__3_SSM_TR(void *pValue);
extern int release__3_SSM_TR(void *pValue);
extern int copy__3_SSM_TR(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type__3_SSM_TR_Utils;

/****************************************************************
 ** agent 
 ****************************************************************/
extern int agent_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_agent_string(const char *str, char **endptr);
extern int string_to_agent(const char *str, void *pValue, char **endptr);
extern int is_agent_double_conversion_allowed();
extern int agent_to_double(const void *pValue, double *nValue);
extern int is_agent_long_conversion_allowed();
extern int agent_to_long(const void *pValue, long *nValue);
extern void compare_agent(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_agent_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_agent(void *pValue);
extern int release_agent(void *pValue);
extern int copy_agent(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_agent_Utils;

/****************************************************************
 ** array 
 ****************************************************************/
extern int array_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_array_string(const char *str, char **endptr);
extern int string_to_array(const char *str, void *pValue, char **endptr);
extern int is_array_double_conversion_allowed();
extern int array_to_double(const void *pValue, double *nValue);
extern int is_array_long_conversion_allowed();
extern int array_to_long(const void *pValue, long *nValue);
extern void compare_array(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_array_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_array(void *pValue);
extern int release_array(void *pValue);
extern int copy_array(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_array_Utils;

/****************************************************************
 ** data 
 ****************************************************************/
extern int data_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_data_string(const char *str, char **endptr);
extern int string_to_data(const char *str, void *pValue, char **endptr);
extern int is_data_double_conversion_allowed();
extern int data_to_double(const void *pValue, double *nValue);
extern int is_data_long_conversion_allowed();
extern int data_to_long(const void *pValue, long *nValue);
extern void compare_data(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_data_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_data(void *pValue);
extern int release_data(void *pValue);
extern int copy_data(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_data_Utils;

/****************************************************************
 ** i_action 
 ****************************************************************/
extern int i_action_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_i_action_string(const char *str, char **endptr);
extern int string_to_i_action(const char *str, void *pValue, char **endptr);
extern int is_i_action_double_conversion_allowed();
extern int i_action_to_double(const void *pValue, double *nValue);
extern int is_i_action_long_conversion_allowed();
extern int i_action_to_long(const void *pValue, long *nValue);
extern void compare_i_action(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_i_action_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_i_action(void *pValue);
extern int release_i_action(void *pValue);
extern int copy_i_action(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_i_action_Utils;

/****************************************************************
 ** kcg_bool 
 ****************************************************************/
extern int kcg_bool_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_bool_string(const char *str, char **endptr);
extern int string_to_kcg_bool(const char *str, void *pValue, char **endptr);
extern int is_kcg_bool_double_conversion_allowed();
extern int kcg_bool_to_double(const void *pValue, double *nValue);
extern int is_kcg_bool_long_conversion_allowed();
extern int kcg_bool_to_long(const void *pValue, long *nValue);
extern void compare_kcg_bool(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_bool_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_bool(void *pValue);
extern int release_kcg_bool(void *pValue);
extern int copy_kcg_bool(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_bool_Utils;

/****************************************************************
 ** kcg_char 
 ****************************************************************/
extern int kcg_char_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_char_string(const char *str, char **endptr);
extern int string_to_kcg_char(const char *str, void *pValue, char **endptr);
extern int is_kcg_char_double_conversion_allowed();
extern int kcg_char_to_double(const void *pValue, double *nValue);
extern int is_kcg_char_long_conversion_allowed();
extern int kcg_char_to_long(const void *pValue, long *nValue);
extern void compare_kcg_char(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_char_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_char(void *pValue);
extern int release_kcg_char(void *pValue);
extern int copy_kcg_char(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_char_Utils;

/****************************************************************
 ** kcg_float32 
 ****************************************************************/
extern int kcg_float32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_float32_string(const char *str, char **endptr);
extern int string_to_kcg_float32(const char *str, void *pValue, char **endptr);
extern int is_kcg_float32_double_conversion_allowed();
extern int kcg_float32_to_double(const void *pValue, double *nValue);
extern int is_kcg_float32_long_conversion_allowed();
extern int kcg_float32_to_long(const void *pValue, long *nValue);
extern void compare_kcg_float32(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_float32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_float32(void *pValue);
extern int release_kcg_float32(void *pValue);
extern int copy_kcg_float32(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_float32_Utils;

/****************************************************************
 ** kcg_float64 
 ****************************************************************/
extern int kcg_float64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_float64_string(const char *str, char **endptr);
extern int string_to_kcg_float64(const char *str, void *pValue, char **endptr);
extern int is_kcg_float64_double_conversion_allowed();
extern int kcg_float64_to_double(const void *pValue, double *nValue);
extern int is_kcg_float64_long_conversion_allowed();
extern int kcg_float64_to_long(const void *pValue, long *nValue);
extern void compare_kcg_float64(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_float64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_float64(void *pValue);
extern int release_kcg_float64(void *pValue);
extern int copy_kcg_float64(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_float64_Utils;

/****************************************************************
 ** kcg_int16 
 ****************************************************************/
extern int kcg_int16_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_int16_string(const char *str, char **endptr);
extern int string_to_kcg_int16(const char *str, void *pValue, char **endptr);
extern int is_kcg_int16_double_conversion_allowed();
extern int kcg_int16_to_double(const void *pValue, double *nValue);
extern int is_kcg_int16_long_conversion_allowed();
extern int kcg_int16_to_long(const void *pValue, long *nValue);
extern void compare_kcg_int16(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_int16_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_int16(void *pValue);
extern int release_kcg_int16(void *pValue);
extern int copy_kcg_int16(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_int16_Utils;

/****************************************************************
 ** kcg_int32 
 ****************************************************************/
extern int kcg_int32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_int32_string(const char *str, char **endptr);
extern int string_to_kcg_int32(const char *str, void *pValue, char **endptr);
extern int is_kcg_int32_double_conversion_allowed();
extern int kcg_int32_to_double(const void *pValue, double *nValue);
extern int is_kcg_int32_long_conversion_allowed();
extern int kcg_int32_to_long(const void *pValue, long *nValue);
extern void compare_kcg_int32(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_int32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_int32(void *pValue);
extern int release_kcg_int32(void *pValue);
extern int copy_kcg_int32(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_int32_Utils;

/****************************************************************
 ** kcg_int64 
 ****************************************************************/
extern int kcg_int64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_int64_string(const char *str, char **endptr);
extern int string_to_kcg_int64(const char *str, void *pValue, char **endptr);
extern int is_kcg_int64_double_conversion_allowed();
extern int kcg_int64_to_double(const void *pValue, double *nValue);
extern int is_kcg_int64_long_conversion_allowed();
extern int kcg_int64_to_long(const void *pValue, long *nValue);
extern void compare_kcg_int64(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_int64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_int64(void *pValue);
extern int release_kcg_int64(void *pValue);
extern int copy_kcg_int64(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_int64_Utils;

/****************************************************************
 ** kcg_int8 
 ****************************************************************/
extern int kcg_int8_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_int8_string(const char *str, char **endptr);
extern int string_to_kcg_int8(const char *str, void *pValue, char **endptr);
extern int is_kcg_int8_double_conversion_allowed();
extern int kcg_int8_to_double(const void *pValue, double *nValue);
extern int is_kcg_int8_long_conversion_allowed();
extern int kcg_int8_to_long(const void *pValue, long *nValue);
extern void compare_kcg_int8(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_int8_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_int8(void *pValue);
extern int release_kcg_int8(void *pValue);
extern int copy_kcg_int8(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_int8_Utils;

/****************************************************************
 ** kcg_size 
 ****************************************************************/
extern int kcg_size_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_size_string(const char *str, char **endptr);
extern int string_to_kcg_size(const char *str, void *pValue, char **endptr);
extern int is_kcg_size_double_conversion_allowed();
extern int kcg_size_to_double(const void *pValue, double *nValue);
extern int is_kcg_size_long_conversion_allowed();
extern int kcg_size_to_long(const void *pValue, long *nValue);
extern void compare_kcg_size(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_size_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_size(void *pValue);
extern int release_kcg_size(void *pValue);
extern int copy_kcg_size(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_size_Utils;

/****************************************************************
 ** kcg_uint16 
 ****************************************************************/
extern int kcg_uint16_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_uint16_string(const char *str, char **endptr);
extern int string_to_kcg_uint16(const char *str, void *pValue, char **endptr);
extern int is_kcg_uint16_double_conversion_allowed();
extern int kcg_uint16_to_double(const void *pValue, double *nValue);
extern int is_kcg_uint16_long_conversion_allowed();
extern int kcg_uint16_to_long(const void *pValue, long *nValue);
extern void compare_kcg_uint16(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_uint16_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_uint16(void *pValue);
extern int release_kcg_uint16(void *pValue);
extern int copy_kcg_uint16(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_uint16_Utils;

/****************************************************************
 ** kcg_uint32 
 ****************************************************************/
extern int kcg_uint32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_uint32_string(const char *str, char **endptr);
extern int string_to_kcg_uint32(const char *str, void *pValue, char **endptr);
extern int is_kcg_uint32_double_conversion_allowed();
extern int kcg_uint32_to_double(const void *pValue, double *nValue);
extern int is_kcg_uint32_long_conversion_allowed();
extern int kcg_uint32_to_long(const void *pValue, long *nValue);
extern void compare_kcg_uint32(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_uint32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_uint32(void *pValue);
extern int release_kcg_uint32(void *pValue);
extern int copy_kcg_uint32(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_uint32_Utils;

/****************************************************************
 ** kcg_uint64 
 ****************************************************************/
extern int kcg_uint64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_uint64_string(const char *str, char **endptr);
extern int string_to_kcg_uint64(const char *str, void *pValue, char **endptr);
extern int is_kcg_uint64_double_conversion_allowed();
extern int kcg_uint64_to_double(const void *pValue, double *nValue);
extern int is_kcg_uint64_long_conversion_allowed();
extern int kcg_uint64_to_long(const void *pValue, long *nValue);
extern void compare_kcg_uint64(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_uint64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_uint64(void *pValue);
extern int release_kcg_uint64(void *pValue);
extern int copy_kcg_uint64(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_uint64_Utils;

/****************************************************************
 ** kcg_uint8 
 ****************************************************************/
extern int kcg_uint8_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_uint8_string(const char *str, char **endptr);
extern int string_to_kcg_uint8(const char *str, void *pValue, char **endptr);
extern int is_kcg_uint8_double_conversion_allowed();
extern int kcg_uint8_to_double(const void *pValue, double *nValue);
extern int is_kcg_uint8_long_conversion_allowed();
extern int kcg_uint8_to_long(const void *pValue, long *nValue);
extern void compare_kcg_uint8(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_uint8_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_uint8(void *pValue);
extern int release_kcg_uint8(void *pValue);
extern int copy_kcg_uint8(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_uint8_Utils;

/****************************************************************
 ** key 
 ****************************************************************/
extern int key_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_key_string(const char *str, char **endptr);
extern int string_to_key(const char *str, void *pValue, char **endptr);
extern int is_key_double_conversion_allowed();
extern int key_to_double(const void *pValue, double *nValue);
extern int is_key_long_conversion_allowed();
extern int key_to_long(const void *pValue, long *nValue);
extern void compare_key(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_key_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_key(void *pValue);
extern int release_key(void *pValue);
extern int copy_key(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_key_Utils;

/****************************************************************
 ** msg 
 ****************************************************************/
extern int msg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_msg_string(const char *str, char **endptr);
extern int string_to_msg(const char *str, void *pValue, char **endptr);
extern int is_msg_double_conversion_allowed();
extern int msg_to_double(const void *pValue, double *nValue);
extern int is_msg_long_conversion_allowed();
extern int msg_to_long(const void *pValue, long *nValue);
extern void compare_msg(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_msg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_msg(void *pValue);
extern int release_msg(void *pValue);
extern int copy_msg(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_msg_Utils;

/****************************************************************
 ** msg_kind 
 ****************************************************************/
extern int msg_kind_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_msg_kind_string(const char *str, char **endptr);
extern int string_to_msg_kind(const char *str, void *pValue, char **endptr);
extern int is_msg_kind_double_conversion_allowed();
extern int msg_kind_to_double(const void *pValue, double *nValue);
extern int is_msg_kind_long_conversion_allowed();
extern int msg_kind_to_long(const void *pValue, long *nValue);
extern void compare_msg_kind(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_msg_kind_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_msg_kind(void *pValue);
extern int release_msg_kind(void *pValue);
extern int copy_msg_kind(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_msg_kind_Utils;

/****************************************************************
 ** SSM_ST 
 ****************************************************************/
extern int SSM_ST_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_SSM_ST_string(const char *str, char **endptr);
extern int string_to_SSM_ST(const char *str, void *pValue, char **endptr);
extern int is_SSM_ST_double_conversion_allowed();
extern int SSM_ST_to_double(const void *pValue, double *nValue);
extern int is_SSM_ST_long_conversion_allowed();
extern int SSM_ST_to_long(const void *pValue, long *nValue);
extern void compare_SSM_ST(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_SSM_ST_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_SSM_ST(void *pValue);
extern int release_SSM_ST(void *pValue);
extern int copy_SSM_ST(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_SSM_ST_Utils;

/****************************************************************
 ** SSM_TR 
 ****************************************************************/
extern int SSM_TR_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_SSM_TR_string(const char *str, char **endptr);
extern int string_to_SSM_TR(const char *str, void *pValue, char **endptr);
extern int is_SSM_TR_double_conversion_allowed();
extern int SSM_TR_to_double(const void *pValue, double *nValue);
extern int is_SSM_TR_long_conversion_allowed();
extern int SSM_TR_to_long(const void *pValue, long *nValue);
extern void compare_SSM_TR(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_SSM_TR_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_SSM_TR(void *pValue);
extern int release_SSM_TR(void *pValue);
extern int copy_SSM_TR(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_SSM_TR_Utils;


#endif /*NS_SCADE_TYPES_CONVERSION */
