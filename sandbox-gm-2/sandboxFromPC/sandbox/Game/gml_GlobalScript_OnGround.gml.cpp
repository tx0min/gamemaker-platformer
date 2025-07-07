#include "pch.hpp"
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_Script_gml_Script_OnGround;
extern YYVAR g_Script_gml_GlobalScript_OnGround;
extern YYVAR g_FUNC_place_meeting;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

YYRValue& gml_Script_OnGround( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_OnGround( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_OnGround", 0 );
YY_STACKTRACE_LINE(2);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[9];
YYRValue __Args__[9];
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue __ret1__(0);
YYRValue __ret2__(0);
YYRValue __ret3__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(4);
bool sc164 = false;
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = /* First usage */sbuiltin_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* First usage */sbuiltin_y + 1);
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYASSET_REF(0x00000019);
__pArgs__[2] = &__Args__[2];
if ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0])) { sc164=true; } else 
{
bool sc165 = false;
FREE_RValue( &__ret2__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[3] = /* volatile */sbuiltin_x;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (/* volatile */sbuiltin_y + 1);
__pArgs__[4] = &__Args__[4];
__Args__[5] = YYASSET_REF(0x00000017);
__pArgs__[5] = &__Args__[5];
if ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,3,g_FUNC_place_meeting.val,&__pArgs__[3])){
FREE_RValue( &__ret3__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[6] = /* volatile */sbuiltin_x;
__pArgs__[6] = &__Args__[6];
__Args__[7] = /* volatile */sbuiltin_y;
__pArgs__[7] = &__Args__[7];
__Args__[8] = YYASSET_REF(0x00000017);
__pArgs__[8] = &__Args__[8];
sc165 = (!((BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret3__,3,g_FUNC_place_meeting.val,&__pArgs__[6]) ))));
 };
;
sc164 = (sc165);
 };
;
_result = sc164;
return _result;
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_OnGround( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_OnGround( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_OnGround", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(2);
YYRValue* sWself_OnGround_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_OnGround); /* set ContextID to 34 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_OnGround_4ABE50B2)) = (YYRValue(gml_Script_OnGround, pSelf)), PopContextStack();
;
return _result;
}
#endif
