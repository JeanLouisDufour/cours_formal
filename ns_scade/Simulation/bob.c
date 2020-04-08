/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config E:/github/cours_formal/ns_scade/Simulation/config.txt
** Generation date: 2020-04-06T19:07:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "bob.h"

/* bob/ */
void bob(/* msg_in/ */ msg *msg_in, outC_bob *outC)
{
  array tmp;
  kcg_bool op_call;
  agent _1_op_call;
  key _2_op_call;
  /* msg_out/ */
  msg msg_out_partial;
  /* doit/ */
  kcg_bool doit_partial;
  /* partner_memo/ */
  agent partner_memo_partial;
  /* status_memo/ */
  kcg_bool status_memo_partial;
  /* _: */
  SSM_ST state_nxt_partial;
  /* _: */
  kcg_bool reset_nxt_partial;
  /* _: */
  SSM_TR _fired_partial;
  /* msg_out/ */
  msg _3_msg_out_partial;
  /* doit/ */
  kcg_bool _4_doit_partial;
  /* partner_memo/ */
  agent _5_partner_memo_partial;
  /* status_memo/ */
  kcg_bool _6_status_memo_partial;
  /* _: */
  SSM_ST _7_state_nxt_partial;
  /* _: */
  kcg_bool _8_reset_nxt_partial;
  /* _: */
  SSM_TR _9__fired_partial;
  /* msg_out/ */
  msg _10_msg_out_partial;
  /* doit/ */
  kcg_bool _11_doit_partial;
  /* partner_memo/ */
  agent _12_partner_memo_partial;
  /* status_memo/ */
  kcg_bool _13_status_memo_partial;
  /* _: */
  SSM_ST _14_state_nxt_partial;
  /* _: */
  kcg_bool _15_reset_nxt_partial;
  /* _: */
  SSM_TR _16__fired_partial;
  /* _: */
  SSM_ST state_act_partial;
  /* _: */
  kcg_bool reset_act_partial;
  /* _: */
  SSM_TR _fired_strong_partial;
  /* _:recv_msg1_and_send_msg2:<1> */
  kcg_bool tr_1_guard_recv_msg1_and_send_msg2;
  /* _: */
  SSM_ST _17_state_act_partial;
  /* _: */
  kcg_bool _18_reset_act_partial;
  /* _: */
  SSM_TR _19__fired_strong_partial;
  /* _:recv_msg3:<1> */
  kcg_bool tr_1_guard_recv_msg3;
  /* _: */
  SSM_ST _20_state_act_partial;
  /* _: */
  kcg_bool _21_reset_act_partial;
  /* _: */
  SSM_TR _22__fired_strong_partial;
  /* status_memo/ */
  kcg_bool last_status_memo;
  /* partner_memo/ */
  agent last_partner_memo;
  /* doit/ */
  kcg_bool last_doit;
  /* _: */
  kcg_bool reset_sel;
  /* _: */
  kcg_bool reset_prv;

  outC->state_sel = outC->state_nxt;
  switch (outC->state_sel) {
    case _4_SSM_st_connected :
      _20_state_act_partial = _4_SSM_st_connected;
      break;
    default :
      /* this branch is empty */
      break;
  }
  last_doit = outC->doit;
  /* _: */
  switch (outC->state_sel) {
    case _4_SSM_st_connected :
      outC->state_act = _20_state_act_partial;
      break;
    case SSM_st_recv_msg3 :
      tr_1_guard_recv_msg3 = last_doit;
      if (tr_1_guard_recv_msg3) {
        _17_state_act_partial = _4_SSM_st_connected;
      }
      else {
        _17_state_act_partial = SSM_st_recv_msg3;
      }
      outC->state_act = _17_state_act_partial;
      break;
    case SSM_st_recv_msg1_and_send_msg2 :
      tr_1_guard_recv_msg1_and_send_msg2 = last_doit;
      if (tr_1_guard_recv_msg1_and_send_msg2) {
        state_act_partial = SSM_st_recv_msg3;
      }
      else {
        state_act_partial = SSM_st_recv_msg1_and_send_msg2;
      }
      outC->state_act = state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->state_act) {
    case SSM_st_recv_msg1_and_send_msg2 :
      op_call = /* _:recv_msg1_and_send_msg2:doit=(data_is_agent)/ */
        data_is_agent((*msg_in).d[1]);
      _1_op_call = /* _:recv_msg1_and_send_msg2:partner_memo=(data_to_agent)/ */
        data_to_agent((*msg_in).d[1]);
      break;
    default :
      /* this branch is empty */
      break;
  }
  last_partner_memo = outC->partner_memo;
  switch (outC->state_act) {
    case SSM_st_recv_msg1_and_send_msg2 :
      doit_partial = ((*msg_in).kind == Msg1) & ((*msg_in).dest == Bob) &
        ((*msg_in).k == KeyB) & op_call & ((*msg_in).d[1] != AgentB);
      /* _:recv_msg1_and_send_msg2:partner_memo= */
      if (doit_partial) {
        partner_memo_partial = _1_op_call;
      }
      else {
        partner_memo_partial = last_partner_memo;
      }
      _2_op_call = /* _:recv_msg1_and_send_msg2:msg_out=(key_of_agent)/ */
        key_of_agent(partner_memo_partial);
      break;
    default :
      /* this branch is empty */
      break;
  }
  last_status_memo = outC->status_memo;
  /* _: */
  switch (outC->state_act) {
    case _4_SSM_st_connected :
      _13_status_memo_partial = kcg_true;
      outC->status_memo = _13_status_memo_partial;
      break;
    case SSM_st_recv_msg3 :
      _4_doit_partial = ((*msg_in).kind == Msg3) & ((*msg_in).dest == Bob) &
        ((*msg_in).k == KeyB) & ((*msg_in).d[0] == NonceB) & ((*msg_in).d[1] ==
          No_data);
      /* _:recv_msg3:status_memo= */
      if (_4_doit_partial) {
        _6_status_memo_partial = kcg_true;
      }
      else {
        _6_status_memo_partial = last_status_memo;
      }
      outC->status_memo = _6_status_memo_partial;
      break;
    case SSM_st_recv_msg1_and_send_msg2 :
      status_memo_partial = last_status_memo;
      outC->status_memo = status_memo_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->status = outC->status_memo;
  /* _: */
  switch (outC->state_act) {
    case _4_SSM_st_connected :
      _12_partner_memo_partial = last_partner_memo;
      outC->partner_memo = _12_partner_memo_partial;
      break;
    case SSM_st_recv_msg3 :
      _5_partner_memo_partial = last_partner_memo;
      outC->partner_memo = _5_partner_memo_partial;
      break;
    case SSM_st_recv_msg1_and_send_msg2 :
      outC->partner_memo = partner_memo_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->partner = outC->partner_memo;
  switch (outC->state_act) {
    case _4_SSM_st_connected :
      _11_doit_partial = last_doit;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* _: */
  switch (outC->state_sel) {
    case _4_SSM_st_connected :
      _22__fired_strong_partial = _5_SSM_TR_no_trans_;
      outC->_fired_strong = _22__fired_strong_partial;
      break;
    case SSM_st_recv_msg3 :
      if (tr_1_guard_recv_msg3) {
        _19__fired_strong_partial = SSM_TR_recv_msg3_connected_1_recv_msg3;
      }
      else {
        _19__fired_strong_partial = _5_SSM_TR_no_trans_;
      }
      outC->_fired_strong = _19__fired_strong_partial;
      break;
    case SSM_st_recv_msg1_and_send_msg2 :
      if (tr_1_guard_recv_msg1_and_send_msg2) {
        _fired_strong_partial =
          SSM_TR_recv_msg1_and_send_msg2_recv_msg3_1_recv_msg1_and_send_msg2;
      }
      else {
        _fired_strong_partial = _5_SSM_TR_no_trans_;
      }
      outC->_fired_strong = _fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* _: */
  switch (outC->state_act) {
    case _4_SSM_st_connected :
      _16__fired_partial = outC->_fired_strong;
      _15_reset_nxt_partial = kcg_false;
      _14_state_nxt_partial = _4_SSM_st_connected;
      kcg_copy_msg(&_10_msg_out_partial, msg_in);
      kcg_copy_msg(&outC->msg_out, &_10_msg_out_partial);
      outC->doit = _11_doit_partial;
      outC->state_nxt = _14_state_nxt_partial;
      break;
    case SSM_st_recv_msg3 :
      _9__fired_partial = outC->_fired_strong;
      _8_reset_nxt_partial = kcg_false;
      _7_state_nxt_partial = SSM_st_recv_msg3;
      /* _:recv_msg3:msg_out= */
      if (_4_doit_partial) {
        kcg_copy_msg(&_3_msg_out_partial, (msg *) &Msg_null);
      }
      else {
        kcg_copy_msg(&_3_msg_out_partial, msg_in);
      }
      kcg_copy_msg(&outC->msg_out, &_3_msg_out_partial);
      outC->doit = _4_doit_partial;
      outC->state_nxt = _7_state_nxt_partial;
      break;
    case SSM_st_recv_msg1_and_send_msg2 :
      _fired_partial = outC->_fired_strong;
      reset_nxt_partial = kcg_false;
      state_nxt_partial = SSM_st_recv_msg1_and_send_msg2;
      /* _:recv_msg1_and_send_msg2:msg_out= */
      if (doit_partial) {
        tmp[0] = (*msg_in).d[0];
        tmp[1] = NonceB;
        msg_out_partial.kind = Msg2;
        msg_out_partial.dest = partner_memo_partial;
        msg_out_partial.k = _2_op_call;
        kcg_copy_array(&msg_out_partial.d, &tmp);
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
    case _4_SSM_st_connected :
      outC->reset_nxt = _15_reset_nxt_partial;
      outC->_fired = _16__fired_partial;
      break;
    case SSM_st_recv_msg3 :
      outC->reset_nxt = _8_reset_nxt_partial;
      outC->_fired = _9__fired_partial;
      break;
    case SSM_st_recv_msg1_and_send_msg2 :
      outC->reset_nxt = reset_nxt_partial;
      outC->_fired = _fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->state_sel) {
    case _4_SSM_st_connected :
      _21_reset_act_partial = kcg_false;
      break;
    case SSM_st_recv_msg3 :
      _18_reset_act_partial = kcg_false;
      break;
    case SSM_st_recv_msg1_and_send_msg2 :
      reset_act_partial = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  reset_prv = outC->reset_act;
  /* _: */
  switch (outC->state_sel) {
    case _4_SSM_st_connected :
      outC->reset_act = _21_reset_act_partial;
      break;
    case SSM_st_recv_msg3 :
      outC->reset_act = _18_reset_act_partial;
      break;
    case SSM_st_recv_msg1_and_send_msg2 :
      outC->reset_act = reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void bob_init(outC_bob *outC)
{
  kcg_size idx;

  outC->_fired = _5_SSM_TR_no_trans_;
  outC->_fired_strong = _5_SSM_TR_no_trans_;
  outC->state_act = SSM_st_recv_msg1_and_send_msg2;
  outC->state_sel = SSM_st_recv_msg1_and_send_msg2;
  outC->status = kcg_true;
  outC->partner = Alice;
  outC->msg_out.kind = No_msg;
  outC->msg_out.dest = Alice;
  outC->msg_out.k = KeyA;
  for (idx = 0; idx < 2; idx++) {
    outC->msg_out.d[idx] = No_data;
  }
  outC->reset_act = kcg_false;
  outC->reset_nxt = kcg_false;
  outC->status_memo = kcg_false;
  outC->partner_memo = Bob;
  outC->doit = kcg_false;
  outC->state_nxt = SSM_st_recv_msg1_and_send_msg2;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void bob_reset(outC_bob *outC)
{
  outC->reset_act = kcg_false;
  outC->reset_nxt = kcg_false;
  outC->status_memo = kcg_false;
  outC->partner_memo = Bob;
  outC->doit = kcg_false;
  outC->state_nxt = SSM_st_recv_msg1_and_send_msg2;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** bob.c
** Generation date: 2020-04-06T19:07:09
*************************************************************$ */

