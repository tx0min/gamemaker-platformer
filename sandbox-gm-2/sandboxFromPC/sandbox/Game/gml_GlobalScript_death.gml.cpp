#include "pch.hpp"
YYRValue& gml_Script_dropWeapon( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_fxSplatter( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_screenShake( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR self_curre;
extern YYVAR self_game;
extern YYVAR self_gamesta;
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR self_c;
extern YYVAR g_Script_gml_Script_death;
extern YYVAR g_Script_gml_GlobalScript_death;
extern YYVAR g_FUNC_instance_exists;
extern YYVAR g_FUNC_audio_play_sound;
#ifndef __YYNODEFS
DValue gs_constArg0_28D68FAF = { 1, 0, VALUE_REAL };
DValue gs_constArg1_28D68FAF = { 25, 0, VALUE_REAL };
DValue gs_constArg2_28D68FAF = { 4, 0, VALUE_REAL };
DValue gs_constArg3_28D68FAF = { 2, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_28D68FAF;
extern DValue gs_constArg1_28D68FAF;
extern DValue gs_constArg2_28D68FAF;
extern DValue gs_constArg3_28D68FAF;
#endif // __YYNODEFS

YYRValue& gml_Script_death( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_death( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_death", 0 );
YY_STACKTRACE_LINE(2);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[9];
YYRValue __Args__[9];
YYRValue oW0ECB8E193_currenthp;
YYRValue oW0ECB8E193_gameover;
YYRValue oW0ECB8E193_gamestarted;
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue o09F585553_color;
YYRValue __ret1__(0);
YYRValue __ret2__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(3);
bool sc98 = false;
__Args__[0] = YYASSET_REF(0x0000001D);
__pArgs__[0] = &__Args__[0];
if ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_instance_exists.val,&__pArgs__[0])){
FREE_RValue( &__ret2__ );
__Args__[1] = YYASSET_REF(0x0000000E);
__pArgs__[1] = &__Args__[1];
sc98 = ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,1,g_FUNC_instance_exists.val,&__pArgs__[1]));
 };
;
if(sc98) {

YY_STACKTRACE_LINE(3);

YY_STACKTRACE_LINE(5);
oW0ECB8E193_currenthp=0;
YYGML_Variable_SetValue( YYASSET_REF(0x0000000E), kVARID_self_currenthp, (int)ARRAY_INDEX_NO_INDEX, &oW0ECB8E193_currenthp );
;

YY_STACKTRACE_LINE(6);
oW0ECB8E193_gameover=YYRValue(1!=0);
YYGML_Variable_SetValue( YYASSET_REF(0x0000000E), kVARID_self_gameover, (int)ARRAY_INDEX_NO_INDEX, &oW0ECB8E193_gameover );
;

YY_STACKTRACE_LINE(7);
oW0ECB8E193_gamestarted=YYRValue(0!=0);
YYGML_Variable_SetValue( YYASSET_REF(0x0000000E), kVARID_self_gamestarted, (int)ARRAY_INDEX_NO_INDEX, &oW0ECB8E193_gamestarted );
;

YY_STACKTRACE_LINE(9);
FREE_RValue( &__ret1__ );
gml_Script_dropWeapon(pSelf,pOther,__ret1__,0,NULL);
;

YY_STACKTRACE_LINE(10);
FREE_RValue( &__ret1__ );
__Args__[0] = YYASSET_REF(0x0200000C);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg0_28D68FAF;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constFalse;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_audio_play_sound.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(11);
FREE_RValue( &__ret1__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
YYGML_Variable_GetValue( YYASSET_REF(0x0000001D), kVARID_self_color, (int)ARRAY_INDEX_NO_INDEX, &o09F585553_color );
__Args__[0] = /* First usage */sbuiltin_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* First usage */sbuiltin_y;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg1_28D68FAF;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg2_28D68FAF;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (YYRValue*)&gs_constArg2_28D68FAF;
__pArgs__[4] = &__Args__[4];
__Args__[5] = (YYRValue*)&gs_constArg2_28D68FAF;
__pArgs__[5] = &__Args__[5];
__Args__[6] = (YYRValue*)&gs_constArg3_28D68FAF;
__pArgs__[6] = &__Args__[6];
__Args__[7] = /* First usage */o09F585553_color;
__pArgs__[7] = &__Args__[7];
__Args__[8] = (YYRValue*)&gs_constFalse;
__pArgs__[8] = &__Args__[8];
gml_Script_fxSplatter(pSelf,pOther,__ret1__,9,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(12);
FREE_RValue( &__ret1__ );
gml_Script_screenShake(pSelf,pOther,__ret1__,0,NULL);
;

YY_STACKTRACE_LINE(14);
SWithIterator ___wi100___;
int ___wc101___ = YYGML_NewWithIterator( &___wi100___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther, YYASSET_REF(0x0000001D));
if (___wc101___ > 0 ) {
do {

YY_STACKTRACE_LINE(14);
YYGML_instance_destroy(pSelf,pOther,0,NULL);
;
} while(YYGML_WithIteratorNext( &___wi100___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther));
}
YYGML_DeleteWithIterator( &___wi100___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther);
;
;
}
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_death( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_death( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_death", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(2);
YYRValue* sWself_death_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_death); /* set ContextID to 18 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_death_4ABE50B2)) = (YYRValue(gml_Script_death, pSelf)), PopContextStack();
;
return _result;
}
#endif
