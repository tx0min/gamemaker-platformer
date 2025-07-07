#include "pch.hpp"
YYRValue& gml_Script_shootBullet( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_alarm;
extern YYVAR g_Script_gml_Object_oParWeapon_Alarm_2;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_oParWeapon_Alarm_2( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oParWeapon_Alarm_2( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oParWeapon_Alarm_2", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[2];
YYRValue __Args__[2];
YYRValue sWbuiltin_alarm_CD3FBBB8;
YYRValue __ret1__;


YY_STACKTRACE_LINE(2);
YYRValue* sself_currentStreak = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_currentStreak); /* set ContextID to sself_currentStreak */
YYRValue* sself_bulletStreak = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_bulletStreak); /* set ContextID to sself_bulletStreak */
if((/* First usage */(*sself_currentStreak) < /* First usage */(*sself_bulletStreak))) {

YY_STACKTRACE_LINE(2);

YY_STACKTRACE_LINE(3);
FREE_RValue( &__ret1__ );
YYRValue* sself_xout = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xout); /* set ContextID to sself_xout */
YYRValue* sself_yout = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_yout); /* set ContextID to sself_yout */
__Args__[0] = /* First usage */(*sself_xout);
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* First usage */(*sself_yout);
__pArgs__[1] = &__Args__[1];
gml_Script_shootBullet(pSelf,pOther,__ret1__,2,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(4);
YYRValue* sWself_currentStreak = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_currentStreak); /* set ContextID to 1089 */
++/* First usage */(*sWself_currentStreak);
;

YY_STACKTRACE_LINE(5);
sWbuiltin_alarm_CD3FBBB8=2;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_alarm.val, (int)2, &sWbuiltin_alarm_CD3FBBB8 );
;
;
}
;
}
#endif
