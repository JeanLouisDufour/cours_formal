/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config E:/github/cours_formal/ns_scade/Simulation/config.txt
** Generation date: 2020-04-06T19:07:09
*************************************************************$ */
#ifndef _KCG_TYPES_H_
#define _KCG_TYPES_H_

#include "stddef.h"

#define KCG_MAPW_CPY

#include "./user_macros.h"

#ifndef kcg_char
#define kcg_char kcg_char
typedef char kcg_char;
#endif /* kcg_char */

#ifndef kcg_bool
#define kcg_bool kcg_bool
typedef unsigned char kcg_bool;
#endif /* kcg_bool */

#ifndef kcg_float32
#define kcg_float32 kcg_float32
typedef float kcg_float32;
#endif /* kcg_float32 */

#ifndef kcg_float64
#define kcg_float64 kcg_float64
typedef double kcg_float64;
#endif /* kcg_float64 */

#ifndef kcg_size
#define kcg_size kcg_size
typedef ptrdiff_t kcg_size;
#endif /* kcg_size */

#ifndef kcg_uint64
#define kcg_uint64 kcg_uint64
typedef unsigned long long kcg_uint64;
#endif /* kcg_uint64 */

#ifndef kcg_uint32
#define kcg_uint32 kcg_uint32
typedef unsigned long kcg_uint32;
#endif /* kcg_uint32 */

#ifndef kcg_uint16
#define kcg_uint16 kcg_uint16
typedef unsigned short kcg_uint16;
#endif /* kcg_uint16 */

#ifndef kcg_uint8
#define kcg_uint8 kcg_uint8
typedef unsigned char kcg_uint8;
#endif /* kcg_uint8 */

#ifndef kcg_int64
#define kcg_int64 kcg_int64
typedef signed long long kcg_int64;
#endif /* kcg_int64 */

#ifndef kcg_int32
#define kcg_int32 kcg_int32
typedef signed long kcg_int32;
#endif /* kcg_int32 */

#ifndef kcg_int16
#define kcg_int16 kcg_int16
typedef signed short kcg_int16;
#endif /* kcg_int16 */

#ifndef kcg_int8
#define kcg_int8 kcg_int8
typedef signed char kcg_int8;
#endif /* kcg_int8 */

#ifndef kcg_lit_float32
#define kcg_lit_float32(kcg_C1) ((kcg_float32) (kcg_C1))
#endif /* kcg_lit_float32 */

#ifndef kcg_lit_float64
#define kcg_lit_float64(kcg_C1) ((kcg_float64) (kcg_C1))
#endif /* kcg_lit_float64 */

#ifndef kcg_lit_size
#define kcg_lit_size(kcg_C1) ((kcg_size) (kcg_C1))
#endif /* kcg_lit_size */

#ifndef kcg_lit_uint64
#define kcg_lit_uint64(kcg_C1) ((kcg_uint64) (kcg_C1))
#endif /* kcg_lit_uint64 */

#ifndef kcg_lit_uint32
#define kcg_lit_uint32(kcg_C1) ((kcg_uint32) (kcg_C1))
#endif /* kcg_lit_uint32 */

#ifndef kcg_lit_uint16
#define kcg_lit_uint16(kcg_C1) ((kcg_uint16) (kcg_C1))
#endif /* kcg_lit_uint16 */

#ifndef kcg_lit_uint8
#define kcg_lit_uint8(kcg_C1) ((kcg_uint8) (kcg_C1))
#endif /* kcg_lit_uint8 */

#ifndef kcg_lit_int64
#define kcg_lit_int64(kcg_C1) ((kcg_int64) (kcg_C1))
#endif /* kcg_lit_int64 */

#ifndef kcg_lit_int32
#define kcg_lit_int32(kcg_C1) ((kcg_int32) (kcg_C1))
#endif /* kcg_lit_int32 */

#ifndef kcg_lit_int16
#define kcg_lit_int16(kcg_C1) ((kcg_int16) (kcg_C1))
#endif /* kcg_lit_int16 */

#ifndef kcg_lit_int8
#define kcg_lit_int8(kcg_C1) ((kcg_int8) (kcg_C1))
#endif /* kcg_lit_int8 */

#ifndef kcg_false
#define kcg_false ((kcg_bool) 0)
#endif /* kcg_false */

#ifndef kcg_true
#define kcg_true ((kcg_bool) 1)
#endif /* kcg_true */

#ifndef kcg_lsl_uint64
#define kcg_lsl_uint64(kcg_C1, kcg_C2)                                        \
  ((kcg_uint64) ((kcg_C1) << (kcg_C2)) & 0xffffffffffffffff)
#endif /* kcg_lsl_uint64 */

#ifndef kcg_lsl_uint32
#define kcg_lsl_uint32(kcg_C1, kcg_C2)                                        \
  ((kcg_uint32) ((kcg_C1) << (kcg_C2)) & 0xffffffff)
