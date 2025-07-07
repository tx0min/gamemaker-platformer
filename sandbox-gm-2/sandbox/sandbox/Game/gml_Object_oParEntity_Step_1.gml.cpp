#include "pch.hpp"
YYRValue& gml_Script_OnGround( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_Script_gml_Object_oParEntity_Step_1;
extern YYVAR g_FUNC_place_meeting;
extern YYVAR g_FUNC_instance_place;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_oParEntity_Step_1( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oParEntity_Step_1( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oParEntity_Step_1", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[3];
YYRValue __Args__[3];
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue __ret1__;


YY_STACKTRACE_LINE(1);
YYRValue* sWself_onGround = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_onGround); /* set ContextID to 119 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_onGround))=gml_Script_OnGround(pSelf,pOther,__ret1__,0,NULL);
PopContextStack(1);
;

YY_STACKTRACE_LINE(2);
FREE_RValue( &__ret1__ );
YYRValue* sWself_cLeft = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_cLeft); /* set ContextID to 119 */
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

YY_STACKTRACE_LINE(3);
FREE_RValue( &__ret1__ );
YYRValue* sWself_cRight = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_cRight); /* set ContextID to 119 */
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

YY_STACKTRACE_LINE(6);
YYRValue* sself_cLeft = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_cLeft); /* set ContextID to sself_cLeft */
if(BOOL_RValue( /* First usage */(*sself_cLeft) )) {

YY_STACKTRACE_LINE(7);
FREE_RValue( &__ret1__ );
YYRValue* sWself_wallTarget = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_wallTarget); /* set ContextID to 1086 */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = (/* volatile */sbuiltin_x - 1);
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* volatile */sbuiltin_y;
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYASSET_REF(0x00000001);
__pArgs__[2] = &__Args__[2];
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_wallTarget))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_instance_place.val,&__pArgs__[0]);
PopContextStack(1);
;
}
;

YY_STACKTRACE_LINE(9);
YYRValue* sself_cRight = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_cRight); /* set ContextID to sself_cRight */
if(BOOL_RValue( /* First usage */(*sself_cRight) )) {

YY_STACKTRACE_LINE(10);
FREE_RValue( &__ret1__ );
YYRValue* sWself_wallTarget = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_wallTarget); /* set ContextID to 1087 */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = (/* volatile */sbuiltin_x + 1);
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* volatile */sbuiltin_y;
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYASSET_REF(0x00000001);
__pArgs__[2] = &__Args__[2];
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_wallTarget))=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_instance_place.val,&__pArgs__[0]);
PopContextStack(1);
;
}
;
}
#endif
