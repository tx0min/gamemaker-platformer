#include "pch.hpp"
YYRValue& gml_Script_OnGround( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_Script_gml_Object_oParEntity_Create_0;
extern YYVAR g_FUNC_place_meeting;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_oParEntity_Create_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oParEntity_Create_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oParEntity_Create_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[3];
YYRValue __Args__[3];
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue __ret1__;


YY_STACKTRACE_LINE(1);
YYRValue* sWself_jumped = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_jumped); /* set ContextID to 117 */
(*sWself_jumped)=YYRValue(0!=0);
;

YY_STACKTRACE_LINE(2);
YYRValue* sWself_landed = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_landed); /* set ContextID to 117 */
(*sWself_landed)=YYRValue(0!=0);
;

YY_STACKTRACE_LINE(4);
YYRValue* sWself_platformTarget = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_platformTarget); /* set ContextID to 117 */
(*sWself_platformTarget)=0;
;

YY_STACKTRACE_LINE(5);
YYRValue* sWself_wallTarget = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_wallTarget); /* set ContextID to 117 */
(*sWself_wallTarget)=0;
;

YY_STACKTRACE_LINE(7);
YYRValue* sWself_push = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_push); /* set ContextID to 117 */
(*sWself_push)=YYRValue(0!=0);
;

YY_STACKTRACE_LINE(10);
YYRValue* sWself_vx = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vx); /* set ContextID to 117 */
(*sWself_vx)=0;
;

YY_STACKTRACE_LINE(11);
YYRValue* sWself_vy = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vy); /* set ContextID to 117 */
(*sWself_vy)=0;
;

YY_STACKTRACE_LINE(15);
YYRValue* sWself_cx = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_cx); /* set ContextID to 117 */
(*sWself_cx)=0;
;

YY_STACKTRACE_LINE(16);
YYRValue* sWself_cy = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_cy); /* set ContextID to 117 */
(*sWself_cy)=0;
;

YY_STACKTRACE_LINE(19);
FREE_RValue( &__ret1__ );
YYRValue* sWself_onGround = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_onGround); /* set ContextID to 117 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_onGround))=gml_Script_OnGround(pSelf,pOther,__ret1__,0,NULL);
PopContextStack(1);
;

YY_STACKTRACE_LINE(20);
FREE_RValue( &__ret1__ );
YYRValue* sWself_cLeft = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_cLeft); /* set ContextID to 117 */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = (/* First usage */sbuiltin_x - 1);
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* First usage */sbuiltin_y;
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYASSET_REF(0x00000001);
__pArgs__[2] = &__Args__[2];
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_cLeft))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(21);
FREE_RValue( &__ret1__ );
YYRValue* sWself_cRight = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_cRight); /* set ContextID to 117 */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = (/* volatile */sbuiltin_x + 1);
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* volatile */sbuiltin_y;
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYASSET_REF(0x00000001);
__pArgs__[2] = &__Args__[2];
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_cRight))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(25);
YYRValue* sWself_canclimb = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_canclimb); /* set ContextID to 117 */
(*sWself_canclimb)=2;
;

YY_STACKTRACE_LINE(28);
YYRValue* sWself_fearofheights = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_fearofheights); /* set ContextID to 117 */
(*sWself_fearofheights)=0;
;
}
#endif
