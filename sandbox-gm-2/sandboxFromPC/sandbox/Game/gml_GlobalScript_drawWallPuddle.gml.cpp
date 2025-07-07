#include "pch.hpp"
YYRValue& gml_Script_fxDust( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
YYRValue& gml_Script_instance_create( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_object_index;
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_bbox_top;
extern YYVAR g_VAR_bbox_bottom;
extern YYVAR g_VAR_bbox_right;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_bbox_left;
extern YYVAR g_VAR_depth;
extern YYVAR self_we;
extern YYVAR g_VAR_image_angle;
extern YYVAR g_VAR_image_blend;
extern YYVAR self_posi;
extern YYVAR g_VAR_alarm;
extern YYVAR g_Script_gml_Script_drawWallPuddle;
extern YYVAR g_Script_gml_GlobalScript_drawWallPuddle;
#ifndef __YYNODEFS
const char g_pString113_4C7D45F0_s[] = {
0x74, 0x6f, 0x70, 0x00,                                                                              // top.
};
const YYRValue g_pString113_4C7D45F0(g_pString113_4C7D45F0_s, true);
const char g_pString114_4C7D45F0_s[] = {
0x62, 0x6f, 0x74, 0x74, 0x6f, 0x6d, 0x00,                                                            // bottom.
};
const YYRValue g_pString114_4C7D45F0(g_pString114_4C7D45F0_s, true);
const char g_pString115_4C7D45F0_s[] = {
0x72, 0x69, 0x67, 0x68, 0x74, 0x00,                                                                  // right.
};
const YYRValue g_pString115_4C7D45F0(g_pString115_4C7D45F0_s, true);
DValue gs_constArg0_4C7D45F0 = { 4, 0, VALUE_REAL };
DValue gs_constArg1_4C7D45F0 = { 8, 0, VALUE_REAL };
#else
extern const char g_pString113_4C7D45F0_s[];
extern const YYRValue g_pString113_4C7D45F0;
extern const char g_pString114_4C7D45F0_s[];
extern const YYRValue g_pString114_4C7D45F0;
extern const char g_pString115_4C7D45F0_s[];
extern const YYRValue g_pString115_4C7D45F0;
extern DValue gs_constArg0_4C7D45F0;
extern DValue gs_constArg1_4C7D45F0;
#endif // __YYNODEFS

YYRValue& gml_Script_drawWallPuddle( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_drawWallPuddle( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_drawWallPuddle", 0 );
YY_STACKTRACE_LINE(5);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[6];
YYRValue __Args__[6];
YYRValue local_obj;
YYRValue local_position;
YYRValue local_color;
YYRValue oobj12774E57E_object_index;
YYRValue local_angle;
YYRValue oobj12774E57E_x;
YYRValue local_xpos;
YYRValue oobj12774E57E_bbox_top;
YYRValue local_ypos;
YYRValue oobj12774E57E_bbox_bottom;
YYRValue oobj12774E57E_bbox_right;
YYRValue oobj12774E57E_y;
YYRValue oobj12774E57E_bbox_left;
YYRValue local_puddle;
YYRValue sbuiltin_depth;
YYRValue opuddle15C28238B_depth;
YYRValue oWpuddle15C28238B_depth;
YYRValue o0ECB8E193_weapon;
YYRValue oW_weapon0A8E9C8E3_depth;
YYRValue oWpuddle15C28238B_image_angle;
YYRValue oWpuddle15C28238B_image_blend;
YYRValue oWpuddle15C28238B_position;
YYRValue oWpuddle11E8948C0_alarm;
YYRValue __ret1__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(6);
local_obj=(*YY_GET_ARG(_args, (int)(0), _count));
;

YY_STACKTRACE_LINE(7);
local_position=(*YY_GET_ARG(_args, (int)(1), _count));
;

YY_STACKTRACE_LINE(8);
local_color=(*YY_GET_ARG(_args, (int)(2), _count));
;

YY_STACKTRACE_LINE(12);
YYGML_ErrCheck_Variable_GetValue( /* local */local_obj, g_VAR_object_index.val, (int)ARRAY_INDEX_NO_INDEX, &oobj12774E57E_object_index, pSelf, pOther );
if((/* First usage */oobj12774E57E_object_index == YYASSET_REF(0x00000001))) {

YY_STACKTRACE_LINE(12);

YY_STACKTRACE_LINE(14);
;

YY_STACKTRACE_LINE(15);
;

YY_STACKTRACE_LINE(16);
local_angle=0;
;

YY_STACKTRACE_LINE(17);
if((/* local */local_position == YYRValue(g_pString113_4C7D45F0))) {

YY_STACKTRACE_LINE(17);

YY_STACKTRACE_LINE(18);
YYGML_ErrCheck_Variable_GetValue( /* local */local_obj, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &oobj12774E57E_x, pSelf, pOther );
local_xpos=/* First usage */oobj12774E57E_x;
;

YY_STACKTRACE_LINE(19);
YYGML_ErrCheck_Variable_GetValue( /* local */local_obj, g_VAR_bbox_top.val, (int)ARRAY_INDEX_NO_INDEX, &oobj12774E57E_bbox_top, pSelf, pOther );
local_ypos=/* First usage */oobj12774E57E_bbox_top;
;

YY_STACKTRACE_LINE(20);
local_angle=-90;
;
;
}
else {

YY_STACKTRACE_LINE(21);
if((/* local */local_position == YYRValue(g_pString114_4C7D45F0))) {

YY_STACKTRACE_LINE(21);

YY_STACKTRACE_LINE(22);
YYGML_ErrCheck_Variable_GetValue( /* local */local_obj, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &oobj12774E57E_x, pSelf, pOther );
local_xpos=/* volatile */oobj12774E57E_x;
;

YY_STACKTRACE_LINE(23);
YYGML_ErrCheck_Variable_GetValue( /* local */local_obj, g_VAR_bbox_bottom.val, (int)ARRAY_INDEX_NO_INDEX, &oobj12774E57E_bbox_bottom, pSelf, pOther );
local_ypos=/* First usage */oobj12774E57E_bbox_bottom;
;

YY_STACKTRACE_LINE(24);
local_angle=90;
;
;
}
else {

YY_STACKTRACE_LINE(25);
if((/* local */local_position == YYRValue(g_pString115_4C7D45F0))) {

YY_STACKTRACE_LINE(25);

YY_STACKTRACE_LINE(26);
YYGML_ErrCheck_Variable_GetValue( /* local */local_obj, g_VAR_bbox_right.val, (int)ARRAY_INDEX_NO_INDEX, &oobj12774E57E_bbox_right, pSelf, pOther );
local_xpos=/* First usage */oobj12774E57E_bbox_right;
;

YY_STACKTRACE_LINE(27);
YYGML_ErrCheck_Variable_GetValue( /* local */local_obj, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &oobj12774E57E_y, pSelf, pOther );
local_ypos=/* First usage */oobj12774E57E_y;
;

YY_STACKTRACE_LINE(28);
local_angle=180;
;
;
}
else {

YY_STACKTRACE_LINE(29);

YY_STACKTRACE_LINE(30);
YYGML_ErrCheck_Variable_GetValue( /* local */local_obj, g_VAR_bbox_left.val, (int)ARRAY_INDEX_NO_INDEX, &oobj12774E57E_bbox_left, pSelf, pOther );
local_xpos=/* First usage */oobj12774E57E_bbox_left;
;

YY_STACKTRACE_LINE(31);
YYGML_ErrCheck_Variable_GetValue( /* local */local_obj, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &oobj12774E57E_y, pSelf, pOther );
local_ypos=/* context id changed from 651 to 654*/oobj12774E57E_y;
;
;
}
;
}
;
}
;

YY_STACKTRACE_LINE(40);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local_xpos;
__pArgs__[1] = &/* local */local_ypos;
__Args__[2] = (YYRValue*)&gs_constArg0_4C7D45F0;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg0_4C7D45F0;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (YYRValue*)&gs_constArg1_4C7D45F0;
__pArgs__[4] = &__Args__[4];
__pArgs__[5] = &/* local */local_color;
gml_Script_fxDust(pSelf,pOther,__ret1__,6,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(42);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local_xpos;
__pArgs__[1] = &/* local */local_ypos;
__Args__[2] = YYASSET_REF(0x0000000A);
__pArgs__[2] = &__Args__[2];
local_puddle=gml_Script_instance_create(pSelf,pOther,__ret1__,3,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(43);
SWithIterator ___wi117___;
int ___wc118___ = YYGML_NewWithIterator( &___wi117___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther, YYASSET_REF(0x0000000A));
if (___wc118___ > 0 ) {
do {

YY_STACKTRACE_LINE(43);

YY_STACKTRACE_LINE(44);
FREE_RValue( &__ret1__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_depth.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_depth );
YYGML_ErrCheck_Variable_GetValue( /* local */local_puddle, g_VAR_depth.val, (int)ARRAY_INDEX_NO_INDEX, &opuddle15C28238B_depth, pSelf, pOther );
__Args__[0] = /* First usage */sbuiltin_depth;
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* First usage */opuddle15C28238B_depth;
__pArgs__[1] = &__Args__[1];
oWpuddle15C28238B_depth=YYGML_min(__ret1__,2,&__pArgs__[0]);
Variable_SetValue( /* local */local_puddle, g_VAR_depth.val, (int)ARRAY_INDEX_NO_INDEX, &oWpuddle15C28238B_depth );
;
;
} while(YYGML_WithIteratorNext( &___wi117___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther));
}
YYGML_DeleteWithIterator( &___wi117___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther);
;

YY_STACKTRACE_LINE(46);
YYGML_ErrCheck_Variable_GetValue( /* local */local_puddle, g_VAR_depth.val, (int)ARRAY_INDEX_NO_INDEX, &oWpuddle15C28238B_depth, pSelf, pOther );
--/* context id changed from 657 to 642*/oWpuddle15C28238B_depth;
Variable_SetValue( /* local */local_puddle, g_VAR_depth.val, (int)ARRAY_INDEX_NO_INDEX, &oWpuddle15C28238B_depth );
;

YY_STACKTRACE_LINE(47);
YYGML_Variable_GetValue( YYASSET_REF(0x0000000E), kVARID_self_weapon, (int)ARRAY_INDEX_NO_INDEX, &o0ECB8E193_weapon );
if((/* First usage */o0ECB8E193_weapon != -4)) {

YY_STACKTRACE_LINE(47);
YYGML_ErrCheck_Variable_GetValue( /* local */local_puddle, g_VAR_depth.val, (int)ARRAY_INDEX_NO_INDEX, &opuddle15C28238B_depth, pSelf, pOther );
oW_weapon0A8E9C8E3_depth=(/* context id changed from 657 to 662*/opuddle15C28238B_depth - 1);
YYGML_Variable_GetValue( YYASSET_REF(0x0000000E), kVARID_self_weapon, (int)ARRAY_INDEX_NO_INDEX, &o0ECB8E193_weapon );
Variable_SetValue( /* context id changed from 642 to 664*/o0ECB8E193_weapon, g_VAR_depth.val, (int)ARRAY_INDEX_NO_INDEX, &oW_weapon0A8E9C8E3_depth );
;
}
;

YY_STACKTRACE_LINE(49);
oWpuddle15C28238B_image_angle=/* local */local_angle;
Variable_SetValue( /* local */local_puddle, g_VAR_image_angle.val, (int)ARRAY_INDEX_NO_INDEX, &oWpuddle15C28238B_image_angle );
;

YY_STACKTRACE_LINE(50);
oWpuddle15C28238B_image_blend=/* local */local_color;
Variable_SetValue( /* local */local_puddle, g_VAR_image_blend.val, (int)ARRAY_INDEX_NO_INDEX, &oWpuddle15C28238B_image_blend );
;

YY_STACKTRACE_LINE(51);
oWpuddle15C28238B_position=/* local */local_position;
YYGML_Variable_SetValue( /* local */local_puddle, kVARID_self_position, (int)ARRAY_INDEX_NO_INDEX, &oWpuddle15C28238B_position );
;

YY_STACKTRACE_LINE(52);
oWpuddle11E8948C0_alarm=10;
Variable_SetValue( /* local */local_puddle, g_VAR_alarm.val, (int)0, &oWpuddle11E8948C0_alarm );
;
;
}
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_drawWallPuddle( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_drawWallPuddle( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_drawWallPuddle", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(5);
YYRValue* sWself_drawWallPuddle_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_drawWallPuddle); /* set ContextID to 22 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_drawWallPuddle_4ABE50B2)) = (YYRValue(gml_Script_drawWallPuddle, pSelf)), PopContextStack();
;
return _result;
}
#endif
