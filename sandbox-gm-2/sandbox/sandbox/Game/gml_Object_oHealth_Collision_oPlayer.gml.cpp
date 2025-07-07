#include "pch.hpp"
YYRValue& gml_Script_fxDust( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR self_curre;
extern YYVAR self_m;
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_Script_gml_Object_oHealth_Collision_oPlayer;
extern YYVAR g_FUNC_instance_exists;
extern YYVAR g_FUNC_audio_play_sound;
#ifndef __YYNODEFS
DValue gs_constArg0_54278377 = { 5, 0, VALUE_REAL };
DValue gs_constArg1_54278377 = { 255, 0, VALUE_REAL };
DValue gs_constArg2_54278377 = { 1, 0, VALUE_REAL };
DValue gs_constArg3_54278377 = { 0, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_54278377;
extern DValue gs_constArg1_54278377;
extern DValue gs_constArg2_54278377;
extern DValue gs_constArg3_54278377;
#endif // __YYNODEFS

void gml_Object_oHealth_Collision_oPlayer( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oHealth_Collision_oPlayer( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oHealth_Collision_oPlayer", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[7];
YYRValue __Args__[7];
YYRValue o0ECB8E193_currenthp;
YYRValue o0ECB8E193_maxhp;
YYRValue oW0ECB8E193_currenthp;
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue __ret1__;


YY_STACKTRACE_LINE(1);
__Args__[0] = YYASSET_REF(0x0000000E);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_instance_exists.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(1);

YY_STACKTRACE_LINE(2);
YYGML_Variable_GetValue( YYASSET_REF(0x0000000E), kVARID_self_currenthp, (int)ARRAY_INDEX_NO_INDEX, &o0ECB8E193_currenthp );
YYGML_Variable_GetValue( YYASSET_REF(0x0000000E), kVARID_self_maxhp, (int)ARRAY_INDEX_NO_INDEX, &o0ECB8E193_maxhp );
if((/* First usage */o0ECB8E193_currenthp < /* First usage */o0ECB8E193_maxhp)) {

YY_STACKTRACE_LINE(2);

YY_STACKTRACE_LINE(3);
YYGML_Variable_GetValue( YYASSET_REF(0x0000000E), kVARID_self_currenthp, (int)ARRAY_INDEX_NO_INDEX, &oW0ECB8E193_currenthp );
++/* First usage */oW0ECB8E193_currenthp;
YYGML_Variable_SetValue( YYASSET_REF(0x0000000E), kVARID_self_currenthp, (int)ARRAY_INDEX_NO_INDEX, &oW0ECB8E193_currenthp );
;

YY_STACKTRACE_LINE(4);
YYGML_instance_destroy(pSelf,pOther,0,NULL);
;

YY_STACKTRACE_LINE(5);
FREE_RValue( &__ret1__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = /* First usage */sbuiltin_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* First usage */sbuiltin_y;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg0_54278377;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg0_54278377;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (YYRValue*)&gs_constArg0_54278377;
__pArgs__[4] = &__Args__[4];
__Args__[5] = (YYRValue*)&gs_constArg1_54278377;
__pArgs__[5] = &__Args__[5];
__Args__[6] = YYASSET_REF(0x01000032);
__pArgs__[6] = &__Args__[6];
gml_Script_fxDust(pSelf,pOther,__ret1__,7,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(6);
FREE_RValue( &__ret1__ );
__Args__[0] = YYASSET_REF(0x02000002);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg2_54278377;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg3_54278377;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_audio_play_sound.val,&__pArgs__[0]);
;
;
}
;
;
}
;
}
#endif
