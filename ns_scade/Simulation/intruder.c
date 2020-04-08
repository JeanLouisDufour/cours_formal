/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config E:/github/cours_formal/ns_scade/Simulation/config.txt
** Generation date: 2020-04-06T19:07:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "intruder.h"

/* intruder/ */
void intruder(
  /* msg_in/ */
  msg *msg_in,
  /* action/ */
  i_action action,
  outC_intruder *outC)
{
  array tmp;
  data tmp1;
  array tmp2;
  data tmp3;
  array tmp4;
  data tmp5;
  array tmp6;
  data tmp7;
  array tmp8;
  array tmp9;
  /* msg_out/ */
  msg msg_out_partial;
  /* msg_memo/ */
  msg msg_memo_partial;
  /* msg_out/ */
  msg _10_msg_out_partial;
  /* msg_memo/ */
  msg _11_msg_memo_partial;
  /* msg_out/ */
  msg _12_msg_out_partial;
  /* msg_memo/ */
  msg _13_msg_memo_partial;
  /* msg_out/ */
  msg _14_msg_out_partial;
  /* msg_memo/ */
  msg _15_msg_memo_partial;
  /* msg_out/ */
  msg _16_msg_out_partial;
  /* msg_memo/ */
  msg _17_msg_memo_partial;
  /* msg_out/ */
  msg _18_msg_out_partial;
  /* msg_memo/ */
  msg _19_msg_memo_partial;
  /* msg_out/ */
  msg _20_msg_out_partial;
  /* msg_memo/ */
  msg _21_msg_memo_partial;
  /* msg_out/ */
  msg _22_msg_out_partial;
  /* msg_memo/ */
  msg _23_msg_memo_partial;
  /* msg_out/ */
  msg _24_msg_out_partial;
  /* msg_memo/ */
  msg _25_msg_memo_partial;
  /* msg_out/ */
  msg _26_msg_out_partial;
  /* msg_memo/ */
  msg _27_msg_memo_partial;
  /* msg_out/ */
  msg _28_msg_out_partial;
  /* msg_memo/ */
  msg _29_msg_memo_partial;
  /* msg_memo/ */
  msg last_msg_memo;
  /* knowNB/ */
  kcg_bool last_knowNB;
  /* knowNA/ */
  kcg_bool last_knowNA;

  kcg_copy_msg(&last_msg_memo, &outC->msg_memo);
  last_knowNB = outC->knowNB;
  last_knowNA = outC->knowNA;
  outC->foo_clock = action;
  switch (outC->foo_clock) {
    case Msg3_for_B :
      kcg_copy_msg(&_29_msg_memo_partial, &last_msg_memo);
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->look = ((*msg_in).kind != No_msg) & ((*msg_in).k == KeyI);
  outC->knowNB = last_knowNB | (outC->look & (((*msg_in).d[0] == NonceB) |
        ((*msg_in).d[1] == NonceB)));
  switch (outC->foo_clock) {
    case Msg3_for_B :
      /* foo:Msg3_for_B:msg_out= */
      if (outC->knowNB) {
        tmp1 = NonceB;
      }
      else {
        tmp1 = NonceI;
      }
      tmp[0] = tmp1;
      tmp[1] = No_data;
      _28_msg_out_partial.kind = Msg3;
      _28_msg_out_partial.dest = Bob;
      _28_msg_out_partial.k = KeyB;
      kcg_copy_array(&_28_msg_out_partial.d, &tmp);
      break;
    case Msg3_for_A :
      kcg_copy_msg(&_27_msg_memo_partial, &last_msg_memo);
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->knowNA = last_knowNA | (outC->look & (((*msg_in).d[0] == NonceA) |
        ((*msg_in).d[1] == NonceA)));
  /* foo: */
  switch (outC->foo_clock) {
    case Msg3_for_B :
      kcg_copy_msg(&outC->msg_out, &_28_msg_out_partial);
      kcg_copy_msg(&outC->msg_memo, &_29_msg_memo_partial);
      break;
    case Msg3_for_A :
      /* foo:Msg3_for_A:msg_out= */
      if (outC->knowNA) {
        tmp3 = NonceA;
      }
      else {
        tmp3 = NonceI;
      }
      tmp2[0] = tmp3;
      tmp2[1] = No_data;
      _26_msg_out_partial.kind = Msg3;
      _26_msg_out_partial.dest = Alice;
      _26_msg_out_partial.k = KeyA;
      kcg_copy_array(&_26_msg_out_partial.d, &tmp2);
      kcg_copy_msg(&outC->msg_out, &_26_msg_out_partial);
      kcg_copy_msg(&outC->msg_memo, &_27_msg_memo_partial);
      break;
    case Msg1Fake_for_B :
      kcg_copy_msg(&_25_msg_memo_partial, &last_msg_memo);
      /* foo:Msg1Fake_for_B:msg_out= */
      if (outC->knowNA) {
        tmp5 = NonceA;
      }
      else {
        tmp5 = NonceI;
      }
      tmp4[0] = tmp5;
      tmp4[1] = AgentA;
      _24_msg_out_partial.kind = Msg1;
      _24_msg_out_partial.dest = Bob;
      _24_msg_out_partial.k = KeyB;
      kcg_copy_array(&_24_msg_out_partial.d, &tmp4);
      kcg_copy_msg(&outC->msg_out, &_24_msg_out_partial);
      kcg_copy_msg(&outC->msg_memo, &_25_msg_memo_partial);
      break;
    case Msg1Fake_for_A :
      kcg_copy_msg(&_23_msg_memo_partial, &last_msg_memo);
      /* foo:Msg1Fake_for_A:msg_out= */
      if (outC->knowNB) {
        tmp7 = NonceB;
      }
      else {
        tmp7 = NonceI;
      }
      tmp6[0] = tmp7;
      tmp6[1] = AgentB;
      _22_msg_out_partial.kind = Msg1;
      _22_msg_out_partial.dest = Alice;
      _22_msg_out_partial.k = KeyA;
      kcg_copy_array(&_22_msg_out_partial.d, &tmp6);
      kcg_copy_msg(&outC->msg_out, &_22_msg_out_partial);
      kcg_copy_msg(&outC->msg_memo, &_23_msg_memo_partial);
      break;
    case Msg1_for_B :
      kcg_copy_msg(&_21_msg_memo_partial, &last_msg_memo);
      tmp8[0] = NonceI;
      tmp8[1] = AgentI;
      _20_msg_out_partial.kind = Msg1;
      _20_msg_out_partial.dest = Bob;
      _20_msg_out_partial.k = KeyB;
      kcg_copy_array(&_20_msg_out_partial.d, &tmp8);
      kcg_copy_msg(&outC->msg_out, &_20_msg_out_partial);
      kcg_copy_msg(&outC->msg_memo, &_21_msg_memo_partial);
      break;
    case Msg1_for_A :
      kcg_copy_msg(&_19_msg_memo_partial, &last_msg_memo);
      tmp9[0] = NonceI;
      tmp9[1] = AgentI;
      _18_msg_out_partial.kind = Msg1;
      _18_msg_out_partial.dest = Alice;
      _18_msg_out_partial.k = KeyA;
      kcg_copy_array(&_18_msg_out_partial.d, &tmp9);
      kcg_copy_msg(&outC->msg_out, &_18_msg_out_partial);
      kcg_copy_msg(&outC->msg_memo, &_19_msg_memo_partial);
      break;
    case Reuse_for_B :
      kcg_copy_msg(&_17_msg_memo_partial, &last_msg_memo);
      kcg_copy_msg(&_16_msg_out_partial, &_17_msg_memo_partial);
      if (kcg_true) {
        _16_msg_out_partial.dest = Bob;
      }
      kcg_copy_msg(&outC->msg_out, &_16_msg_out_partial);
      kcg_copy_msg(&outC->msg_memo, &_17_msg_memo_partial);
      break;
    case Reuse_for_A :
      kcg_copy_msg(&_15_msg_memo_partial, &last_msg_memo);
      kcg_copy_msg(&_14_msg_out_partial, &_15_msg_memo_partial);
      if (kcg_true) {
        _14_msg_out_partial.dest = Alice;
      }
      kcg_copy_msg(&outC->msg_out, &_14_msg_out_partial);
      kcg_copy_msg(&outC->msg_memo, &_15_msg_memo_partial);
      break;
    case Erase :
      kcg_copy_msg(&_13_msg_memo_partial, &last_msg_memo);
      kcg_copy_msg(&_12_msg_out_partial, (msg *) &Msg_null);
      kcg_copy_msg(&outC->msg_out, &_12_msg_out_partial);
      kcg_copy_msg(&outC->msg_memo, &_13_msg_memo_partial);
      break;
    case Memo :
      kcg_copy_msg(&_11_msg_memo_partial, msg_in);
      kcg_copy_msg(&_10_msg_out_partial, msg_in);
      kcg_copy_msg(&outC->msg_out, &_10_msg_out_partial);
      kcg_copy_msg(&outC->msg_memo, &_11_msg_memo_partial);
      break;
    case No_action :
      kcg_copy_msg(&msg_memo_partial, &last_msg_memo);
      kcg_copy_msg(&msg_out_partial, msg_in);
      kcg_copy_msg(&outC->msg_out, &msg_out_partial);
      kcg_copy_msg(&outC->msg_memo, &msg_memo_partial);
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void intruder_init(outC_intruder *outC)
{
  kcg_size idx;

  outC->look = kcg_true;
  outC->foo_clock = No_action;
  outC->msg_out.kind = No_msg;
  outC->msg_out.dest = Alice;
  outC->msg_out.k = KeyA;
  for (idx = 0; idx < 2; idx++) {
    outC->msg_out.d[idx] = No_data;
  }
  outC->knowNA = kcg_false;
  outC->knowNB = kcg_false;
  kcg_copy_msg(&outC->msg_memo, (msg *) &Msg_null);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void intruder_reset(outC_intruder *outC)
{
  outC->knowNA = kcg_false;
  outC->knowNB = kcg_false;
  kcg_copy_msg(&outC->msg_memo, (msg *) &Msg_null);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** intruder.c
** Generation date: 2020-04-06T19:07:09
*************************************************************$ */

