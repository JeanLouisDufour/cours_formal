/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config E:/github/cours_formal/ns_scade/Simulation/config.txt
** Generation date: 2020-04-06T19:07:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "data_is_agent.h"

/* data_is_agent/ */
kcg_bool data_is_agent(/* d/ */ data d)
{
  /* b/ */
  kcg_bool b;

  b = (d == AgentA) | (d == AgentB) | (d == AgentI);
  return b;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** data_is_agent.c
** Generation date: 2020-04-06T19:07:09
*************************************************************$ */

