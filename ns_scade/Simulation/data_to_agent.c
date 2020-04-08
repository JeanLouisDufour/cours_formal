/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config E:/github/cours_formal/ns_scade/Simulation/config.txt
** Generation date: 2020-04-06T19:07:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "data_to_agent.h"

/* data_to_agent/ */
agent data_to_agent(/* d/ */ data d)
{
  /* a/ */
  agent a;

  /* a= */
  if (d == AgentA) {
    a = Alice;
  }
  else /* a= */
  if (d == AgentB) {
    a = Bob;
  }
  else {
    a = Intruder;
  }
  return a;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** data_to_agent.c
** Generation date: 2020-04-06T19:07:09
*************************************************************$ */

