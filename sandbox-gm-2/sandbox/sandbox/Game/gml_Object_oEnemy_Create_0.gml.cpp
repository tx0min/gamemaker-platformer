#include "pch.hpp"
extern YYVAR g_Script_gml_Object_oEnemy_Create_0;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_oEnemy_Create_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oEnemy_Create_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oEnemy_Create_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );


YY_STACKTRACE_LINE(1);
YYGML_event_inherited(pSelf,pOther);
;

YY_STACKTRACE_LINE(2);
YYRValue* sWself_maxhp = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_maxhp); /* set ContextID to 71 */
(*sWself_maxhp)=2;
;

YY_STACKTRACE_LINE(3);
YYRValue* sself_maxhp = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_maxhp); /* set ContextID to sself_maxhp */
YYRValue* sWself_currenthp = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_currenthp); /* set ContextID to 71 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_currenthp))=/* First usage */(*sself_maxhp);
PopContextStack(1);
;

YY_STACKTRACE_LINE(4);
YYRValue* sWself_damage = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_damage); /* set ContextID to 71 */
(*sWself_damage)=1;
;

YY_STACKTRACE_LINE(6);
YYRValue* sWself_color = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_color); /* set ContextID to 71 */
(*sWself_color)=14322434;
;
}
#endif
