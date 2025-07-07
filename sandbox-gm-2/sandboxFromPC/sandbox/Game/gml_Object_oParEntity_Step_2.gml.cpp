#include "pch.hpp"
YYRValue& gml_Script_EntityStep( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_Script_gml_Object_oParEntity_Step_2;
extern YYVAR g_FUNC_round;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_oParEntity_Step_2( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oParEntity_Step_2( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oParEntity_Step_2", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[1];
YYRValue __Args__[1];
YYRValue local_vxNew;
YYRValue local_vyNew;
YYRValue __ret1__;


YY_STACKTRACE_LINE(1);
;

YY_STACKTRACE_LINE(4);
YYRValue* sself_vx = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vx); /* set ContextID to sself_vx */
YYRValue* sWself_cx = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_cx); /* set ContextID to 118 */
/* First usage */(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_cx))+=/* First usage */(*sself_vx);
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(5);
YYRValue* sself_vy = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vy); /* set ContextID to sself_vy */
YYRValue* sWself_cy = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_cy); /* set ContextID to 118 */
/* First usage */(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_cy))+=/* First usage */(*sself_vy);
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(6);
FREE_RValue( &__ret1__ );
YYRValue* sself_cx = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_cx); /* set ContextID to sself_cx */
__Args__[0] = /* First usage */(*sself_cx);
__pArgs__[0] = &__Args__[0];
local_vxNew=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_round.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(7);
FREE_RValue( &__ret1__ );
YYRValue* sself_cy = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_cy); /* set ContextID to sself_cy */
__Args__[0] = /* First usage */(*sself_cy);
__pArgs__[0] = &__Args__[0];
local_vyNew=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_round.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(8);
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_cx))-=/* local */local_vxNew;
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(9);
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_cy))-=/* local */local_vyNew;
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(11);
FREE_RValue( &__ret1__ );
gml_Script_EntityStep(pSelf,pOther,__ret1__,0,NULL);
;
}
#endif
