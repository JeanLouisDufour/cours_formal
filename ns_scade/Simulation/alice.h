/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config E:/github/cours_formal/ns_scade/Simulation/config.txt
** Generation date: 2020-04-06T19:07:09
*************************************************************$ */
#ifndef _alice_H_
#define _alice_H_

#include "kcg_types.h"
#include "key_of_agent.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  msg /* msg_out/ */ msg_out;
  agent /* Partner/ */ Partner;
  kcg_bool /* status/ */ status;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  _2_SSM_ST /* _: */ state_nxt;
  kcg_bool /* _: */ reset_act;
  kcg_bool /* _: */ reset_nxt;
  kcg_bool /* doit/ */ doit;
  kcg_bool /* status_memo/ */ status_memo;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  _2_SSM_ST /* _: */ state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  _2_SSM_ST /* _: */ state_sel;
  _3_SSM_TR /* _: */ _fired_strong;
  _3_SSM_TR /* _: */ _fired;
} outC_alice;

/* ===========  node initialization and cycle functions  =========== */
/* alice/ */
extern void alice(
  /* msg_in/ */
  msg *msg_in,
  /* Partner_in/ */
  agent Partner_in,
  outC_alice *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void alice_reset(outC_alice *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void alice_init(outC_alice *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _alice_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** alice.h
** Generation date: 2020-04-06T19:07:09
*************************************************************$ */

