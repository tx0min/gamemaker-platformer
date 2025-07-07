#include "pch.hpp"
extern YYVAR g_Script_gml_Room_rmSplatterTest_Create;
extern YYVAR g_FUNC_audio_stop_all;
extern YYVAR g_FUNC_audio_play_sound;
#ifndef __YYNODEFS
DValue gs_constArg0_95295E99 = { 1, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_95295E99;
#endif // __YYNODEFS

void gml_Room_rmSplatterTest_Create( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Room_rmSplatterTest_Create( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Room_rmSplatterTest_Create", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[3];
YYRValue __Args__[3];
YYRValue __ret1__;


YY_STACKTRACE_LINE(1);
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,0,g_FUNC_audio_stop_all.val,NULL);
;

YY_STACKTRACE_LINE(2);
FREE_RValue( &__ret1__ );
__Args__[0] = YYASSET_REF(0x02000005);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg0_95295E99;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg0_95295E99;
__pArgs__[2] = &__Args__[2];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_audio_play_sound.val,&__pArgs__[0]);
;
}
#endif
