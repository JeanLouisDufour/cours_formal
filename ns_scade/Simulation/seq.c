/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config E:/github/cours_formal/ns_scade/Simulation/config.txt
** Generation date: 2020-04-06T19:07:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "seq.h"

/* seq/ */
void seq(inC_seq *inC, outC_seq *outC)
{
  /* msg_out/ */
  msg msg_out_partial;
  /* partnerA/ */
  agent partnerA_partial;
  /* partnerB/ */
  agent partnerB_partial;
  /* statusA/ */
  kcg_bool statusA_partial;
  /* statusB/ */
  kcg_bool statusB_partial;
  /* knowNA/ */
  kcg_bool knowNA_partial;
  /* knowNB/ */
  kcg_bool knowNB_partial;
  /* msg_out/ */
  msg _1_msg_out_partial;
  /* partnerA/ */
  agent _2_partnerA_partial;
  /* partnerB/ */
  agent _3_partnerB_partial;
  /* statusA/ */
  kcg_bool _4_statusA_partial;
  /* statusB/ */
  kcg_bool _5_statusB_partial;
  /* knowNA/ */
  kcg_bool _6_knowNA_partial;
  /* knowNB/ */
  kcg_bool _7_knowNB_partial;
  /* msg_out/ */
  msg _8_msg_out_partial;
  /* partnerA/ */
  agent _9_partnerA_partial;
  /* partnerB/ */
  agent _10_partnerB_partial;
  /* statusA/ */
  kcg_bool _11_statusA_partial;
  /* statusB/ */
  kcg_bool _12_statusB_partial;
  /* knowNA/ */
  kcg_bool _13_knowNA_partial;
  /* knowNB/ */
  kcg_bool _14_knowNB_partial;
  /* knowNB/ */
  kcg_bool last_knowNB;
  /* knowNA/ */
  kcg_bool last_knowNA;
  /* statusB/ */
  kcg_bool last_statusB;
  /* statusA/ */
  kcg_bool last_statusA;
  /* partnerB/ */
  agent last_partnerB;
  /* partnerA/ */
  agent last_partnerA;

  last_knowNB = outC->knowNB;
  last_knowNA = outC->knowNA;
  last_statusB = outC->statusB;
  last_statusA = outC->statusA;
  last_partnerB = outC->partnerB;
  last_partnerA = outC->partnerA;
  /* msg_in= */
  if (outC->init) {
    kcg_copy_msg(&outC->msg_in, (msg *) &Msg_null);
  }
  else {
    kcg_copy_msg(&outC->msg_in, &outC->msg_out);
  }
  /* foo: */
  switch (inC->a) {
    case Intruder :
      /* foo:Intruder:msg_out=(intruder)/ */
      intruder(&outC->msg_in, inC->intruder_action, &outC->Context_intruder);
      kcg_copy_msg(&_8_msg_out_partial, &outC->Context_intruder.msg_out);
      _13_knowNA_partial = outC->Context_intruder.knowNA;
      _14_knowNB_partial = outC->Context_intruder.knowNB;
      outC->knowNB = _14_knowNB_partial;
      _10_partnerB_partial = last_partnerB;
      outC->partnerB = _10_partnerB_partial;
      _12_statusB_partial = last_statusB;
      outC->statusB = _12_statusB_partial;
      outC->knowNA = _13_knowNA_partial;
      _9_partnerA_partial = last_partnerA;
      outC->partnerA = _9_partnerA_partial;
      _11_statusA_partial = last_statusA;
      outC->statusA = _11_statusA_partial;
      break;
    case Bob :
      _7_knowNB_partial = last_knowNB;
      outC->knowNB = _7_knowNB_partial;
      /* foo:Bob:msg_out=(bob)/ */ bob(&outC->msg_in, &outC->Context_bob);
      kcg_copy_msg(&_1_msg_out_partial, &outC->Context_bob.msg_out);
      _3_partnerB_partial = outC->Context_bob.partner;
      _5_statusB_partial = outC->Context_bob.status;
      outC->partnerB = _3_partnerB_partial;
      outC->statusB = _5_statusB_partial;
      _6_knowNA_partial = last_knowNA;
      outC->knowNA = _6_knowNA_partial;
      _2_partnerA_partial = last_partnerA;
      outC->partnerA = _2_partnerA_partial;
      _4_statusA_partial = last_statusA;
      outC->statusA = _4_statusA_partial;
      break;
    case Alice :
      knowNB_partial = last_knowNB;
      outC->knowNB = knowNB_partial;
      partnerB_partial = last_partnerB;
      outC->partnerB = partnerB_partial;
      statusB_partial = last_statusB;
      outC->statusB = statusB_partial;
      knowNA_partial = last_knowNA;
      outC->knowNA = knowNA_partial;
      /* foo:Alice:msg_out=(alice)/ */
      alice(&outC->msg_in, inC->Alice_partner, &outC->Context_alice);
      kcg_copy_msg(&msg_out_partial, &outC->Context_alice.msg_out);
      partnerA_partial = outC->Context_alice.Partner;
      statusA_partial = outC->Context_alice.status;
      outC->partnerA = partnerA_partial;
      outC->statusA = statusA_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->confidential = ((!(outC->statusA & (outC->partnerA == Bob))) |
      (!outC->knowNA)) & ((!(outC->statusB & (outC->partnerB == Alice))) |
      (!outC->knowNB));
  outC->success = outC->statusA & outC->statusB;
  outC->secure = (!outC->success) | ((outC->partnerA == Bob) ==
      (outC->partnerB == Alice));
  /* foo: */
  switch (inC->a) {
    case Intruder :
      kcg_copy_msg(&outC->msg_out, &_8_msg_out_partial);
      break;
    case Bob :
      kcg_copy_msg(&outC->msg_out, &_1_msg_out_partial);
      break;
    case Alice :
      kcg_copy_msg(&outC->msg_out, &msg_out_partial);
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void seq_init(outC_seq *outC)
{
  kcg_size idx;
  kcg_size idx1;

  outC->success = kcg_true;
  outC->msg_in.kind = No_msg;
  outC->msg_in.dest = Alice;
  outC->msg_in.k = KeyA;
  for (idx = 0; idx < 2; idx++) {
    outC->msg_in.d[idx] = No_data;
  }
  outC->init = kcg_true;
  outC->confidential = kcg_true;
  outC->secure = kcg_true;
  outC->msg_out.kind = No_msg;
  outC->msg_out.dest = Alice;
  outC->msg_out.k = KeyA;
  for (idx1 = 0; idx1 < 2; idx1++) {
    outC->msg_out.d[idx1] = No_data;
  }
  /* foo:Alice:msg_out=(alice)/ */ alice_init(&outC->Context_alice);
  /* foo:Bob:msg_out=(bob)/ */ bob_init(&outC->Context_bob);
  /* foo:Intruder:msg_out=(intruder)/ */ intruder_init(&outC->Context_intruder);
  outC->partnerA = Alice;
  outC->partnerB = Bob;
  outC->statusA = kcg_false;
  outC->statusB = kcg_false;
  outC->knowNA = kcg_false;
  outC->knowNB = kcg_false;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void seq_reset(outC_seq *outC)
{
  outC->init = kcg_true;
  /* foo:Alice:msg_out=(alice)/ */ alice_reset(&outC->Context_alice);
  /* foo:Bob:msg_out=(bob)/ */ bob_reset(&outC->Context_bob);
  /* foo:Intruder:msg_out=(intruder)/ */ intruder_reset(&outC->Context_intruder);
  outC->partnerA = Alice;
  outC->partnerB = Bob;
  outC->statusA = kcg_false;
  outC->statusB = kcg_false;
  outC->knowNA = kcg_false;
  outC->knowNB = kcg_false;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** seq.c
** Generation date: 2020-04-06T19:07:09
*************************************************************$ */

