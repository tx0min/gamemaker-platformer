#include "pch.hpp"
extern YYVAR g_VAR_speed;
extern YYVAR g_VAR_friction;
extern YYVAR g_VAR_direction;
extern YYVAR g_Script_gml_Object_oFxExplosion_Create_0;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_oFxExplosion_Create_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oFxExplosion_Create_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oFxExplosion_Create_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue sWbuiltin_speed;
YYRValue sWbuiltin_friction;
YYRValue sWbuiltin_direction;


YY_STACKTRACE_LINE(3);
sWbuiltin_speed=YYGML_random_range((double)1,(double)5);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_speed.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_speed );
;

YY_STACKTRACE_LINE(4);
sWbuiltin_friction=0.25;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_friction.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_friction );
;

YY_STACKTRACE_LINE(5);
sWbuiltin_direction=YYGML_random((double)360);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_direction.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_direction );
;
}
#endif