#endif /* kcg_lsl_uint32 */

#ifndef kcg_lsl_uint16
#define kcg_lsl_uint16(kcg_C1, kcg_C2)                                        \
  ((kcg_uint16) ((kcg_C1) << (kcg_C2)) & 0xffff)
#endif /* kcg_lsl_uint16 */

#ifndef kcg_lsl_uint8
#define kcg_lsl_uint8(kcg_C1, kcg_C2)                                         \
  ((kcg_uint8) ((kcg_C1) << (kcg_C2)) & 0xff)
#endif /* kcg_lsl_uint8 */

#ifndef kcg_lnot_uint64
#define kcg_lnot_uint64(kcg_C1) ((kcg_C1) ^ 0xffffffffffffffff)
#endif /* kcg_lnot_uint64 */

#ifndef kcg_lnot_uint32
#define kcg_lnot_uint32(kcg_C1) ((kcg_C1) ^ 0xffffffff)
#endif /* kcg_lnot_uint32 */

#ifndef kcg_lnot_uint16
#define kcg_lnot_uint16(kcg_C1) ((kcg_C1) ^ 0xffff)
#endif /* kcg_lnot_uint16 */

#ifndef kcg_lnot_uint8
#define kcg_lnot_uint8(kcg_C1) ((kcg_C1) ^ 0xff)
#endif /* kcg_lnot_uint8 */

#ifndef kcg_assign
#include "kcg_assign.h"
#endif /* kcg_assign */

#ifndef kcg_assign_struct
#define kcg_assign_struct kcg_assign
#endif /* kcg_assign_struct */

#ifndef kcg_assign_array
#define kcg_assign_array kcg_assign
#endif /* kcg_assign_array */

/* i_action/ */
typedef enum kcg_tag_i_action {
  No_action,
  Memo,
  Erase,
  Reuse_for_A,
  Reuse_for_B,
  Msg1_for_A,
  Msg1_for_B,
  Msg1Fake_for_A,
  Msg1Fake_for_B,
  Msg3_for_A,
  Msg3_for_B
} i_action;
/* data/ */
typedef enum kcg_tag_data {
  No_data,
  AgentA,
  AgentB,
  AgentI,
  NonceA,
  NonceB,
  NonceI
} data;
/* key/ */
typedef enum kcg_tag_key { KeyA, KeyB, KeyI } key;
/* agent/ */
typedef enum kcg_tag_agent { Alice, Bob, Intruder } agent;
/* msg_kind/ */
typedef enum kcg_tag_msg_kind { No_msg, Msg1, Msg2, Msg3 } msg_kind;
/* alice/_: */
typedef enum kcg_tag__3_SSM_TR {
  SSM_TR_no_trans_,
  SSM_TR_send_msg1_recv_msg2_and_send_msg3_1_send_msg1,
  SSM_TR_recv_msg2_and_send_msg3_connected_1_recv_msg2_and_send_msg3
} _3_SSM_TR;
/* alice/_: */
typedef enum kcg_tag__2_SSM_ST {
  SSM_st_send_msg1,
  SSM_st_recv_msg2_and_send_msg3,
  SSM_st_connected
} _2_SSM_ST;
/* bob/_: */
typedef enum kcg_tag_SSM_TR {
  _5_SSM_TR_no_trans_,
  SSM_TR_recv_msg1_and_send_msg2_recv_msg3_1_recv_msg1_and_send_msg2,
  SSM_TR_recv_msg3_connected_1_recv_msg3
} SSM_TR;
/* bob/_: */
typedef enum kcg_tag_SSM_ST {
  SSM_st_recv_msg1_and_send_msg2,
  SSM_st_recv_msg3,
  _4_SSM_st_connected
} SSM_ST;
typedef data array[2];

/* msg/ */
typedef struct kcg_tag_msg { msg_kind kind; agent dest; key k; array d; } msg;

#ifndef kcg_copy_msg
#define kcg_copy_msg(kcg_C1, kcg_C2)                                          \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (msg)))
#endif /* kcg_copy_msg */

#ifndef kcg_copy_array
#define kcg_copy_array(kcg_C1, kcg_C2)                                        \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array)))
#endif /* kcg_copy_array */

#ifdef kcg_use_msg
#ifndef kcg_comp_msg
extern kcg_bool kcg_comp_msg(msg *kcg_c1, msg *kcg_c2);
#endif /* kcg_comp_msg */
#endif /* kcg_use_msg */

#ifdef kcg_use_array
#ifndef kcg_comp_array
extern kcg_bool kcg_comp_array(array *kcg_c1, array *kcg_c2);
#endif /* kcg_comp_array */
#endif /* kcg_use_array */

#endif /* _KCG_TYPES_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** kcg_types.h
** Generation date: 2020-04-06T19:07:09
*************************************************************$ */

