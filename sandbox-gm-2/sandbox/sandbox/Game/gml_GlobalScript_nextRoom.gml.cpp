#include "pch.hpp"
extern YYVAR self_game;
extern YYVAR self_gamesta;
extern YYVAR g_VAR_room;
extern YYVAR g_VAR_room_last;
extern YYVAR g_VAR_room_first;
extern YYVAR g_Script_gml_Script_nextRoom;
extern YYVAR g_Script_gml_GlobalScript_nextRoom;
extern YYVAR g_FUNC_instance_exists;
extern YYVAR g_FUNC_room_goto;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

YYRValue& gml_Script_nextRoom( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_nextRoom( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_nextRoom", 0 );
YY_STACKTRACE_LINE(2);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[1];
YYRValue __Args__[1];
YYRValue oW0ECB8E193_gameover;
YYRValue oW0ECB8E193_gamestarted;
YYRValue global_builtin_room;
YYRValue global_builtin_room_last;
YYRValue global_builtin_room_first;
YYRValue __ret1__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(3);
__Args__[0] = YYASSET_REF(0x0000000E);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_instance_exists.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(3);

YY_STACKTRACE_LINE(4);
oW0ECB8E193_gameover=YYRValue(0!=0);
YYGML_Variable_SetValue( YYASSET_REF(0x0000000E), kVARID_self_gameover, (int)ARRAY_INDEX_NO_INDEX, &oW0ECB8E193_gameover );
;

YY_STACKTRACE_LINE(5);
oW0ECB8E193_gamestarted=YYRValue(0!=0);
YYGML_Variable_SetValue( YYASSET_REF(0x0000000E), kVARID_self_gamestarted, (int)ARRAY_INDEX_NO_INDEX, &oW0ECB8E193_gamestarted );
;
;
}
;

YY_STACKTRACE_LINE(7);
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room_last.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room_last );
if((/* First usage */global_builtin_room == /* First usage */global_builtin_room_last)) {

YY_STACKTRACE_LINE(8);
FREE_RValue( &__ret1__ );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room_first.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room_first );
__Args__[0] = /* First usage */global_builtin_room_first;
__pArgs__[0] = &__Args__[0];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_room_goto.val,&__pArgs__[0]);
;
}
else {

YY_STACKTRACE_LINE(10);
YYGML_room_goto_next();
;
}
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_nextRoom( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_nextRoom( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_nextRoom", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(2);
YYRValue* sWself_nextRoom_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_nextRoom); /* set ContextID to 32 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_nextRoom_4ABE50B2)) = (YYRValue(gml_Script_nextRoom, pSelf)), PopContextStack();
;
return _result;
}
#endif
