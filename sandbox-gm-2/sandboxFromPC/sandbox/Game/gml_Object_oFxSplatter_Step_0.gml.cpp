#include "pch.hpp"
YYRValue& gml_Script_drawWallPuddle( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_image_index;
extern YYVAR g_VAR_image_angle;
extern YYVAR g_VAR_image_alpha;
extern YYVAR g_Script_gml_Object_oFxSplatter_Step_0;
extern YYVAR g_FUNC_power;
extern YYVAR g_FUNC_instance_position;
#ifndef __YYNODEFS
const char g_pString290_25C762BD_s[] = {
0x00,                                                                                                // .
};
const YYRValue g_pString290_25C762BD(g_pString290_25C762BD_s, true);
const char g_pString291_25C762BD_s[] = {
0x6c, 0x65, 0x66, 0x74, 0x00,                                                                        // left.
};
const YYRValue g_pString291_25C762BD(g_pString291_25C762BD_s, true);
const char g_pString292_25C762BD_s[] = {
0x72, 0x69, 0x67, 0x68, 0x74, 0x00,                                                                  // right.
};
const YYRValue g_pString292_25C762BD(g_pString292_25C762BD_s, true);
const char g_pString293_25C762BD_s[] = {
0x74, 0x6f, 0x70, 0x00,                                                                              // top.
};
const YYRValue g_pString293_25C762BD(g_pString293_25C762BD_s, true);
const char g_pString294_25C762BD_s[] = {
0x62, 0x6f, 0x74, 0x74, 0x6f, 0x6d, 0x00,                                                            // bottom.
};
const YYRValue g_pString294_25C762BD(g_pString294_25C762BD_s, true);
DValue gs_constArg0_25C762BD = { 2, 0, VALUE_REAL };
#else
extern const char g_pString290_25C762BD_s[];
extern const YYRValue g_pString290_25C762BD;
extern const char g_pString291_25C762BD_s[];
extern const YYRValue g_pString291_25C762BD;
extern const char g_pString292_25C762BD_s[];
extern const YYRValue g_pString292_25C762BD;
extern const char g_pString293_25C762BD_s[];
extern const YYRValue g_pString293_25C762BD;
extern const char g_pString294_25C762BD_s[];
extern const YYRValue g_pString294_25C762BD;
extern DValue gs_constArg0_25C762BD;
#endif // __YYNODEFS

void gml_Object_oFxSplatter_Step_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oFxSplatter_Step_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oFxSplatter_Step_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[3];
YYRValue __Args__[3];
YYRValue sbuiltin_y;
YYRValue local_tmp;
YYRValue sWbuiltin_x;
YYRValue sWbuiltin_y;
YYRValue sbuiltin_image_index;
YYRValue sWbuiltin_image_angle;
YYRValue sbuiltin_x;
YYRValue sWbuiltin_image_alpha;
YYRValue sbuiltin_image_alpha;
YYRValue local_oh;
YYRValue local_ov;
YYRValue local_pos;
YYRValue __ret1__;


YY_STACKTRACE_LINE(1);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
local_tmp=/* First usage */sbuiltin_y;
;

YY_STACKTRACE_LINE(3);
YYRValue* sself_vsp = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vsp); /* set ContextID to sself_vsp */
YYRValue* sself_grav = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_grav); /* set ContextID to sself_grav */
if((/* First usage */(*sself_vsp) < /* First usage */(*sself_grav))) {

YY_STACKTRACE_LINE(3);
YYRValue* sWself_vsp = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vsp); /* set ContextID to 980 */
/* First usage */(*sWself_vsp)+=0.1;
;
}
;

YY_STACKTRACE_LINE(4);
bool sc289 = false;
YYRValue* sself_hsp = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_hsp); /* set ContextID to sself_hsp */
if ((/* First usage */(*sself_hsp) > -0.2)){
sself_hsp = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_hsp); /* set ContextID to 981 */
sc289 = ((/* context id changed from 95 to 981*/(*sself_hsp) < 0.2));
 };
;
if(sc289) {

YY_STACKTRACE_LINE(4);
FREE_RValue( &__ret1__ );
sself_vsp = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vsp); /* set ContextID to 982 */
YYRValue* sWself_hsp = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_hsp); /* set ContextID to 982 */
__Args__[0] = /* context id changed from 95 to 982*/(*sself_vsp);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg0_25C762BD;
__pArgs__[1] = &__Args__[1];
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_hsp))=YYRValue( -YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_power.val,&__pArgs__[0]).asReal() );
PopContextStack(1);
;
}
;

YY_STACKTRACE_LINE(6);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_x );
/* First usage */sWbuiltin_x+=/* context id changed from 981 to 95*/(*sself_hsp);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_x );
;

YY_STACKTRACE_LINE(7);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_y );
/* First usage */sWbuiltin_y+=/* context id changed from 982 to 95*/(*sself_vsp);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_y );
;

