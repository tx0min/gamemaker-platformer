#include "pch.hpp"
YYRValue& gml_Script_death( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_screenShake( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR self_invinc;
extern YYVAR self_curre;
extern YYVAR self_da;
extern YYVAR g_VAR_alarm;
extern YYVAR g_Script_gml_Script_playerHit;
extern YYVAR g_Script_gml_GlobalScript_playerHit;
extern YYVAR g_FUNC_instance_exists;
extern YYVAR g_FUNC_audio_play_sound;
#ifndef __YYNODEFS
DValue gs_constArg0_860B88F1 = { 1, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_860B88F1;
#endif // __YYNODEFS

YYRValue& gml_Script_playerHit( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_playerHit( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_playerHit", 0 );
YY_STACKTRACE_LINE(3);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[3];
YYRValue __Args__[3];
YYRValue local_obj;
YYRValue o09F585553_invincible;
YYRValue o0ECB8E193_currenthp;
YYRValue oobj12774E57E_damage;
YYRValue oW0ECB8E193_currenthp;
YYRValue oW09F585553_invincible;
YYRValue oW04CCA3306_alarm;
YYRValue __ret1__(0);
YYRValue __ret2__(0);
YYRValue __ret3__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(4);
local_obj=(*YY_GET_ARG(_args, (int)(0), _count));
;

YY_STACKTRACE_LINE(6);
bool sc185 = false;
FREE_RValue( &__ret1__ );
__Args__[0] = YYASSET_REF(0x0000001D);
__pArgs__[0] = &__Args__[0];
if ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_instance_exists.val,&__pArgs__[0])){
FREE_RValue( &__ret2__ );
__Args__[1] = YYASSET_REF(0x0000000E);
__pArgs__[1] = &__Args__[1];
sc185 = ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_instance_exists.val,&__pArgs__[1]));
 };
;
if(sc185) {

YY_STACKTRACE_LINE(6);

YY_STACKTRACE_LINE(8);
YYGML_Variable_GetValue( YYASSET_REF(0x0000001D), kVARID_self_invincible, (int)ARRAY_INDEX_NO_INDEX, &o09F585553_invincible );
if(!((BOOL_RValue( /* First usage */o09F585553_invincible )))) {

YY_STACKTRACE_LINE(8);

YY_STACKTRACE_LINE(10);
YYGML_Variable_GetValue( YYASSET_REF(0x0000000E), kVARID_self_currenthp, (int)ARRAY_INDEX_NO_INDEX, &o0ECB8E193_currenthp );
YYGML_Variable_GetValue( /* local */local_obj, kVARID_self_damage, (int)ARRAY_INDEX_NO_INDEX, &oobj12774E57E_damage );
if(((/* First usage */o0ECB8E193_currenthp - /* First usage */oobj12774E57E_damage) <= 0)) {

YY_STACKTRACE_LINE(10);

YY_STACKTRACE_LINE(11);
FREE_RValue( &__ret3__ );
gml_Script_death(pSelf,pOther,__ret3__,0,NULL);
;
;
}
else {

YY_STACKTRACE_LINE(13);

YY_STACKTRACE_LINE(15);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg0_860B88F1;
__pArgs__[0] = &__Args__[0];
gml_Script_screenShake(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(16);
YYGML_Variable_GetValue( YYASSET_REF(0x0000000E), kVARID_self_currenthp, (int)ARRAY_INDEX_NO_INDEX, &oW0ECB8E193_currenthp );
YYGML_Variable_GetValue( /* local */local_obj, kVARID_self_damage, (int)ARRAY_INDEX_NO_INDEX, &oobj12774E57E_damage );
/* First usage */oW0ECB8E193_currenthp-=YYRValue(/* context id changed from 826 to 830*/oobj12774E57E_damage);
YYGML_Variable_SetValue( YYASSET_REF(0x0000000E), kVARID_self_currenthp, (int)ARRAY_INDEX_NO_INDEX, &oW0ECB8E193_currenthp );
;

YY_STACKTRACE_LINE(17);
oW09F585553_invincible=YYRValue(1!=0);
YYGML_Variable_SetValue( YYASSET_REF(0x0000001D), kVARID_self_invincible, (int)ARRAY_INDEX_NO_INDEX, &oW09F585553_invincible );
;

YY_STACKTRACE_LINE(18);
oW04CCA3306_alarm=120;
Variable_SetValue( YYASSET_REF(0x0000001D), g_VAR_alarm.val, (int)1, &oW04CCA3306_alarm );
;

YY_STACKTRACE_LINE(19);
FREE_RValue( &__ret1__ );
__Args__[0] = YYASSET_REF(0x02000007);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg0_860B88F1;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constFalse;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_audio_play_sound.val,&__pArgs__[0]);
;
;
}
;
;
}
;
;
}
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_playerHit( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_playerHit( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_playerHit", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(3);
YYRValue* sWself_playerHit_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_playerHit); /* set ContextID to 37 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_playerHit_4ABE50B2)) = (YYRValue(gml_Script_playerHit, pSelf)), PopContextStack();
;
return _result;
}
#endif
