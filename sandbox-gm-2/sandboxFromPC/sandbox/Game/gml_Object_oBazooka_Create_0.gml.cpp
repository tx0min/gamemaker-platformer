#include "pch.hpp"
extern YYVAR g_Script_gml_Object_oBazooka_Create_0;
#ifndef __YYNODEFS
const char g_pString219_18B76F68_s[] = {
0x42, 0x61, 0x7a, 0x6f, 0x6f, 0x6b, 0x61, 0x00,                                                      // Bazooka.
};
const YYRValue g_pString219_18B76F68(g_pString219_18B76F68_s, true);
#else
extern const char g_pString219_18B76F68_s[];
extern const YYRValue g_pString219_18B76F68;
#endif // __YYNODEFS

void gml_Object_oBazooka_Create_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oBazooka_Create_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oBazooka_Create_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );


YY_STACKTRACE_LINE(1);
YYGML_event_inherited(pSelf,pOther);
;

YY_STACKTRACE_LINE(3);
YYRValue* sWself_name = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_name); /* set ContextID to 59 */
(*sWself_name)=g_pString219_18B76F68;
;

YY_STACKTRACE_LINE(4);
YYRValue* sWself_holdfire = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_holdfire); /* set ContextID to 59 */
(*sWself_holdfire)=YYRValue(0!=0);
;

YY_STACKTRACE_LINE(5);
YYRValue* sWself_damage = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_damage); /* set ContextID to 59 */
(*sWself_damage)=4;
;

YY_STACKTRACE_LINE(7);
YYRValue* sWself_bulletSprite = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletSprite); /* set ContextID to 59 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_bulletSprite))=YYASSET_REF(0x01000018);
PopContextStack(1);
;

YY_STACKTRACE_LINE(8);
YYRValue* sWself_bulletColor = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletColor); /* set ContextID to 59 */
(*sWself_bulletColor)=65535;
;

YY_STACKTRACE_LINE(9);
YYRValue* sWself_bulletSound = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletSound); /* set ContextID to 59 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_bulletSound))=YYASSET_REF(0x0200000B);
PopContextStack(1);
;

YY_STACKTRACE_LINE(10);
YYRValue* sWself_bulletFrequency = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletFrequency); /* set ContextID to 59 */
(*sWself_bulletFrequency)=1;
;

YY_STACKTRACE_LINE(11);
YYRValue* sWself_bulletStreak = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletStreak); /* set ContextID to 59 */
(*sWself_bulletStreak)=1;
;

YY_STACKTRACE_LINE(12);
YYRValue* sWself_bulletDispersion = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletDispersion); /* set ContextID to 59 */
(*sWself_bulletDispersion)=0;
;

YY_STACKTRACE_LINE(13);
YYRValue* sWself_bulletNumber = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletNumber); /* set ContextID to 59 */
(*sWself_bulletNumber)=1;
;

YY_STACKTRACE_LINE(14);
YYRValue* sWself_bulletWeight = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletWeight); /* set ContextID to 59 */
(*sWself_bulletWeight)=0;
;

YY_STACKTRACE_LINE(15);
YYRValue* sWself_bulletLifetime = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletLifetime); /* set ContextID to 59 */
(*sWself_bulletLifetime)=0;
;

YY_STACKTRACE_LINE(16);
YYRValue* sWself_bulletTrail = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletTrail); /* set ContextID to 59 */
(*sWself_bulletTrail)=YYRValue(1!=0);
;

YY_STACKTRACE_LINE(17);
YYRValue* sWself_bulletExplode = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletExplode); /* set ContextID to 59 */
(*sWself_bulletExplode)=YYRValue(1!=0);
;
}
#endif
