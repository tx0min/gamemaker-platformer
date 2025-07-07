#include "pch.hpp"
extern YYVAR g_VAR_image_blend;
extern YYVAR g_Script_gml_Object_oFxDust_Alarm_0;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_oFxDust_Alarm_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oFxDust_Alarm_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oFxDust_Alarm_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue sWbuiltin_image_blend;


YY_STACKTRACE_LINE(2);
YYRValue* sself_color = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_color); /* set ContextID to sself_color */
sWbuiltin_image_blend=/* First usage */(*sself_color);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_blend.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_blend );
;
}
#endif
