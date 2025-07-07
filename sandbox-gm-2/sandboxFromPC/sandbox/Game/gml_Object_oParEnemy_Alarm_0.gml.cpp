#include "pch.hpp"
extern YYVAR g_Script_gml_Object_oParEnemy_Alarm_0;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_oParEnemy_Alarm_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oParEnemy_Alarm_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oParEnemy_Alarm_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );


YY_STACKTRACE_LINE(2);
YYRValue* sWself_invincible = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_invincible); /* set ContextID to 112 */
(*sWself_invincible)=YYRValue(0!=0);
;
}
#endif
