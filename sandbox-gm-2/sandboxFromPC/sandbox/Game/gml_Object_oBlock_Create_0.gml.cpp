#include "pch.hpp"
extern YYVAR g_VAR_image_speed;
extern YYVAR g_Script_gml_Object_oBlock_Create_0;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_oBlock_Create_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oBlock_Create_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oBlock_Create_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue sWbuiltin_image_speed;


YY_STACKTRACE_LINE(1);
sWbuiltin_image_speed=0;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_speed.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_speed );
;
}
#endif
