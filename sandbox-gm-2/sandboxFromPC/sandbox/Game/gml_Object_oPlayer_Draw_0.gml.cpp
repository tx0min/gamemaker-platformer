#include "pch.hpp"
extern YYVAR g_VAR_image_speed;
extern YYVAR g_VAR_sprite_index;
extern YYVAR g_VAR_image_alpha;
extern YYVAR g_VAR_image_index;
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_Script_gml_Object_oPlayer_Draw_0;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

void gml_Object_oPlayer_Draw_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oPlayer_Draw_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oPlayer_Draw_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue sWbuiltin_image_speed;
YYRValue sWbuiltin_sprite_index;
YYRValue local_color;
YYRValue sbuiltin_image_alpha;
YYRValue sWbuiltin_image_alpha;
YYRValue sbuiltin_sprite_index;
YYRValue sbuiltin_image_index;
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;


YY_STACKTRACE_LINE(4);
YYRValue* sself_state = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_state); /* set ContextID to sself_state */
YYRValue ___sw400___ = (/* First usage */(*sself_state));
YYRValue* sself_IDLE = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_IDLE); /* set ContextID to sself_IDLE */
YYRValue* sself_RUN = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_RUN); /* set ContextID to sself_RUN */
YYRValue* sself_JUMP = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_JUMP); /* set ContextID to sself_JUMP */
int ___swc401___ = -1;
SYYCaseEntry ___swcase402___[] = {
{ YYRValue(/* First usage */(*sself_IDLE)), 0},
{ YYRValue(/* First usage */(*sself_RUN)), 1},
{ YYRValue(/* First usage */(*sself_JUMP)), 2},
};
for( int ___swcount403___=0; ___swcount403___<sizeof(___swcase402___)/sizeof(___swcase402___[0]); ++___swcount403___) {
	if (___swcase402___[___swcount403___].entry == ___sw400___) {
		___swc401___ = ___swcase402___[___swcount403___].value;
		break;
	}
}
switch( ___swc401___ ) {
case 0: {

YY_STACKTRACE_LINE(6);
sWbuiltin_image_speed=1;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_speed.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_speed );
;

YY_STACKTRACE_LINE(7);
sWbuiltin_sprite_index=YYASSET_REF(0x0100000E);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_sprite_index.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_sprite_index );
;

YY_STACKTRACE_LINE(8);
break;
;
}
case 1: {

YY_STACKTRACE_LINE(11);
sWbuiltin_image_speed=1;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_speed.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_speed );
;

YY_STACKTRACE_LINE(12);
sWbuiltin_sprite_index=YYASSET_REF(0x01000014);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_sprite_index.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_sprite_index );
;

YY_STACKTRACE_LINE(13);
break;
;
}
case 2: {

YY_STACKTRACE_LINE(17);
YYRValue* sself_vy = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vy); /* set ContextID to sself_vy */
if((/* First usage */(*sself_vy) > 0)) {

YY_STACKTRACE_LINE(17);
sWbuiltin_sprite_index=YYASSET_REF(0x01000011);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_sprite_index.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_sprite_index );
;
}
else {

YY_STACKTRACE_LINE(18);
sWbuiltin_sprite_index=YYASSET_REF(0x01000011);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_sprite_index.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_sprite_index );
;
}
;

YY_STACKTRACE_LINE(20);
bool sc404 = false;
YYRValue* sself_cRight = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_cRight); /* set ContextID to sself_cRight */
if (/* First usage */(*sself_cRight).asBool()) { sc404=true; } else 
{
YYRValue* sself_cLeft = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_cLeft); /* set ContextID to sself_cLeft */
sc404 = (/* First usage */(*sself_cLeft).asBool());
 };
;
if(sc404) {

YY_STACKTRACE_LINE(21);
sWbuiltin_sprite_index=YYASSET_REF(0x01000011);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_sprite_index.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_sprite_index );
;
}
;

YY_STACKTRACE_LINE(22);
break;
;
}
}
;

YY_STACKTRACE_LINE(28);
sWbuiltin_image_speed=1;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_speed.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_speed );
;

YY_STACKTRACE_LINE(31);
local_color=16777215;
;

YY_STACKTRACE_LINE(32);
YYRValue* sself_invincible = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_invincible); /* set ContextID to sself_invincible */
if(BOOL_RValue( /* First usage */(*sself_invincible) )) {

YY_STACKTRACE_LINE(32);

YY_STACKTRACE_LINE(33);
local_color=255;
;

YY_STACKTRACE_LINE(36);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_alpha );
if((/* First usage */sbuiltin_image_alpha > 1)) {

YY_STACKTRACE_LINE(36);
YYRValue* sWself_blinkmultiplier = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_blinkmultiplier); /* set ContextID to 1214 */
(*sWself_blinkmultiplier)=-1;
;
}
else {

YY_STACKTRACE_LINE(37);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_alpha );
if((/* volatile */sbuiltin_image_alpha < 0.5)) {

YY_STACKTRACE_LINE(37);
YYRValue* sWself_blinkmultiplier = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_blinkmultiplier); /* set ContextID to 1216 */
(*sWself_blinkmultiplier)=1;
;
}
;
}
;

YY_STACKTRACE_LINE(40);
YYRValue* sself_blinkmultiplier = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_blinkmultiplier); /* set ContextID to sself_blinkmultiplier */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_alpha );
/* First usage */sWbuiltin_image_alpha+=(/* First usage */(*sself_blinkmultiplier) * 0.05);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_alpha );
;
;
}
else {

YY_STACKTRACE_LINE(42);

YY_STACKTRACE_LINE(43);
sWbuiltin_image_alpha=1;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_alpha );
;
;
}
;

YY_STACKTRACE_LINE(47);
YYRValue* sself_onGround = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_onGround); /* set ContextID to sself_onGround */
if(BOOL_RValue( /* First usage */(*sself_onGround) )) {

YY_STACKTRACE_LINE(48);
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
else {

YY_STACKTRACE_LINE(50);
YYRValue* sself_facing = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_facing); /* set ContextID to sself_facing */
YYRValue* sself_xscale = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xscale); /* set ContextID to sself_xscale */
YYRValue* sself_yscale = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_yscale); /* set ContextID to sself_yscale */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_sprite_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_sprite_index );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_index );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_alpha );
YYGML_draw_sprite_ext(pSelf,(int)(int)(int64)((int)(int64)/* volatile */sbuiltin_sprite_index.asReal()),(float)(float)(/* volatile */sbuiltin_image_index.asReal()),(float)(float)(/* volatile */sbuiltin_x.asReal()),(float)(float)(/* volatile */sbuiltin_y.asReal()),(float)(/* context id changed from 1218 to 1219*/(*sself_facing) * /* context id changed from 1218 to 1219*/(*sself_xscale)).asReal(),(float)(float)(/* context id changed from 1218 to 1219*/(*sself_yscale).asReal()),(float)0,(int)(int64)/* local */local_color,(float)(float)(/* volatile */sbuiltin_image_alpha.asReal()));
;
}
;
}
#endif
