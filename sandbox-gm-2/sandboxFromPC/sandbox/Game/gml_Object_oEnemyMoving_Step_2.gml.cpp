#include "pch.hpp"
extern YYVAR g_Script_gml_Object_oEnemyMoving_Step_2;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_oEnemyMoving_Step_2( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oEnemyMoving_Step_2( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oEnemyMoving_Step_2", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );


YY_STACKTRACE_LINE(2);
YYGML_event_inherited(pSelf,pOther);
;

YY_STACKTRACE_LINE(6);
YYRValue* sself_vx = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vx); /* set ContextID to sself_vx */
if((/* First usage */(*sself_vx) == 0)) {

YY_STACKTRACE_LINE(6);

YY_STACKTRACE_LINE(7);
YYRValue* sself_facing = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_facing); /* set ContextID to sself_facing */
YYRValue* sself_sp = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_sp); /* set ContextID to sself_sp */
YYRValue* sWself_vx = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vx); /* set ContextID to 911 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_vx))=((-1 * /* First usage */(*sself_facing)) * /* First usage */(*sself_sp));
PopContextStack(1);
;
;
}
;

YY_STACKTRACE_LINE(10);
YYRValue* sWself_facing = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_facing); /* set ContextID to 73 */
(*sWself_facing)=YYGML_sign((double)(*sself_vx).asReal());
;
}
#endif
