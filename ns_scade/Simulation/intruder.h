/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config E:/github/cours_formal/ns_scade/Simulation/config.txt
** Generation date: 2020-04-06T19:07:09
*************************************************************$ */
#ifndef _intruder_H_
#define _intruder_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  msg /* msg_out/ */ msg_out;
  kcg_bool /* knowNA/ */ knowNA;
  kcg_bool /* knowNB/ */ knowNB;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  msg /* msg_memo/ */ msg_memo;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  i_action /* foo: */ foo_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* look/ */ look;
} outC_intruder;

/* ===========  node initialization and cycle functions  =========== */
/* intruder/ */
extern void intruder(
  /* msg_in/ */
  msg *msg_in,
  /* action/ */
  i_action action,
  outC_intruder *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void intruder_reset(outC_intruder *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void intruder_init(outC_intruder *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _intruder_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** intruder.h
** Generation date: 2020-04-06T19:07:09
*************************************************************$ */

