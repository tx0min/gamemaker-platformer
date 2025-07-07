#include "pch.hpp"
YYRValue& gml_Script___view_get( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_log( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_Script_gml_Object_oGame_Create_0;
extern YYVAR g_FUNC_gamepad_get_device_count;
extern YYVAR g_FUNC_gamepad_is_connected;
extern YYVAR g_FUNC_gamepad_set_axis_deadzone;
#ifndef __YYNODEFS
const char g_pString298_1533F0FC_s[] = {
0x6d, 0x6f, 0x75, 0x73, 0x65, 0x00,                                                                  // mouse.
};
const YYRValue g_pString298_1533F0FC(g_pString298_1533F0FC_s, true);
const char g_pString301_1533F0FC_s[] = {
0x50, 0x41, 0x44, 0x20, 0x43, 0x4f, 0x4e, 0x4e, 0x45, 0x43, 0x54, 0x45, 0x44, 0x3a, 0x00,            // PAD CONNECTED:.
};
const YYRValue g_pString301_1533F0FC(g_pString301_1533F0FC_s, true);
DValue gs_constArg1_1533F0FC = { 0, 0, VALUE_REAL };
DValue gs_constArg3_1533F0FC = { 0.3, 0, VALUE_REAL };
DLValue gs_constLongArg0_1533F0FC = { 0LL, 0, VALUE_INT64 };
DLValue gs_constLongArg2_1533F0FC = { 1LL, 0, VALUE_INT64 };
#else
extern const char g_pString298_1533F0FC_s[];
extern const YYRValue g_pString298_1533F0FC;
extern const char g_pString301_1533F0FC_s[];
extern const YYRValue g_pString301_1533F0FC;
extern DValue gs_constArg1_1533F0FC;
extern DValue gs_constArg3_1533F0FC;
extern DLValue gs_constLongArg0_1533F0FC;
extern DLValue gs_constLongArg2_1533F0FC;
#endif // __YYNODEFS

void gml_Object_oGame_Create_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oGame_Create_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oGame_Create_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[2];
YYRValue __Args__[2];
YYRValue & global_padindex = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_padindex);
YYRValue & global_debug = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_debug);
YYRValue & global_grav = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_grav);
YYRValue local_gp_num;
YYRValue local_i;
YYRValue __ret1__;


YY_STACKTRACE_LINE(1);
YYRValue* sWself_gamestarted = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_gamestarted); /* set ContextID to 97 */
(*sWself_gamestarted)=YYRValue(0!=0);
;

YY_STACKTRACE_LINE(2);
YYRValue* sWself_gameover = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_gameover); /* set ContextID to 97 */
(*sWself_gameover)=YYRValue(0!=0);
;

YY_STACKTRACE_LINE(3);
YYRValue* sWself_controltype = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_controltype); /* set ContextID to 97 */
(*sWself_controltype)=g_pString298_1533F0FC;
;

YY_STACKTRACE_LINE(7);
(global_padindex)=-4;
;

YY_STACKTRACE_LINE(8);
(global_debug)=YYRValue(0!=0);
;

YY_STACKTRACE_LINE(9);
(global_grav)=0.4;
;

YY_STACKTRACE_LINE(13);
YYRValue* sWself_weapon = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_weapon); /* set ContextID to 97 */
(*sWself_weapon)=-4;
;

YY_STACKTRACE_LINE(16);
YYRValue* sWself_maxhp = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_maxhp); /* set ContextID to 97 */
(*sWself_maxhp)=5;
;

YY_STACKTRACE_LINE(17);
YYRValue* sself_maxhp = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_maxhp); /* set ContextID to sself_maxhp */
YYRValue* sWself_currenthp = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_currenthp); /* set ContextID to 97 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_currenthp))=/* First usage */(*sself_maxhp);
PopContextStack(1);
;

YY_STACKTRACE_LINE(19);
FREE_RValue( &__ret1__ );
YYRValue* sWself_view_xini = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_view_xini); /* set ContextID to 97 */
__Args__[0] = (YYRValue*)&gs_constLongArg0_1533F0FC;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_1533F0FC;
__pArgs__[1] = &__Args__[1];
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_view_xini))=gml_Script___view_get(pSelf,pOther,__ret1__,2,&__pArgs__[0]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(20);
FREE_RValue( &__ret1__ );
YYRValue* sWself_view_yini = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_view_yini); /* set ContextID to 97 */
__Args__[0] = (YYRValue*)&gs_constLongArg2_1533F0FC;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_1533F0FC;
__pArgs__[1] = &__Args__[1];
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_view_yini))=gml_Script___view_get(pSelf,pOther,__ret1__,2,&__pArgs__[0]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(23);
FREE_RValue( &__ret1__ );
local_gp_num=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,0,g_FUNC_gamepad_get_device_count.val,NULL);
;

YY_STACKTRACE_LINE(26);

YY_STACKTRACE_LINE(26);
local_i=0;
;
bool ___f299___ = true;
while( true ) {
if (!___f299___) {

YY_STACKTRACE_LINE(26);
++/* local */local_i;
;
}
___f299___ = false;
bool ___b300___ = ((/* local */local_i < /* local */local_gp_num));
if (!___b300___) break;
{

YY_STACKTRACE_LINE(27);

YY_STACKTRACE_LINE(28);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local_i;
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_gamepad_is_connected.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(28);

YY_STACKTRACE_LINE(29);
(PushContextStack( (YYObjectBase*)g_pGlobal ), (global_padindex))=/* local */local_i;
PopContextStack(1);
;

YY_STACKTRACE_LINE(30);
FREE_RValue( &__ret1__ );
__Args__[0] = g_pString301_1533F0FC;
__pArgs__[0] = &__Args__[0];
__pArgs__[1] = &/* local */local_i;
gml_Script_log(pSelf,pOther,__ret1__,2,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(31);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local_i;
__Args__[1] = (YYRValue*)&gs_constArg3_1533F0FC;
__pArgs__[1] = &__Args__[1];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_gamepad_set_axis_deadzone.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(32);
break;
;
;
}
;
;
}
}
;
}
#endif
