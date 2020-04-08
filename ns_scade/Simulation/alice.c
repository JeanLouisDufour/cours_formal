/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config E:/github/cours_formal/ns_scade/Simulation/config.txt
** Generation date: 2020-04-06T19:07:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "alice.h"

/* alice/ */
void alice(
  /* msg_in/ */
  msg *msg_in,
  /* Partner_in/ */
  agent Partner_in,
  outC_alice *outC)
{
  array tmp;
  array tmp1;
  key op_call;
  key _2_op_call;
  /* msg_out/ */
  msg msg_out_partial;
  /* doit/ */
  kcg_bool doit_partial;
  /* status_memo/ */
  kcg_bool status_memo_partial;
  /* _: */
  _2_SSM_ST state_nxt_partial;
  /* _: */
  kcg_bool reset_nxt_partial;
  /* _: */
  _3_SSM_TR _fired_partial;
  /* msg_out/ */
  msg _3_msg_out_partial;
  /* doit/ */
  kcg_bool _4_doit_partial;
  /* status_memo/ */
  kcg_bool _5_status_memo_partial;
  /* _: */
  _2_SSM_ST _6_state_nxt_partial;
  /* _: */
  kcg_bool _7_reset_nxt_partial;
  /* _: */
  _3_SSM_TR _8__fired_partial;
  /* msg_out/ */
  msg _9_msg_out_partial;
  /* doit/ */
  kcg_bool _10_doit_partial;
  /* status_memo/ */
  kcg_bool _11_status_memo_partial;
  /* _: */
  _2_SSM_ST _12_state_nxt_partial;
  /* _: */
  kcg_bool _13_reset_nxt_partial;
  /* _: */
  _3_SSM_TR _14__fired_partial;
  /* _: */
  _2_SSM_ST state_act_partial;
  /* _: */
  kcg_bool reset_act_partial;
  /* _: */
  _3_SSM_TR _fired_strong_partial;
  /* _:send_msg1:<1> */
  kcg_bool tr_1_guard_send_msg1;
  /* _: */
  _2_SSM_ST _15_state_act_partial;
  /* _: */
  kcg_bool _16_reset_act_partial;
  /* _: */
  _3_SSM_TR _17__fired_strong_partial;
  /* _:recv_msg2_and_send_msg3:<1> */
  kcg_bool tr_1_guard_recv_msg2_and_send_msg3;
  /* _: */
  _2_SSM_ST _18_state_act_partial;
  /* _: */
  kcg_bool _19_reset_act_partial;
  /* _: */
  _3_SSM_TR _20__fired_strong_partial;
  /* status_memo/ */
  kcg_bool last_status_memo;
  /* doit/ */
  kcg_bool last_doit;
  /* _: */
  kcg_bool reset_sel;
  /* _: */
  kcg_bool reset_prv;

  outC->state_sel = outC->state_nxt;
  switch (outC->state_sel) {
    case SSM_st_connected :
      _18_state_act_partial = SSM_st_connected;
      break;
    default :
      /* this branch is empty */
      break;
  }
  last_doit = outC->doit;
  /* _: */
  switch (outC->state_sel) {
    case SSM_st_connected :
      outC->state_act = _18_state_act_partial;
      break;
    case SSM_st_recv_msg2_and_send_msg3 :
      tr_1_guard_recv_msg2_and_send_msg3 = last_doit;
      if (tr_1_guard_recv_msg2_and_send_msg3) {
        _15_state_act_partial = SSM_st_connected;
      }
      else {
        _15_state_act_partial = SSM_st_recv_msg2_and_send_msg3;
      }
      outC->state_act = _15_state_act_partial;
      break;
    case SSM_st_send_msg1 :
      tr_1_guard_send_msg1 = last_doit;
      if (tr_1_guard_send_msg1) {
        state_act_partial = SSM_st_recv_msg2_and_send_msg3;
      }
      else {
        state_act_partial = SSM_st_send_msg1;
      }
      outC->state_act = state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* Partner= */
  if (outC->init) {
    outC->Partner = Partner_in;
  }
  switch (outC->state_act) {
    case SSM_st_recv_msg2_and_send_msg3 :
      _2_op_call = /* _:recv_msg2_and_send_msg3:msg_out=(key_of_agent)/ */
        key_of_agent(outC->Partner);
      break;
    case SSM_st_send_msg1 :
      op_call = /* _:send_msg1:msg_out=(key_of_agent)/ */ key_of_agent(outC->Partner);
      break;
    default :
      /* this branch is empty */
      break;
  }
  last_status_memo = outC->status_memo;
  /* _: */
  switch (outC->state_act) {
    case SSM_st_connected :
      _11_status_memo_partial = kcg_true;
      outC->status_memo = _11_status_memo_partial;
      break;
    case SSM_st_recv_msg2_and_send_msg3 :
      _4_doit_partial = ((*msg_in).kind == Msg2) & ((*msg_in).dest == Alice) &
        ((*msg_in).k == KeyA) & ((*msg_in).d[0] == NonceA);
      /* _:recv_msg2_and_send_msg3:status_memo= */
      if (_4_doit_partial) {
        _5_status_memo_partial = kcg_true;
      }
      else {
        _5_status_memo_partial = last_status_memo;
      }
      outC->status_memo = _5_status_memo_partial;
      break;
    case SSM_st_send_msg1 :
      status_memo_partial = last_status_memo;
      outC->status_memo = status_memo_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->status = outC->status_memo;
  switch (outC->state_act) {
    case SSM_st_connected :
      _10_doit_partial = last_doit;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* _: */
  switch (outC->state_sel) {
    case SSM_st_connected :
      _20__fired_strong_partial = SSM_TR_no_trans_;
      outC->_fired_strong = _20__fired_strong_partial;
      break;
    case SSM_st_recv_msg2_and_send_msg3 :
      if (tr_1_guard_recv_msg2_and_send_msg3) {
        _17__fired_strong_partial =
          SSM_TR_recv_msg2_and_send_msg3_connected_1_recv_msg2_and_send_msg3;
      }
      else {
        _17__fired_strong_partial = SSM_TR_no_trans_;
      }
      outC->_fired_strong = _17__fired_strong_partial;
      break;
    case SSM_st_send_msg1 :
      if (tr_1_guard_send_msg1) {
        _fired_strong_partial = SSM_TR_send_msg1_recv_msg2_and_send_msg3_1_send_msg1;
      }
      else {
        _fired_strong_partial = SSM_TR_no_trans_;
      }
      outC->_fired_strong = _fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* _: */
  switch (outC->state_act) {
    case SSM_st_connected :
      _14__fired_partial = outC->_fired_strong;
      _13_reset_nxt_partial = kcg_false;
      _12_state_nxt_partial = SSM_st_connected;
      kcg_copy_msg(&_9_msg_out_partial, msg_in);
      kcg_copy_msg(&outC->msg_out, &_9_msg_out_partial);
      outC->doit = _10_doit_partial;
      outC->state_nxt = _12_state_nxt_partial;
      break;
    case SSM_st_recv_msg2_and_send_msg3 :
      _8__fired_partial = outC->_fired_strong;
      _7_reset_nxt_partial = kcg_false;
      _6_state_nxt_partial = SSM_st_recv_msg2_and_send_msg3;
      /* _:recv_msg2_and_send_msg3:msg_out= */
      if (_4_doit_partial) {
        tmp[0] = (*msg_in).d[1];
        tmp[1] = No_data;
        _3_msg_out_partial.kind = Msg3;
        _3_msg_out_partial.dest = outC->Partner;
        _3_msg_out_partial.k = _2_op_call;
        kcg_copy_array(&_3_msg_out_partial.d, &tmp);
      }
      else {
        kcg_copy_msg(&_3_msg_out_partial, msg_in);
      }
      kcg_copy_msg(&outC->msg_out, &_3_msg_out_partial);
      outC->doit = _4_doit_partial;
      outC->state_nxt = _6_state_nxt_partial;
      break;
    case SSM_st_send_msg1 :
      _fired_partial = outC->_fired_strong;
      reset_nxt_partial = kcg_false;
      state_nxt_partial = SSM_st_send_msg1;
      doit_partial = ((*msg_in).kind == No_msg) & (outC->Partner != Alice);
      /* _:send_msg1:msg_out= */
      if (doit_partial) {
        tmp1[0] = NonceA;
        tmp1[1] = AgentA;
        msg_out_partial.kind = Msg1;
        msg_out_partial.dest = outC->Partner;
        msg_out_partial.k = op_call;
        kcg_copy_array(&msg_out_partial.d, &tmp1);
      }
      else {
        kcg_copy_msg(&msg_out_partial, msg_in);
      }
      kcg_copy_msg(&outC->msg_out, &msg_out_partial);
      outC->doit = doit_partial;
      outC->state_nxt = state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  reset_sel = outC->reset_nxt;
  /* _: */
  switch (outC->state_act) {
    case SSM_st_connected :
      outC->reset_nxt = _13_reset_nxt_partial;
      outC->_fired = _14__fired_partial;
      break;
    case SSM_st_recv_msg2_and_send_msg3 :
      outC->reset_nxt = _7_reset_nxt_partial;
      outC->_fired = _8__fired_partial;
      break;
    case SSM_st_send_msg1 :
      outC->reset_nxt = reset_nxt_partial;
      outC->_fired = _fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->state_sel) {
    case SSM_st_connected :
      _19_reset_act_partial = kcg_false;
      break;
    case SSM_st_recv_msg2_and_send_msg3 :
      _16_reset_act_partial = kcg_false;
      break;
    case SSM_st_send_msg1 :
      reset_act_partial = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  reset_prv = outC->reset_act;
  /* _: */
  switch (outC->state_sel) {
    case SSM_st_connected :
      outC->reset_act = _19_reset_act_partial;
      break;
    case SSM_st_recv_msg2_and_send_msg3 :
      outC->reset_act = _16_reset_act_partial;
      break;
    case SSM_st_send_msg1 :
      outC->reset_act = reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void alice_init(outC_alice *outC)
{
  kcg_size idx;

  outC->_fired = SSM_TR_no_trans_;
  outC->_fired_strong = SSM_TR_no_trans_;
  outC->state_act = SSM_st_send_msg1;
  outC->state_sel = SSM_st_send_msg1;
  outC->init = kcg_true;
  outC->status = kcg_true;
  outC->Partner = Alice;
  outC->msg_out.kind = No_msg;
  outC->msg_out.dest = Alice;
  outC->msg_out.k = KeyA;
  for (idx = 0; idx < 2; idx++) {
    outC->msg_out.d[idx] = No_data;
  }
  outC->reset_act = kcg_false;
  outC->reset_nxt = kcg_false;
  outC->status_memo = kcg_false;
  outC->doit = kcg_false;
  outC->state_nxt = SSM_st_send_msg1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void alice_reset(outC_alice *outC)
{
  outC->init = kcg_true;
  outC->reset_act = kcg_false;
  outC->reset_nxt = kcg_false;
  outC->status_memo = kcg_false;
  outC->doit = kcg_false;
  outC->state_nxt = SSM_st_send_msg1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** alice.c
** Generation date: 2020-04-06T19:07:09
*************************************************************$ */

