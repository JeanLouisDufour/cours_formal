/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config E:/github/cours_formal/ns_scade/Simulation/config.txt
** Generation date: 2020-04-06T19:07:09
*************************************************************$ */

#include "kcg_types.h"

#ifdef kcg_use_array
kcg_bool kcg_comp_array(array *kcg_c1, array *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 2; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array */

#ifdef kcg_use_msg
kcg_bool kcg_comp_msg(msg *kcg_c1, msg *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array(&kcg_c1->d, &kcg_c2->d);
  kcg_equ = kcg_equ & (kcg_c1->k == kcg_c2->k);
  kcg_equ = kcg_equ & (kcg_c1->dest == kcg_c2->dest);
  kcg_equ = kcg_equ & (kcg_c1->kind == kcg_c2->kind);
  return kcg_equ;
}
#endif /* kcg_use_msg */

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** kcg_types.c
** Generation date: 2020-04-06T19:07:09
*************************************************************$ */

