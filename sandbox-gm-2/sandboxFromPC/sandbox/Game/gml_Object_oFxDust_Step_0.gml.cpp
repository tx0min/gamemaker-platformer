#include "pch.hpp"
YYRValue& gml_Script_Approach( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_hspeed;
extern YYVAR g_VAR_vspeed;
extern YYVAR g_VAR_image_xscale;
extern YYVAR g_VAR_image_yscale;
extern YYVAR g_VAR_image_alpha;
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_Script_gml_Object_oFxDust_Step_0;
#ifndef __YYNODEFS
DValue gs_constArg0_E220003A = { 0, 0, VALUE_REAL };
DValue gs_constArg1_E220003A = { 0.1, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_E220003A;
extern DValue gs_constArg1_E220003A;
#endif // __YYNODEFS

void gml_Object_oFxDust_Step_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oFxDust_Step_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oFxDust_Step_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[3];
YYRValue __Args__[3];
YYRValue sbuiltin_hspeed;
YYRValue sWbuiltin_hspeed;
YYRValue sbuiltin_vspeed;
YYRValue sWbuiltin_vspeed;
YYRValue sWbuiltin_image_xscale;
YYRValue sWbuiltin_image_yscale;
YYRValue sWbuiltin_image_alpha;
YYRValue sbuiltin_image_alpha;
YYRValue sWbuiltin_x;
YYRValue sWbuiltin_y;
YYRValue __ret1__;


YY_STACKTRACE_LINE(1);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
__Args__[0] = /* First usage */sbuiltin_hspeed;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg0_E220003A;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg1_E220003A;
__pArgs__[2] = &__Args__[2];
sWbuiltin_hspeed=gml_Script_Approach(pSelf,pOther,__ret1__,3,&__pArgs__[0]);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_hspeed );
;

YY_STACKTRACE_LINE(2);
FREE_RValue( &__ret1__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
__Args__[0] = /* First usage */sbuiltin_vspeed;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg0_E220003A;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constArg1_E220003A;
__pArgs__[2] = &__Args__[2];
sWbuiltin_vspeed=gml_Script_Approach(pSelf,pOther,__ret1__,3,&__pArgs__[0]);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_vspeed );
;

YY_STACKTRACE_LINE(4);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_xscale.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_xscale );
/* First usage */sWbuiltin_image_xscale-=0.025;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_xscale.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_xscale );
;

YY_STACKTRACE_LINE(5);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_yscale.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_yscale );
/* First usage */sWbuiltin_image_yscale-=0.025;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_yscale.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_yscale );
;

YY_STACKTRACE_LINE(7);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_alpha );
/* First usage */sWbuiltin_image_alpha-=0.025;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_alpha );
;

YY_STACKTRACE_LINE(9);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_alpha );
if((/* First usage */sbuiltin_image_alpha <= 0)) {

YY_STACKTRACE_LINE(10);
YYGML_instance_destroy(pSelf,pOther,0,NULL);
;
}
;

YY_STACKTRACE_LINE(12);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_hspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_hspeed );
/* First usage */sWbuiltin_x+=/* volatile */sbuiltin_hspeed;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_x );
;

YY_STACKTRACE_LINE(13);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_y );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_vspeed.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_vspeed );
/* First usage */sWbuiltin_y+=/* volatile */sbuiltin_vspeed;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_y );
;
}
#endif
