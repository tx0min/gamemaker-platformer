#include "pch.hpp"
extern YYVAR self_game;
extern YYVAR self_m;
extern YYVAR self_curre;
extern YYVAR self_gamesta;
extern YYVAR g_Script_gml_Script_restartRoom;
extern YYVAR g_Script_gml_GlobalScript_restartRoom;
extern YYVAR g_FUNC_instance_exists;
extern YYVAR g_FUNC_room_restart;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

YYRValue& gml_Script_restartRoom( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_restartRoom( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_restartRoom", 0 );
YY_STACKTRACE_LINE(1);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[1];
YYRValue __Args__[1];
YYRValue o0ECB8E193_gameover;
YYRValue o0ECB8E193_maxhp;
YYRValue oW0ECB8E193_currenthp;
YYRValue oW0ECB8E193_gameover;
YYRValue oW0ECB8E193_gamestarted;
YYRValue __ret1__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(3);
__Args__[0] = YYASSET_REF(0x0000000E);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_instance_exists.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(3);

YY_STACKTRACE_LINE(4);
YYGML_Variable_GetValue( YYASSET_REF(0x0000000E), kVARID_self_gameover, (int)ARRAY_INDEX_NO_INDEX, &o0ECB8E193_gameover );
if(BOOL_RValue( /* First usage */o0ECB8E193_gameover )) {

YY_STACKTRACE_LINE(4);
YYGML_Variable_GetValue( YYASSET_REF(0x0000000E), kVARID_self_maxhp, (int)ARRAY_INDEX_NO_INDEX, &o0ECB8E193_maxhp );
oW0ECB8E193_currenthp=YYRValue(/* First usage */o0ECB8E193_maxhp);
YYGML_Variable_SetValue( YYASSET_REF(0x0000000E), kVARID_self_currenthp, (int)ARRAY_INDEX_NO_INDEX, &oW0ECB8E193_currenthp );
;
}
;

YY_STACKTRACE_LINE(5);
oW0ECB8E193_gameover=YYRValue(0!=0);
YYGML_Variable_SetValue( YYASSET_REF(0x0000000E), kVARID_self_gameover, (int)ARRAY_INDEX_NO_INDEX, &oW0ECB8E193_gameover );
;

YY_STACKTRACE_LINE(6);
oW0ECB8E193_gamestarted=YYRValue(0!=0);
YYGML_Variable_SetValue( YYASSET_REF(0x0000000E), kVARID_self_gamestarted, (int)ARRAY_INDEX_NO_INDEX, &oW0ECB8E193_gamestarted );
;
;
}
;

YY_STACKTRACE_LINE(8);
FREE_RValue( &__ret1__ );
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,0,g_FUNC_room_restart.val,NULL);
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_restartRoom( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_restartRoom( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_restartRoom", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(1);
YYRValue* sWself_restartRoom_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_restartRoom); /* set ContextID to 39 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_restartRoom_4ABE50B2)) = (YYRValue(gml_Script_restartRoom, pSelf)), PopContextStack();
;
return _result;
}
#endif
