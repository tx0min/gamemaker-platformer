#include "pch.hpp"
YYRValue& gml_Script_Approach( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_playerHit( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_id;
extern YYVAR g_Script_gml_Object_oParEnemy_Step_0;
extern YYVAR g_FUNC_place_meeting;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_oParEnemy_Step_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oParEnemy_Step_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oParEnemy_Step_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[4];
YYRValue __Args__[4];
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue sbuiltin_id;
YYRValue __ret1__;
YYRValue __ret2__;


YY_STACKTRACE_LINE(2);
YYRValue* sself_onGround = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_onGround); /* set ContextID to sself_onGround */
if(!((BOOL_RValue( /* First usage */(*sself_onGround) )))) {

YY_STACKTRACE_LINE(2);

YY_STACKTRACE_LINE(3);
FREE_RValue( &__ret1__ );
YYRValue* sself_vy = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vy); /* set ContextID to sself_vy */
YYRValue* sself_vyMax = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vyMax); /* set ContextID to sself_vyMax */
YYRValue* sself_gravNorm = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_gravNorm); /* set ContextID to sself_gravNorm */
YYRValue* sWself_vy = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vy); /* set ContextID to 1079 */
__Args__[0] = /* First usage */(*sself_vy);
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* First usage */(*sself_vyMax);
__pArgs__[1] = &__Args__[1];
__Args__[2] = /* First usage */(*sself_gravNorm);
__pArgs__[2] = &__Args__[2];
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_vy))=gml_Script_Approach(pSelf,pOther,__ret1__,3,&__pArgs__[0]);
PopContextStack(1);
;
;
}
;

YY_STACKTRACE_LINE(11);
FREE_RValue( &__ret1__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = /* First usage */sbuiltin_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* First usage */sbuiltin_y;
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYASSET_REF(0x0000001D);
__pArgs__[2] = &__Args__[2];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(11);

YY_STACKTRACE_LINE(12);
FREE_RValue( &__ret2__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_id.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_id );
__Args__[3] = /* First usage */sbuiltin_id;
__pArgs__[3] = &__Args__[3];
gml_Script_playerHit(pSelf,pOther,__ret2__,1,&__pArgs__[3]);
;
;
}
;
}
#endif
