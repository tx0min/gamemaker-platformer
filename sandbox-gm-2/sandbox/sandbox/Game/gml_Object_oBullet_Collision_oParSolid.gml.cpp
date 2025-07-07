#include "pch.hpp"
YYRValue& gml_Script_fxDust( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_image_blend;
extern YYVAR g_Script_gml_Object_oBullet_Collision_oParSolid;
#ifndef __YYNODEFS
DValue gs_constArg0_9CE30E2A = { 4, 0, VALUE_REAL };
DValue gs_constArg1_9CE30E2A = { 5, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_9CE30E2A;
extern DValue gs_constArg1_9CE30E2A;
#endif // __YYNODEFS

void gml_Object_oBullet_Collision_oParSolid( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oBullet_Collision_oParSolid( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oBullet_Collision_oParSolid", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[6];
YYRValue __Args__[6];
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue sbuiltin_image_blend;
YYRValue __ret1__;


YY_STACKTRACE_LINE(2);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_blend.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_blend );
__Args__[0] = /* First usage */sbuiltin_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* First usage */sbuiltin_y;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg0_9CE30E2A;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg0_9CE30E2A;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (YYRValue*)&gs_constArg1_9CE30E2A;
__pArgs__[4] = &__Args__[4];
__Args__[5] = /* First usage */sbuiltin_image_blend;
__pArgs__[5] = &__Args__[5];
gml_Script_fxDust(pSelf,pOther,__ret1__,6,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(4);
YYGML_instance_destroy(pSelf,pOther,0,NULL);
;
}
#endif
