/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config E:/github/cours_formal/ns_scade/Simulation/config.txt
** Generation date: 2020-04-06T19:07:09
*************************************************************$ */
#ifndef _seq_H_
#define _seq_H_

#include "kcg_types.h"
#include "intruder.h"
#include "bob.h"
#include "alice.h"

/* ========================  input structure  ====================== */
typedef struct {
  agent /* a/ */ a;
  agent /* Alice_partner/ */ Alice_partner;
  i_action /* intruder_action/ */ intruder_action;
} inC_seq;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  msg /* msg_out/ */ msg_out;
  agent /* partnerA/ */ partnerA;
  agent /* partnerB/ */ partnerB;
  kcg_bool /* statusA/ */ statusA;
  kcg_bool /* statusB/ */ statusB;
  kcg_bool /* knowNA/ */ knowNA;
  kcg_bool /* knowNB/ */ knowNB;
  kcg_bool /* secure/ */ secure;
  kcg_bool /* confidential/ */ confidential;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_alice /* foo:Alice:msg_out=(alice)/ */ Context_alice;
  outC_bob /* foo:Bob:msg_out=(bob)/ */ Context_bob;
  outC_intruder /* foo:Intruder:msg_out=(intruder)/ */ Context_intruder;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  msg /* msg_in/ */ msg_in;
  kcg_bool /* success/ */ success;
} outC_seq;

/* ===========  node initialization and cycle functions  =========== */
/* seq/ */
extern void seq(inC_seq *inC, outC_seq *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void seq_reset(outC_seq *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void seq_init(outC_seq *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _seq_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** seq.h
** Generation date: 2020-04-06T19:07:09
*************************************************************$ */

