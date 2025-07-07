#include "pch.hpp"
extern YYVAR g_VAR_image_alpha;
extern YYVAR g_VAR_sprite_index;
extern YYVAR g_VAR_image_index;
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_Script_gml_Object_oParEnemy_Draw_0;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_oParEnemy_Draw_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oParEnemy_Draw_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oParEnemy_Draw_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue local_color;
YYRValue sbuiltin_image_alpha;
YYRValue sWbuiltin_image_alpha;
YYRValue sbuiltin_sprite_index;
YYRValue sbuiltin_image_index;
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;


YY_STACKTRACE_LINE(3);
local_color=16777215;
;

YY_STACKTRACE_LINE(4);
YYRValue* sself_invincible = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_invincible); /* set ContextID to sself_invincible */
if(BOOL_RValue( /* First usage */(*sself_invincible) )) {

YY_STACKTRACE_LINE(4);

YY_STACKTRACE_LINE(5);
local_color=255;
;

YY_STACKTRACE_LINE(6);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_alpha );
if((/* First usage */sbuiltin_image_alpha > 1)) {

YY_STACKTRACE_LINE(6);
YYRValue* sWself_blinkmultiplier = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_blinkmultiplier); /* set ContextID to 1082 */
(*sWself_blinkmultiplier)=-1;
;
}
else {

YY_STACKTRACE_LINE(7);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_alpha );
if((/* volatile */sbuiltin_image_alpha < 0.5)) {

YY_STACKTRACE_LINE(7);
YYRValue* sWself_blinkmultiplier = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_blinkmultiplier); /* set ContextID to 1084 */
(*sWself_blinkmultiplier)=1;
;
}
;
}
;

YY_STACKTRACE_LINE(8);
YYRValue* sself_blinkmultiplier = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_blinkmultiplier); /* set ContextID to sself_blinkmultiplier */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_alpha );
/* First usage */sWbuiltin_image_alpha+=(/* First usage */(*sself_blinkmultiplier) * 0.05);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_alpha );
;
;
}
else {

YY_STACKTRACE_LINE(10);

YY_STACKTRACE_LINE(11);
sWbuiltin_image_alpha=1;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_alpha );
;
;
}
;

YY_STACKTRACE_LINE(15);
YYRValue* sself_facing = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_facing); /* set ContextID to sself_facing */
YYRValue* sself_xscale = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xscale); /* set ContextID to sself_xscale */
YYRValue* sself_yscale = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_yscale); /* set ContextID to sself_yscale */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_sprite_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_sprite_index );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_index );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_alpha );
YYGML_draw_sprite_ext(pSelf,(int)(int)(int64)((int)(int64)/* First usage */sbuiltin_sprite_index.asReal()),(float)(float)(/* First usage */sbuiltin_image_index.asReal()),(float)(float)(/* First usage */sbuiltin_x.asReal()),(float)(float)(/* First usage */sbuiltin_y.asReal()),(float)(/* First usage */(*sself_facing) * /* First usage */(*sself_xscale)).asReal(),(float)(float)(/* First usage */(*sself_yscale).asReal()),(float)0,(int)(int64)/* local */local_color,(float)(float)(/* volatile */sbuiltin_image_alpha.asReal()));
;
}
#endif
