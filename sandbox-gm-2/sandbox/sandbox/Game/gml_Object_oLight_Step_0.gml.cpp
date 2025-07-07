#include "pch.hpp"
extern YYVAR g_Script_gml_Object_oLight_Step_0;
#ifndef __YYNODEFS
DValue gs_constArg0_69473356 = { 0.1, 0, VALUE_REAL };
DValue gs_constArg1_69473356 = { -0.1, 0, VALUE_REAL };
DValue gs_constArg2_69473356 = { 0, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_69473356;
extern DValue gs_constArg1_69473356;
extern DValue gs_constArg2_69473356;
#endif // __YYNODEFS

void gml_Object_oLight_Step_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oLight_Step_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oLight_Step_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[3];
YYRValue __Args__[3];
YYRValue local_z;
YYRValue __ret1__;


YY_STACKTRACE_LINE(1);
__Args__[0] = (YYRValue*)&gs_constArg0_69473356;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_69473356;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg2_69473356;
__pArgs__[2] = &__Args__[2];
local_z=YYGML_choose(__ret1__,3,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(2);
YYRValue* sWself_lightSize = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_lightSize); /* set ContextID to 105 */
/* First usage */(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_lightSize))+=/* local */local_z;
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(3);
YYRValue* sself_lightSize = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_lightSize); /* set ContextID to sself_lightSize */
(*sWself_lightSize)=YYGML_clamp((double)/* First usage */(*sself_lightSize).asReal(),(double)6,(double)8);
;
}
#endif
