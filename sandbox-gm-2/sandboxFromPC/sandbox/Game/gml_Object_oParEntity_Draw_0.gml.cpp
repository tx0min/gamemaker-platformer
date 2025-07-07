#include "pch.hpp"
extern YYVAR g_VAR_sprite_index;
extern YYVAR g_VAR_image_index;
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_image_xscale;
extern YYVAR g_VAR_image_yscale;
extern YYVAR g_VAR_image_angle;
extern YYVAR g_VAR_image_blend;
extern YYVAR g_VAR_image_alpha;
extern YYVAR g_VAR_bbox_left;
extern YYVAR g_VAR_bbox_top;
extern YYVAR g_VAR_bbox_right;
extern YYVAR g_VAR_bbox_bottom;
extern YYVAR g_Script_gml_Object_oParEntity_Draw_0;
extern YYVAR g_FUNC_draw_get_color;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_oParEntity_Draw_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oParEntity_Draw_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oParEntity_Draw_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue sbuiltin_sprite_index;
YYRValue sbuiltin_image_index;
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue sbuiltin_image_xscale;
YYRValue sbuiltin_image_yscale;
YYRValue sbuiltin_image_angle;
YYRValue sbuiltin_image_blend;
YYRValue sbuiltin_image_alpha;
YYRValue & global_debug = ((CInstanceBase*)g_pGlobal)->GetYYVarRef(kVARID_global_debug);
YYRValue local_c;
YYRValue sbuiltin_bbox_left;
YYRValue sbuiltin_bbox_top;
YYRValue sbuiltin_bbox_right;
YYRValue sbuiltin_bbox_bottom;
YYRValue local_w;
YYRValue local_h;
YYRValue __ret1__;


YY_STACKTRACE_LINE(1);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_sprite_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_sprite_index );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_index );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_xscale.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_xscale );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_yscale.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_yscale );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_angle.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_angle );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_blend.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_blend );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_alpha );
YYGML_draw_sprite_ext(pSelf,(int)(int)(int64)((int)(int64)/* First usage */sbuiltin_sprite_index.asReal()),(float)(float)(/* First usage */sbuiltin_image_index.asReal()),(float)(float)(/* First usage */sbuiltin_x.asReal()),(float)(float)(/* First usage */sbuiltin_y.asReal()),(float)(float)(/* First usage */sbuiltin_image_xscale.asReal()),(float)(float)(/* First usage */sbuiltin_image_yscale.asReal()),(float)(float)(/* First usage */sbuiltin_image_angle.asReal()),(int)(int64)/* First usage */sbuiltin_image_blend,(float)(float)(/* First usage */sbuiltin_image_alpha.asReal()));
;

YY_STACKTRACE_LINE(3);
if(BOOL_RValue( /* First usage */(global_debug) )) {

YY_STACKTRACE_LINE(3);

YY_STACKTRACE_LINE(4);
FREE_RValue( &__ret1__ );
local_c=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,0,g_FUNC_draw_get_color.val,NULL);
;

YY_STACKTRACE_LINE(5);
YYGML_draw_set_colour((int)(int64)255);
;

YY_STACKTRACE_LINE(6);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_bbox_left.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_bbox_left );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_bbox_top.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_bbox_top );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_bbox_right.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_bbox_right );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_bbox_bottom.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_bbox_bottom );
YYGML_draw_rectangle((float)(float)(/* First usage */sbuiltin_bbox_left.asReal()),(float)(float)(/* First usage */sbuiltin_bbox_top.asReal()),(float)(float)(/* First usage */sbuiltin_bbox_right.asReal()),(float)(float)(/* First usage */sbuiltin_bbox_bottom.asReal()),(bool)YYRValue(1!=0));
;

YY_STACKTRACE_LINE(9);
YYRValue* sself_vx = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vx); /* set ContextID to sself_vx */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_bbox_right.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_bbox_right );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_bbox_left.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_bbox_left );
local_w=(YYGML_sign((double)/* First usage */(*sself_vx).asReal()) * (/* volatile */sbuiltin_bbox_right - /* volatile */sbuiltin_bbox_left));
;

YY_STACKTRACE_LINE(10);
YYRValue* sself_fearofheights = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_fearofheights); /* set ContextID to sself_fearofheights */
local_h=/* First usage */(*sself_fearofheights);
;

YY_STACKTRACE_LINE(12);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_bbox_left.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_bbox_left );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_bbox_top.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_bbox_top );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_bbox_right.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_bbox_right );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_bbox_bottom.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_bbox_bottom );
YYGML_draw_rectangle((float)(/* volatile */sbuiltin_bbox_left + /* local */local_w).asReal(),(float)(/* volatile */sbuiltin_bbox_top + /* local */local_h).asReal(),(float)(/* volatile */sbuiltin_bbox_right + /* local */local_w).asReal(),(float)(/* volatile */sbuiltin_bbox_bottom + /* local */local_h).asReal(),(bool)YYRValue(1!=0));
;

YY_STACKTRACE_LINE(13);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_sprite_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_sprite_index );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_xscale.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_xscale );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_yscale.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_yscale );
YYGML_draw_sprite_ext(pSelf,(int)(int)(int64)((int)(int64)/* volatile */sbuiltin_sprite_index.asReal()),(float)0,(float)(/* volatile */sbuiltin_x + /* local */local_w).asReal(),(float)(/* volatile */sbuiltin_y + /* local */local_h).asReal(),(float)(float)(/* volatile */sbuiltin_image_xscale.asReal()),(float)(float)(/* volatile */sbuiltin_image_yscale.asReal()),(float)0,(int)(int64)16777215,(float)0.5);
;

YY_STACKTRACE_LINE(15);
YYGML_draw_set_colour((int)(int64)/* local */local_c);
;
;
}
;
}
#endif
