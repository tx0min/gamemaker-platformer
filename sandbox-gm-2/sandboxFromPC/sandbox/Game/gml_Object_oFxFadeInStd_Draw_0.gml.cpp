#include "pch.hpp"
extern YYVAR g_VAR_image_alpha;
extern YYVAR g_Script_gml_Object_oFxFadeInStd_Draw_0;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_oFxFadeInStd_Draw_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oFxFadeInStd_Draw_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oFxFadeInStd_Draw_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue sWbuiltin_image_alpha;
YYRValue sbuiltin_image_alpha;


YY_STACKTRACE_LINE(4);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_alpha );
/* First usage */sWbuiltin_image_alpha-=0.05;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_alpha );
;

YY_STACKTRACE_LINE(6);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_alpha );
if((/* First usage */sbuiltin_image_alpha <= 0)) {

YY_STACKTRACE_LINE(7);
YYGML_instance_destroy(pSelf,pOther,0,NULL);
;
}
;
}
#endif
