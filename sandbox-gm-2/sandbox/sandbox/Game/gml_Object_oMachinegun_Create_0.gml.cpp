#include "pch.hpp"
extern YYVAR g_Script_gml_Object_oMachinegun_Create_0;
#ifndef __YYNODEFS
const char g_pString329_2E7B3982_s[] = {
0x4d, 0x61, 0x63, 0x68, 0x69, 0x6e, 0x65, 0x67, 0x75, 0x6e, 0x00,                                    // Machinegun.
};
const YYRValue g_pString329_2E7B3982(g_pString329_2E7B3982_s, true);
#else
extern const char g_pString329_2E7B3982_s[];
extern const YYRValue g_pString329_2E7B3982;
#endif // __YYNODEFS

void gml_Object_oMachinegun_Create_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oMachinegun_Create_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oMachinegun_Create_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );


YY_STACKTRACE_LINE(1);
YYGML_event_inherited(pSelf,pOther);
;

YY_STACKTRACE_LINE(2);
YYRValue* sWself_name = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_name); /* set ContextID to 108 */
(*sWself_name)=g_pString329_2E7B3982;
;

YY_STACKTRACE_LINE(3);
YYRValue* sWself_holdfire = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_holdfire); /* set ContextID to 108 */
(*sWself_holdfire)=YYRValue(1!=0);
;

YY_STACKTRACE_LINE(4);
YYRValue* sWself_damage = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_damage); /* set ContextID to 108 */
(*sWself_damage)=1;
;

YY_STACKTRACE_LINE(6);
YYRValue* sWself_bulletSprite = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletSprite); /* set ContextID to 108 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_bulletSprite))=YYASSET_REF(0x01000017);
PopContextStack(1);
;

YY_STACKTRACE_LINE(7);
YYRValue* sWself_bulletSound = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletSound); /* set ContextID to 108 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_bulletSound))=YYASSET_REF(0x0200000A);
PopContextStack(1);
;

YY_STACKTRACE_LINE(8);
YYRValue* sWself_bulletColor = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletColor); /* set ContextID to 108 */
(*sWself_bulletColor)=16711680;
;

YY_STACKTRACE_LINE(9);
YYRValue* sWself_bulletFrequency = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletFrequency); /* set ContextID to 108 */
(*sWself_bulletFrequency)=5;
;

YY_STACKTRACE_LINE(10);
YYRValue* sWself_bulletStreak = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletStreak); /* set ContextID to 108 */
(*sWself_bulletStreak)=1;
;

YY_STACKTRACE_LINE(11);
YYRValue* sWself_bulletDispersion = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletDispersion); /* set ContextID to 108 */
(*sWself_bulletDispersion)=0;
;

YY_STACKTRACE_LINE(12);
YYRValue* sWself_bulletNumber = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletNumber); /* set ContextID to 108 */
(*sWself_bulletNumber)=1;
;

YY_STACKTRACE_LINE(13);
YYRValue* sWself_bulletRange = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletRange); /* set ContextID to 108 */
(*sWself_bulletRange)=0;
;

YY_STACKTRACE_LINE(14);
YYRValue* sWself_bulletWeight = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_bulletWeight); /* set ContextID to 108 */
(*sWself_bulletWeight)=0;
;
}
#endif
