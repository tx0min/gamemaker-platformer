#include "pch.hpp"
YYRValue& gml_Script_fxSplatter( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR self_da;
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_alarm;
extern YYVAR g_Script_gml_Script_enemyHit;
extern YYVAR g_Script_gml_GlobalScript_enemyHit;
extern YYVAR g_FUNC_audio_play_sound;
#ifndef __YYNODEFS
DValue gs_constArg0_C1CB110B = { 1, 0, VALUE_REAL };
DValue gs_constArg1_C1CB110B = { 20, 0, VALUE_REAL };
DValue gs_constArg2_C1CB110B = { 4, 0, VALUE_REAL };
DValue gs_constArg3_C1CB110B = { 2, 0, VALUE_REAL };
DValue gs_constArg4_C1CB110B = { 5, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_C1CB110B;
extern DValue gs_constArg1_C1CB110B;
extern DValue gs_constArg2_C1CB110B;
extern DValue gs_constArg3_C1CB110B;
extern DValue gs_constArg4_C1CB110B;
#endif // __YYNODEFS

YYRValue& gml_Script_enemyHit( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_enemyHit( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_enemyHit", 0 );
YY_STACKTRACE_LINE(3);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[9];
YYRValue __Args__[9];
YYRValue local_bullet;
YYRValue obullet1AD6CA5AA_damage;
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue obullet1AD6CA5AA_x;
YYRValue obullet1AD6CA5AA_y;
YYRValue sWbuiltin_alarm_FF09D93A;
YYRValue __ret1__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(6);
local_bullet=(*YY_GET_ARG(_args, (int)(0), _count));
;

YY_STACKTRACE_LINE(11);
YYRValue* sself_currenthp = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_currenthp); /* set ContextID to sself_currenthp */
YYGML_Variable_GetValue( /* local */local_bullet, kVARID_self_damage, (int)ARRAY_INDEX_NO_INDEX, &obullet1AD6CA5AA_damage );
if(((/* First usage */(*sself_currenthp) - /* First usage */obullet1AD6CA5AA_damage) <= 0)) {

YY_STACKTRACE_LINE(11);

YY_STACKTRACE_LINE(13);
FREE_RValue( &__ret1__ );
__Args__[0] = YYASSET_REF(0x0200000C);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg0_C1CB110B;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constFalse;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_audio_play_sound.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(14);
FREE_RValue( &__ret1__ );
YYRValue* sself_color = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_color); /* set ContextID to sself_color */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = /* First usage */sbuiltin_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* First usage */sbuiltin_y;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg1_C1CB110B;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg2_C1CB110B;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (YYRValue*)&gs_constArg2_C1CB110B;
__pArgs__[4] = &__Args__[4];
__Args__[5] = (YYRValue*)&gs_constArg2_C1CB110B;
__pArgs__[5] = &__Args__[5];
__Args__[6] = (YYRValue*)&gs_constArg3_C1CB110B;
__pArgs__[6] = &__Args__[6];
__Args__[7] = /* First usage */(*sself_color);
__pArgs__[7] = &__Args__[7];
__Args__[8] = (YYRValue*)&gs_constFalse;
__pArgs__[8] = &__Args__[8];
gml_Script_fxSplatter(pSelf,pOther,__ret1__,9,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(15);
YYGML_instance_destroy(pSelf,pOther,0,NULL);
;
;
}
else {

YY_STACKTRACE_LINE(17);

YY_STACKTRACE_LINE(18);
FREE_RValue( &__ret1__ );
YYRValue* sself_color = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_color); /* set ContextID to sself_color */
YYGML_ErrCheck_Variable_GetValue( /* local */local_bullet, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &obullet1AD6CA5AA_x, pSelf, pOther );
YYGML_ErrCheck_Variable_GetValue( /* local */local_bullet, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &obullet1AD6CA5AA_y, pSelf, pOther );
__Args__[0] = /* First usage */obullet1AD6CA5AA_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* First usage */obullet1AD6CA5AA_y;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg4_C1CB110B;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg3_C1CB110B;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (YYRValue*)&gs_constArg3_C1CB110B;
__pArgs__[4] = &__Args__[4];
__Args__[5] = (YYRValue*)&gs_constArg3_C1CB110B;
__pArgs__[5] = &__Args__[5];
__Args__[6] = (YYRValue*)&gs_constArg3_C1CB110B;
__pArgs__[6] = &__Args__[6];
__Args__[7] = /* context id changed from 687 to 688*/(*sself_color);
__pArgs__[7] = &__Args__[7];
__Args__[8] = (YYRValue*)&gs_constTrue;
__pArgs__[8] = &__Args__[8];
gml_Script_fxSplatter(pSelf,pOther,__ret1__,9,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(19);
YYRValue* sWself_currenthp = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_currenthp); /* set ContextID to 688 */
YYGML_Variable_GetValue( /* local */local_bullet, kVARID_self_damage, (int)ARRAY_INDEX_NO_INDEX, &obullet1AD6CA5AA_damage );
/* First usage */(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_currenthp))-=/* context id changed from 685 to 688*/obullet1AD6CA5AA_damage;
PopContextStack(1)
;
;

YY_STACKTRACE_LINE(20);
YYRValue* sWself_invincible = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_invincible); /* set ContextID to 688 */
(*sWself_invincible)=YYRValue(1!=0);
;

YY_STACKTRACE_LINE(21);
sWbuiltin_alarm_FF09D93A=10;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_alarm.val, (int)0, &sWbuiltin_alarm_FF09D93A );
;
;
}
;

YY_STACKTRACE_LINE(23);
// considering sself_currenthp with OriginalContextID 685 VarTracking_ContextIDIsValid True
SWithIterator ___wi125___;
int ___wc126___ = YYGML_NewWithIterator( &___wi125___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther, /* local */local_bullet);
if (___wc126___ > 0 ) {
do {

YY_STACKTRACE_LINE(23);
YYGML_instance_destroy(pSelf,pOther,0,NULL);
;
} while(YYGML_WithIteratorNext( &___wi125___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther));
}
YYGML_DeleteWithIterator( &___wi125___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther);
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_enemyHit( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_enemyHit( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_enemyHit", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(3);
YYRValue* sWself_enemyHit_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_enemyHit); /* set ContextID to 24 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_enemyHit_4ABE50B2)) = (YYRValue(gml_Script_enemyHit, pSelf)), PopContextStack();
;
return _result;
}
#endif
