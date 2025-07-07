#include "pch.hpp"
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_Script_gml_Object_oParWeapon_Create_0;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_oParWeapon_Create_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oParWeapon_Create_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oParWeapon_Create_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;


YY_STACKTRACE_LINE(1);
YYRValue* sWself_inuse = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_inuse); /* set ContextID to 123 */
(*sWself_inuse)=YYRValue(0!=0);
;

YY_STACKTRACE_LINE(2);
YYRValue* sWself_disabled = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_disabled); /* set ContextID to 123 */
(*sWself_disabled)=YYRValue(0!=0);
;

YY_STACKTRACE_LINE(4);
YYRValue* sWself_xout = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_xout); /* set ContextID to 123 */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_xout))=/* First usage */sbuiltin_x;
PopContextStack(1);
;

YY_STACKTRACE_LINE(5);
YYRValue* sWself_yout = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_yout); /* set ContextID to 123 */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_yout))=/* First usage */sbuiltin_y;
PopContextStack(1);
;

YY_STACKTRACE_LINE(7);
YYRValue* sWself_hold = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_hold); /* set ContextID to 123 */
(*sWself_hold)=YYRValue(0!=0);
;

YY_STACKTRACE_LINE(8);
YYRValue* sWself_vanishTime = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vanishTime); /* set ContextID to 123 */
(*sWself_vanishTime)=60;
;

YY_STACKTRACE_LINE(9);
YYRValue* sWself_currentStreak = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_currentStreak); /* set ContextID to 123 */
(*sWself_currentStreak)=0;
;

YY_STACKTRACE_LINE(12);
YYRValue* sWself_damage = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_damage); /* set ContextID to 123 */
(*sWself_damage)=1;
;

YY_STACKTRACE_LINE(13);
YYRValue* sWself_holdfire = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_holdfire); /* set ContextID to 123 */
(*sWself_holdfire)=YYRValue(0!=0);
;

YY_STACKTRACE_LINE(14);
YYRValue* sWself_bulletSprite = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletSprite); /* set ContextID to 123 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_bulletSprite))=YYASSET_REF(0x01000017);
PopContextStack(1);
;

YY_STACKTRACE_LINE(15);
YYRValue* sWself_bulletColor = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletColor); /* set ContextID to 123 */
(*sWself_bulletColor)=16777215;
;

YY_STACKTRACE_LINE(16);
YYRValue* sWself_bulletSound = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletSound); /* set ContextID to 123 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_bulletSound))=YYASSET_REF(0x0200000A);
PopContextStack(1);
;

YY_STACKTRACE_LINE(17);
YYRValue* sWself_bulletSpeed = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletSpeed); /* set ContextID to 123 */
(*sWself_bulletSpeed)=10;
;

YY_STACKTRACE_LINE(18);
YYRValue* sWself_bulletFrequency = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletFrequency); /* set ContextID to 123 */
(*sWself_bulletFrequency)=1;
;

YY_STACKTRACE_LINE(19);
YYRValue* sWself_bulletStreak = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletStreak); /* set ContextID to 123 */
(*sWself_bulletStreak)=1;
;

YY_STACKTRACE_LINE(20);
YYRValue* sWself_bulletDispersion = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletDispersion); /* set ContextID to 123 */
(*sWself_bulletDispersion)=0;
;

YY_STACKTRACE_LINE(21);
YYRValue* sWself_bulletNumber = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletNumber); /* set ContextID to 123 */
(*sWself_bulletNumber)=1;
;

YY_STACKTRACE_LINE(22);
YYRValue* sWself_bulletConeAngle = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletConeAngle); /* set ContextID to 123 */
(*sWself_bulletConeAngle)=45;
;

YY_STACKTRACE_LINE(23);
YYRValue* sWself_bulletRange = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletRange); /* set ContextID to 123 */
(*sWself_bulletRange)=0;
;

YY_STACKTRACE_LINE(24);
YYRValue* sWself_bulletWeight = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletWeight); /* set ContextID to 123 */
(*sWself_bulletWeight)=0;
;

YY_STACKTRACE_LINE(25);
YYRValue* sWself_bulletLifetime = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletLifetime); /* set ContextID to 123 */
(*sWself_bulletLifetime)=0;
;

YY_STACKTRACE_LINE(26);
YYRValue* sWself_bulletTrail = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletTrail); /* set ContextID to 123 */
(*sWself_bulletTrail)=YYRValue(0!=0);
;

YY_STACKTRACE_LINE(27);
YYRValue* sWself_bulletExplode = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletExplode); /* set ContextID to 123 */
(*sWself_bulletExplode)=YYRValue(0!=0);
;

YY_STACKTRACE_LINE(29);
YYRValue* sWself_drawPath = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_drawPath); /* set ContextID to 123 */
(*sWself_drawPath)=YYRValue(0!=0);
;

YY_STACKTRACE_LINE(30);
YYRValue* sWself_pathColor = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_pathColor); /* set ContextID to 123 */
(*sWself_pathColor)=255;
;

YY_STACKTRACE_LINE(31);
YYRValue* sWself_pathSize = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_pathSize); /* set ContextID to 123 */
(*sWself_pathSize)=1;
;

YY_STACKTRACE_LINE(32);
YYRValue* sWself_pathGap = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_pathGap); /* set ContextID to 123 */
(*sWself_pathGap)=0;
;

YY_STACKTRACE_LINE(33);
YYRValue* sWself_pathDotsize = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_pathDotsize); /* set ContextID to 123 */
(*sWself_pathDotsize)=3;
;
}
#endif
