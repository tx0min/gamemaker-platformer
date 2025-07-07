#include "pch.hpp"
YYRValue& gml_Script_draw_set_blend_mode( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_sprite_width;
extern YYVAR g_VAR_sprite_height;
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_image_angle;
extern YYVAR g_VAR_image_alpha;
extern YYVAR g_Script_gml_Object_oBullet_Draw_0;
extern YYVAR g_FUNC_sprite_get_width;
extern YYVAR g_FUNC_sprite_get_height;
#ifndef __YYNODEFS
DValue gs_constArg0_5C6587A4 = { 1, 0, VALUE_REAL };
DValue gs_constArg1_5C6587A4 = { 0, 0, VALUE_REAL };
#else
extern DValue gs_constArg0_5C6587A4;
extern DValue gs_constArg1_5C6587A4;
#endif // __YYNODEFS

void gml_Object_oBullet_Draw_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oBullet_Draw_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oBullet_Draw_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[2];
YYRValue __Args__[2];
YYRValue local_sw;
YYRValue local_sh;
YYRValue sbuiltin_sprite_width;
YYRValue local_w;
YYRValue sbuiltin_sprite_height;
YYRValue local_h;
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue sbuiltin_image_angle;
YYRValue sbuiltin_image_alpha;
YYRValue __ret1__;


YY_STACKTRACE_LINE(2);
__Args__[0] = (YYRValue*)&gs_constArg0_5C6587A4;
__pArgs__[0] = &__Args__[0];
gml_Script_draw_set_blend_mode(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(4);
FREE_RValue( &__ret1__ );
__Args__[0] = YYASSET_REF(0x0100003E);
__pArgs__[0] = &__Args__[0];
local_sw=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_sprite_get_width.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(5);
FREE_RValue( &__ret1__ );
__Args__[0] = YYASSET_REF(0x0100003E);
__pArgs__[0] = &__Args__[0];
local_sh=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_sprite_get_height.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(7);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_sprite_width.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_sprite_width );
local_w=((/* First usage */sbuiltin_sprite_width / /* local */local_sw) + 0.2);
;

YY_STACKTRACE_LINE(8);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_sprite_height.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_sprite_height );
local_h=((/* First usage */sbuiltin_sprite_height / /* local */local_sh) + 0.2);
;

YY_STACKTRACE_LINE(10);
FREE_RValue( &__ret1__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_angle.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_angle );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_alpha );
__Args__[0] = (YYRValue*)&gs_constArg1_5C6587A4;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* First usage */sbuiltin_image_alpha - 0.3);
__pArgs__[1] = &__Args__[1];
YYGML_draw_sprite_ext(pSelf,(int)YYASSET_REF(0x0100003E).asReal(),(float)0,(float)(float)(/* First usage */sbuiltin_x.asReal()),(float)(float)(/* First usage */sbuiltin_y.asReal()),(float)(float)(/* local */local_w.asReal()),(float)(float)(/* local */local_h.asReal()),(float)(float)(/* First usage */sbuiltin_image_angle.asReal()),(int)(int64)16777215,(float)YYGML_max(__ret1__,2,&__pArgs__[0]).asReal());
;

YY_STACKTRACE_LINE(12);
FREE_RValue( &__ret1__ );
__Args__[0] = (YYRValue*)&gs_constArg1_5C6587A4;
__pArgs__[0] = &__Args__[0];
gml_Script_draw_set_blend_mode(pSelf,pOther,__ret1__,1,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(14);
YYGML_draw_self(pSelf);
;
}
#endif
