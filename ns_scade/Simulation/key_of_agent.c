/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config E:/github/cours_formal/ns_scade/Simulation/config.txt
** Generation date: 2020-04-06T19:07:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "key_of_agent.h"

/* key_of_agent/ */
key key_of_agent(/* a/ */ agent a)
{
  /* k/ */
  key k;

  /* k= */
  if (a == Alice) {
    k = KeyA;
  }
  else /* k= */
  if (a == Bob) {
    k = KeyB;
  }
  else {
    k = KeyI;
  }
  return k;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** key_of_agent.c
** Generation date: 2020-04-06T19:07:09
*************************************************************$ */