YY_STACKTRACE_LINE(9);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_index.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_index );
if((/* First usage */sbuiltin_image_index > 0)) {

YY_STACKTRACE_LINE(10);
sself_vsp = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vsp); /* set ContextID to 984 */
sself_hsp = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_hsp); /* set ContextID to 984 */
YYRValue* sself_rotsp = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_rotsp); /* set ContextID to sself_rotsp */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_angle.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_angle );
/* First usage */sWbuiltin_image_angle+=/* First usage */(*sself_rotsp);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_angle.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_angle );
;
}
else {

YY_STACKTRACE_LINE(12);
YYRValue* sself_xcenter = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_xcenter); /* set ContextID to sself_xcenter */
YYRValue* sself_ycenter = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_ycenter); /* set ContextID to sself_ycenter */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
sWbuiltin_image_angle=YYGML_point_direction((float)(float)(/* First usage */(*sself_xcenter).asReal()),(float)(float)(/* First usage */(*sself_ycenter).asReal()),(float)(float)(/* First usage */sbuiltin_x.asReal()),(float)(float)(/* volatile */sbuiltin_y.asReal()));
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_angle.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_angle );
;
}
;

YY_STACKTRACE_LINE(14);
YYRValue* sself_fadeaway = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_fadeaway); /* set ContextID to sself_fadeaway */
if(BOOL_RValue( /* First usage */(*sself_fadeaway) )) {

YY_STACKTRACE_LINE(14);

YY_STACKTRACE_LINE(15);
YYRValue* sself_fadespeed = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_fadespeed); /* set ContextID to sself_fadespeed */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_alpha );
/* First usage */sWbuiltin_image_alpha-=/* First usage */(*sself_fadespeed);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_image_alpha );
;

YY_STACKTRACE_LINE(16);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_alpha );
if((/* First usage */sbuiltin_image_alpha <= 0)) {

YY_STACKTRACE_LINE(16);
YYGML_instance_destroy(pSelf,pOther,0,NULL);
;
}
;
;
}
;

YY_STACKTRACE_LINE(23);
FREE_RValue( &__ret1__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = (/* volatile */sbuiltin_x + /* context id changed from 984 to 95*/(*sself_hsp));
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* volatile */sbuiltin_y;
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYASSET_REF(0x00000019);
__pArgs__[2] = &__Args__[2];
local_oh=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_instance_position.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(24);
FREE_RValue( &__ret1__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = /* volatile */sbuiltin_x;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* volatile */sbuiltin_y + /* context id changed from 984 to 95*/(*sself_vsp));
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYASSET_REF(0x00000019);
__pArgs__[2] = &__Args__[2];
local_ov=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_instance_position.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(26);
if((/* local */local_oh.asBool() ^ /* local */local_ov.asBool())) {

YY_STACKTRACE_LINE(26);

YY_STACKTRACE_LINE(27);
sself_vsp = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vsp); /* set ContextID to 988 */
sself_hsp = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_hsp); /* set ContextID to 988 */
local_pos=g_pString290_25C762BD;
;

YY_STACKTRACE_LINE(28);
if(BOOL_RValue( /* local */local_oh )) {

YY_STACKTRACE_LINE(28);

YY_STACKTRACE_LINE(29);
sself_hsp = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_hsp); /* set ContextID to 989 */
if((/* context id changed from 988 to 989*/(*sself_hsp) > 0)) {

YY_STACKTRACE_LINE(29);
local_pos=g_pString291_25C762BD;
;
}
else {

YY_STACKTRACE_LINE(30);
local_pos=g_pString292_25C762BD;
;
}
;

YY_STACKTRACE_LINE(31);
FREE_RValue( &__ret1__ );
YYRValue* sself_color = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_color); /* set ContextID to sself_color */
__pArgs__[0] = &/* local */local_oh;
__pArgs__[1] = &/* local */local_pos;
__Args__[2] = /* First usage */(*sself_color);
__pArgs__[2] = &__Args__[2];
gml_Script_drawWallPuddle(pSelf,pOther,__ret1__,3,&__pArgs__[0]);
;
;
}
else {

YY_STACKTRACE_LINE(32);

YY_STACKTRACE_LINE(33);
sself_vsp = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vsp); /* set ContextID to 992 */
if((/* context id changed from 988 to 992*/(*sself_vsp) > 0)) {

YY_STACKTRACE_LINE(33);
local_pos=g_pString293_25C762BD;
;
}
else {

YY_STACKTRACE_LINE(34);
local_pos=g_pString294_25C762BD;
;
}
;

YY_STACKTRACE_LINE(35);
FREE_RValue( &__ret1__ );
YYRValue* sself_color = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_color); /* set ContextID to sself_color */
__pArgs__[0] = &/* local */local_ov;
__pArgs__[1] = &/* local */local_pos;
__Args__[2] = /* context id changed from 989 to 992*/(*sself_color);
__pArgs__[2] = &__Args__[2];
gml_Script_drawWallPuddle(pSelf,pOther,__ret1__,3,&__pArgs__[0]);
;
;
}
;
;
}
;

YY_STACKTRACE_LINE(42);
bool sc295 = false;
if (/* local */local_oh.asBool()) { sc295=true; } else 
{
sc295 = (/* local */local_ov.asBool());
 };
;
if(sc295) {

YY_STACKTRACE_LINE(42);
YYGML_instance_destroy(pSelf,pOther,0,NULL);
;
}
;
}
#endif
