#include "pch.hpp"
extern YYVAR g_VAR_image_xscale;
extern YYVAR g_Script_gml_Object_oParEnemy_Create_0;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_oParEnemy_Create_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oParEnemy_Create_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oParEnemy_Create_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue & global_grav = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_grav);
YYRValue sbuiltin_image_xscale;


YY_STACKTRACE_LINE(2);
YYGML_event_inherited(pSelf,pOther);
;

YY_STACKTRACE_LINE(4);
YYRValue* sWself_facing = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_facing); /* set ContextID to 111 */
(*sWself_facing)=1;
;

YY_STACKTRACE_LINE(9);
YYRValue* sWself_m = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_m); /* set ContextID to 111 */
(*sWself_m)=0.8;
;

YY_STACKTRACE_LINE(10);
YYRValue* sWself_jumpm = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_jumpm); /* set ContextID to 111 */
(*sWself_jumpm)=1;
;

YY_STACKTRACE_LINE(12);
YYRValue* sself_m = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_m); /* set ContextID to sself_m */
YYRValue* sWself_groundAccel = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_groundAccel); /* set ContextID to 111 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_groundAccel))=(1 * /* First usage */(*sself_m));
PopContextStack(1);
;

YY_STACKTRACE_LINE(13);
YYRValue* sWself_groundFric = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_groundFric); /* set ContextID to 111 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_groundFric))=(1.9 * (*sself_m));
PopContextStack(1);
;

YY_STACKTRACE_LINE(14);
YYRValue* sWself_airAccel = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_airAccel); /* set ContextID to 111 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_airAccel))=(0.75 * (*sself_m));
PopContextStack(1);
;

YY_STACKTRACE_LINE(15);
YYRValue* sWself_airFric = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_airFric); /* set ContextID to 111 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_airFric))=(0.1 * (*sself_m));
PopContextStack(1);
;

YY_STACKTRACE_LINE(16);
YYRValue* sWself_vxMax = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vxMax); /* set ContextID to 111 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_vxMax))=(6.5 * (*sself_m));
PopContextStack(1);
;

YY_STACKTRACE_LINE(17);
YYRValue* sWself_vyMax = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vyMax); /* set ContextID to 111 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_vyMax))=(10 * (*sself_m));
PopContextStack(1);
;

YY_STACKTRACE_LINE(18);
YYRValue* sself_jumpm = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_jumpm); /* set ContextID to sself_jumpm */
YYRValue* sWself_jumpHeight = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_jumpHeight); /* set ContextID to 111 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_jumpHeight))=(12 * /* First usage */(*sself_jumpm));
PopContextStack(1);
;

YY_STACKTRACE_LINE(19);
YYRValue* sWself_gravNorm = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_gravNorm); /* set ContextID to 111 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_gravNorm))=/* First usage */(global_grav);
PopContextStack(1);
;

YY_STACKTRACE_LINE(20);
YYRValue* sWself_gravSlide = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_gravSlide); /* set ContextID to 111 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_gravSlide))=((global_grav) / (double)2);
PopContextStack(1);
;

YY_STACKTRACE_LINE(22);
YYRValue* sWself_clingTime = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_clingTime); /* set ContextID to 111 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_clingTime))=(4 * (*sself_m));
PopContextStack(1);
;

YY_STACKTRACE_LINE(27);
YYRValue* sWself_IDLE = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_IDLE); /* set ContextID to 111 */
(*sWself_IDLE)=10;
;

YY_STACKTRACE_LINE(28);
YYRValue* sWself_RUN = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_RUN); /* set ContextID to 111 */
(*sWself_RUN)=11;
;

YY_STACKTRACE_LINE(29);
YYRValue* sWself_JUMP = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_JUMP); /* set ContextID to 111 */
(*sWself_JUMP)=12;
;

YY_STACKTRACE_LINE(33);
YYRValue* sself_IDLE = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_IDLE); /* set ContextID to sself_IDLE */
YYRValue* sWself_state = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_state); /* set ContextID to 111 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_state))=/* First usage */(*sself_IDLE);
PopContextStack(1);
;

YY_STACKTRACE_LINE(34);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_xscale.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_xscale );
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_facing))=/* First usage */sbuiltin_image_xscale;
PopContextStack(1);
;

YY_STACKTRACE_LINE(36);
YYRValue* sWself_xscale = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_xscale); /* set ContextID to 111 */
(*sWself_xscale)=1;
;

YY_STACKTRACE_LINE(37);
YYRValue* sWself_yscale = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_yscale); /* set ContextID to 111 */
(*sWself_yscale)=1;
;

YY_STACKTRACE_LINE(39);
YYRValue* sWself_stretch = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_stretch); /* set ContextID to 111 */
(*sWself_stretch)=1.2;
;

YY_STACKTRACE_LINE(40);
YYRValue* sWself_squash = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_squash); /* set ContextID to 111 */
(*sWself_squash)=0.8;
;

YY_STACKTRACE_LINE(43);
YYRValue* sWself_maxhp = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_maxhp); /* set ContextID to 111 */
(*sWself_maxhp)=4;
;

YY_STACKTRACE_LINE(44);
YYRValue* sself_maxhp = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_maxhp); /* set ContextID to sself_maxhp */
YYRValue* sWself_currenthp = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_currenthp); /* set ContextID to 111 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_currenthp))=/* First usage */(*sself_maxhp);
PopContextStack(1);
;

YY_STACKTRACE_LINE(45);
YYRValue* sWself_damage = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_damage); /* set ContextID to 111 */
(*sWself_damage)=1;
;

YY_STACKTRACE_LINE(46);
YYRValue* sWself_invincible = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_invincible); /* set ContextID to 111 */
(*sWself_invincible)=YYRValue(0!=0);
;

YY_STACKTRACE_LINE(47);
YYRValue* sWself_blinkmultiplier = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_blinkmultiplier); /* set ContextID to 111 */
(*sWself_blinkmultiplier)=1;
;

YY_STACKTRACE_LINE(50);
YYRValue* sWself_color = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_color); /* set ContextID to 111 */
(*sWself_color)=255;
;
}
#endif
