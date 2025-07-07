#include "pch.hpp"
extern YYVAR g_Script_gml_Object_oBullet_Create_0;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_oBullet_Create_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oBullet_Create_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oBullet_Create_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue & global_grav = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_grav);


YY_STACKTRACE_LINE(1);
YYRValue* sWself_xcenter = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_xcenter); /* set ContextID to 61 */
(*sWself_xcenter)=0;
;

YY_STACKTRACE_LINE(2);
YYRValue* sWself_ycenter = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_ycenter); /* set ContextID to 61 */
(*sWself_ycenter)=0;
;

YY_STACKTRACE_LINE(3);
YYRValue* sWself_sp = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_sp); /* set ContextID to 61 */
(*sWself_sp)=10;
;

YY_STACKTRACE_LINE(4);
YYRValue* sWself_damage = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_damage); /* set ContextID to 61 */
(*sWself_damage)=1;
;

YY_STACKTRACE_LINE(5);
YYRValue* sWself_vanish = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vanish); /* set ContextID to 61 */
(*sWself_vanish)=YYRValue(0!=0);
;

YY_STACKTRACE_LINE(6);
YYRValue* sWself_grav = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_grav); /* set ContextID to 61 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_grav))=/* First usage */(global_grav);
PopContextStack(1);
;
}
#endif
