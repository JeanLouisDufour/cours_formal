/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config E:/github/cours_formal/ns_scade/Simulation/config.txt
** Generation date: 2020-04-06T19:07:09
*************************************************************$ */
#ifndef _bob_H_
#define _bob_H_

#include "kcg_types.h"
#include "data_to_agent.h"
#include "data_is_agent.h"
#include "key_of_agent.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  msg /* msg_out/ */ msg_out;
  agent /* partner/ */ partner;
  kcg_bool /* status/ */ status;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST /* _: */ state_nxt;
  kcg_bool /* _: */ reset_act;
  kcg_bool /* _: */ reset_nxt;
  kcg_bool /* doit/ */ doit;
  agent /* partner_memo/ */ partner_memo;
  kcg_bool /* status_memo/ */ status_memo;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST /* _: */ state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSM_ST /* _: */ state_sel;
  SSM_TR /* _: */ _fired_strong;
  SSM_TR /* _: */ _fired;
} outC_bob;

/* ===========  node initialization and cycle functions  =========== */
/* bob/ */
extern void bob(/* msg_in/ */ msg *msg_in, outC_bob *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void bob_reset(outC_bob *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void bob_init(outC_bob *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _bob_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** bob.h
** Generation date: 2020-04-06T19:07:09
*************************************************************$ */

