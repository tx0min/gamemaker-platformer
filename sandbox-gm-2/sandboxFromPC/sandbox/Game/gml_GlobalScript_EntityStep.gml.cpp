#include "pch.hpp"
YYRValue& gml_Script_PlatformCheck( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_bbox_right;
extern YYVAR g_VAR_bbox_left;
extern YYVAR g_VAR_room_width;
extern YYVAR g_Script_gml_Script_EntityStep;
extern YYVAR g_Script_gml_GlobalScript_EntityStep;
extern YYVAR g_FUNC_place_meeting;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

YYRValue& gml_Script_EntityStep( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_EntityStep( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_EntityStep", 0 );
YY_STACKTRACE_LINE(2);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[6];
YYRValue __Args__[6];
YYRValue sWbuiltin_y;
YYRValue local_i;
YYRValue sbuiltin_x;
YYRValue sbuiltin_y;
YYRValue sbuiltin_bbox_right;
YYRValue sbuiltin_bbox_left;
YYRValue local_w;
YYRValue local_h;
YYRValue global_builtin_room_width;
YYRValue sWbuiltin_x;
YYRValue __ret1__(0);
YYRValue __ret2__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(4);
YYRValue* sWself_jumped = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_jumped); /* set ContextID to 695 */
(*sWself_jumped)=YYRValue(0!=0);
;

YY_STACKTRACE_LINE(5);
YYRValue* sWself_landed = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_landed); /* set ContextID to 695 */
(*sWself_landed)=YYRValue(0!=0);
;

YY_STACKTRACE_LINE(7);
bool sc128 = false;
YYRValue* sself_vy = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vy); /* set ContextID to sself_vy */
if ((/* First usage */(*sself_vy) < 1)){
sself_vy = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vy); /* set ContextID to 696 */
sc128 = ((/* context id changed from 695 to 696*/(*sself_vy) > -1));
 };
;
if(sc128) {

YY_STACKTRACE_LINE(8);
FREE_RValue( &__ret1__ );
gml_Script_PlatformCheck(pSelf,pOther,__ret1__,0,NULL);
;
}
else {

YY_STACKTRACE_LINE(10);
sself_vy = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vy); /* set ContextID to 698 */
int __rep129__ = YYGML_abs((double)/* context id changed from 696 to 698*/(*sself_vy).asReal());
while( __rep129__-- > 0 ) {

YY_STACKTRACE_LINE(10);

YY_STACKTRACE_LINE(11);
FREE_RValue( &__ret1__ );
if(!((BOOL_RValue( gml_Script_PlatformCheck(pSelf,pOther,__ret1__,0,NULL) )))) {

YY_STACKTRACE_LINE(12);
sself_vy = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vy); /* set ContextID to 700 */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_y );
/* First usage */sWbuiltin_y+=YYGML_sign((double)/* context id changed from 698 to 700*/(*sself_vy).asReal());
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_y );
;
}
else {

YY_STACKTRACE_LINE(14);
break;
;
}
;
;
}
;
}
;

YY_STACKTRACE_LINE(17);
YYRValue* sself_platformTarget = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_platformTarget); /* set ContextID to sself_platformTarget */
if(BOOL_RValue( /* First usage */(*sself_platformTarget) )) {

YY_STACKTRACE_LINE(17);

YY_STACKTRACE_LINE(18);
YYRValue* sself_onGround = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_onGround); /* set ContextID to sself_onGround */
if(!((BOOL_RValue( /* First usage */(*sself_onGround) )))) {

YY_STACKTRACE_LINE(19);
sWself_landed = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_landed); /* set ContextID to 703 */
(*sWself_landed)=YYRValue(1!=0);
;
}
;

YY_STACKTRACE_LINE(21);
YYRValue* sself_landed = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_landed); /* set ContextID to sself_landed */
if(BOOL_RValue( /* First usage */(*sself_landed) )) {

YY_STACKTRACE_LINE(22);
sself_platformTarget = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_platformTarget); /* set ContextID to 704 */
// considering sself_onGround with OriginalContextID 702 VarTracking_ContextIDIsValid True
// considering sself_landed with OriginalContextID 702 VarTracking_ContextIDIsValid True
// considering sWself_jumped with OriginalContextID 695 VarTracking_ContextIDIsValid True
// considering sWself_landed with OriginalContextID 695 VarTracking_ContextIDIsValid True
// considering sself_vy with OriginalContextID 695 VarTracking_ContextIDIsValid True
// considering sself_platformTarget with OriginalContextID 695 VarTracking_ContextIDIsValid True
SWithIterator ___wi131___;
int ___wc132___ = YYGML_NewWithIterator( &___wi131___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther, /* context id changed from 695 to 704*/(*sself_platformTarget));
if (___wc132___ > 0 ) {
do {

YY_STACKTRACE_LINE(22);
YYRValue* oWself_vy = &((CInstanceBase*)pOther)->GetYYVarRefL(kVARID_self_vy); /* set ContextID to 705 */
(*oWself_vy)=0;
;
} while(YYGML_WithIteratorNext( &___wi131___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther));
}
YYGML_DeleteWithIterator( &___wi131___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther);
;
}
else {

YY_STACKTRACE_LINE(24);
sself_platformTarget = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_platformTarget); /* set ContextID to 706 */
// considering sself_onGround with OriginalContextID 702 VarTracking_ContextIDIsValid True
// considering sself_landed with OriginalContextID 702 VarTracking_ContextIDIsValid True
// considering sWself_jumped with OriginalContextID 695 VarTracking_ContextIDIsValid True
// considering sWself_landed with OriginalContextID 695 VarTracking_ContextIDIsValid True
// considering sself_vy with OriginalContextID 695 VarTracking_ContextIDIsValid True
// considering sself_platformTarget with OriginalContextID 695 VarTracking_ContextIDIsValid True
SWithIterator ___wi134___;
int ___wc135___ = YYGML_NewWithIterator( &___wi134___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther, /* context id changed from 704 to 706*/(*sself_platformTarget));
if (___wc135___ > 0 ) {
do {

YY_STACKTRACE_LINE(24);
YYRValue* oWself_vy = &((CInstanceBase*)pOther)->GetYYVarRefL(kVARID_self_vy); /* set ContextID to 707 */
(*oWself_vy)=0;
;
} while(YYGML_WithIteratorNext( &___wi134___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther));
}
YYGML_DeleteWithIterator( &___wi134___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther);
;
}
;
;
}
;

YY_STACKTRACE_LINE(30);
YYRValue* sself_vx = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vx); /* set ContextID to sself_vx */
int __rep136__ = YYGML_abs((double)/* First usage */(*sself_vx).asReal());
while( __rep136__-- > 0 ) {

YY_STACKTRACE_LINE(30);

YY_STACKTRACE_LINE(32);

YY_STACKTRACE_LINE(32);
local_i=0;
;
bool ___f137___ = true;
while( true ) {
if (!___f137___) {

YY_STACKTRACE_LINE(32);
++/* local */local_i;
;
}
___f137___ = false;
YYRValue* sself_canclimb = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_canclimb); /* set ContextID to sself_canclimb */
bool ___b138___ = ((/* local */local_i < /* First usage */(*sself_canclimb)));
if (!___b138___) break;
{

YY_STACKTRACE_LINE(32);

YY_STACKTRACE_LINE(33);
bool sc139 = false;
FREE_RValue( &__ret1__ );
sself_vx = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vx); /* set ContextID to 711 */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = (/* First usage */sbuiltin_x + YYGML_sign((double)/* context id changed from 695 to 711*/(*sself_vx).asReal()));
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* First usage */sbuiltin_y;
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYASSET_REF(0x00000019);
__pArgs__[2] = &__Args__[2];
if ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0])){
FREE_RValue( &__ret2__ );
sself_vx = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vx); /* set ContextID to 712 */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[3] = (/* volatile */sbuiltin_x + YYGML_sign((double)/* context id changed from 711 to 712*/(*sself_vx).asReal()));
__pArgs__[3] = &__Args__[3];
__Args__[4] = (/* volatile */sbuiltin_y - (/* local */local_i + 1));
__pArgs__[4] = &__Args__[4];
__Args__[5] = YYASSET_REF(0x00000019);
__pArgs__[5] = &__Args__[5];
sc139 = (!((BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,3,g_FUNC_place_meeting.val,&__pArgs__[3]) ))));
 };
;
if(sc139) {

YY_STACKTRACE_LINE(33);

YY_STACKTRACE_LINE(34);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_y );
/* volatile */sWbuiltin_y-=(/* local */local_i + 1);
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_y );
;

YY_STACKTRACE_LINE(35);
break;
;
;
}
;
;
}
}
;

YY_STACKTRACE_LINE(41);
bool sc140 = false;
YYRValue* sself_onGround = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_onGround); /* set ContextID to sself_onGround */
if (/* context id changed from 702 to 708*/(*sself_onGround).asBool()){
YYRValue* sself_fearofheights = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_fearofheights); /* set ContextID to sself_fearofheights */
sc140 = ((/* First usage */(*sself_fearofheights) > 0));
 };
;
if(sc140) {

YY_STACKTRACE_LINE(41);

YY_STACKTRACE_LINE(42);
sself_vx = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vx); /* set ContextID to 715 */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_bbox_right.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_bbox_right );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_bbox_left.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_bbox_left );
local_w=(YYGML_sign((double)/* context id changed from 712 to 715*/(*sself_vx).asReal()) * (/* First usage */sbuiltin_bbox_right - /* First usage */sbuiltin_bbox_left));
;

YY_STACKTRACE_LINE(43);
YYRValue* sself_fearofheights = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_fearofheights); /* set ContextID to sself_fearofheights */
local_h=/* context id changed from 714 to 715*/(*sself_fearofheights);
;

YY_STACKTRACE_LINE(45);
bool sc141 = false;
FREE_RValue( &__ret1__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = (/* volatile */sbuiltin_x + /* local */local_w);
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* volatile */sbuiltin_y + /* local */local_h);
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYASSET_REF(0x00000019);
__pArgs__[2] = &__Args__[2];
if (!((BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0]) )))){
FREE_RValue( &__ret2__ );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[3] = (/* volatile */sbuiltin_x + /* local */local_w);
__pArgs__[3] = &__Args__[3];
__Args__[4] = (/* volatile */sbuiltin_y + /* local */local_h);
__pArgs__[4] = &__Args__[4];
__Args__[5] = YYASSET_REF(0x00000017);
__pArgs__[5] = &__Args__[5];
sc141 = (!((BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,3,g_FUNC_place_meeting.val,&__pArgs__[3]) ))));
 };
;
if(sc141) {

YY_STACKTRACE_LINE(45);

YY_STACKTRACE_LINE(46);
YYRValue* sWself_vx = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vx); /* set ContextID to 717 */
(*sWself_vx)=0;
;
;
}
;
;
}
;

YY_STACKTRACE_LINE(52);
bool sc142 = false;
FREE_RValue( &__ret1__ );
sself_vx = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vx); /* set ContextID to 708 */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = (/* volatile */sbuiltin_x + YYGML_sign((double)/* context id changed from 715 to 708*/(*sself_vx).asReal()));
__pArgs__[0] = &__Args__[0];
__Args__[1] = (/* volatile */sbuiltin_y + 2);
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYASSET_REF(0x00000019);
__pArgs__[2] = &__Args__[2];
if ((bool)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0])){
FREE_RValue( &__ret2__ );
sself_vx = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vx); /* set ContextID to 718 */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[3] = (/* volatile */sbuiltin_x + YYGML_sign((double)/* context id changed from 708 to 718*/(*sself_vx).asReal()));
__pArgs__[3] = &__Args__[3];
__Args__[4] = (/* volatile */sbuiltin_y + 1);
__pArgs__[4] = &__Args__[4];
__Args__[5] = YYASSET_REF(0x00000019);
__pArgs__[5] = &__Args__[5];
sc142 = (!((BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,3,g_FUNC_place_meeting.val,&__pArgs__[3]) ))));
 };
;
if(sc142) {

YY_STACKTRACE_LINE(53);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_y );
/* volatile */sWbuiltin_y+=1;
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_y );
;
}
;

YY_STACKTRACE_LINE(58);
FREE_RValue( &__ret1__ );
sself_vx = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vx); /* set ContextID to 708 */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_x );
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_y );
__Args__[0] = (/* volatile */sbuiltin_x + YYGML_sign((double)/* context id changed from 718 to 708*/(*sself_vx).asReal()));
__pArgs__[0] = &__Args__[0];
__Args__[1] = /* volatile */sbuiltin_y;
__pArgs__[1] = &__Args__[1];
__Args__[2] = YYASSET_REF(0x00000019);
__pArgs__[2] = &__Args__[2];
if(!((BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,3,g_FUNC_place_meeting.val,&__pArgs__[0]) )))) {

YY_STACKTRACE_LINE(58);

YY_STACKTRACE_LINE(60);
bool sc144 = false;
bool sc143 = false;
sself_vx = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vx); /* set ContextID to 720 */
if ((/* context id changed from 708 to 720*/(*sself_vx) > 0)){
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_bbox_right.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_bbox_right );
Variable_GetBuiltIn_Direct( (YYObjectBase*)pSelf, g_VAR_room_width.val, (int)ARRAY_INDEX_NO_INDEX, &global_builtin_room_width );
sc143 = ((/* volatile */sbuiltin_bbox_right > /* First usage */global_builtin_room_width));
 };
;
if (sc143) { sc144=true; } else 
{
bool sc145 = false;
sself_vx = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vx); /* set ContextID to 722 */
if ((/* context id changed from 720 to 722*/(*sself_vx) < 0)){
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_bbox_left.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_bbox_left );
sc145 = ((/* volatile */sbuiltin_bbox_left < 0));
 };
;
sc144 = (sc145);
 };
;
if(sc144) {

YY_STACKTRACE_LINE(60);

YY_STACKTRACE_LINE(61);
YYRValue* sWself_vx = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vx); /* set ContextID to 724 */
(*sWself_vx)=0;
;
;
}
else {

YY_STACKTRACE_LINE(62);

YY_STACKTRACE_LINE(66);
sself_vx = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_vx); /* set ContextID to 725 */
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_x );
/* First usage */sWbuiltin_x+=YYGML_sign((double)/* context id changed from 722 to 725*/(*sself_vx).asReal());
Variable_SetValue_Direct( (YYObjectBase*)pSelf, g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &sWbuiltin_x );
;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(69);

YY_STACKTRACE_LINE(70);
YYRValue* sWself_vx = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_vx); /* set ContextID to 726 */
(*sWself_vx)=0;
;
;
}
;
;
}
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_EntityStep( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_EntityStep( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_EntityStep", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(2);
YYRValue* sWself_EntityStep_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_EntityStep); /* set ContextID to 25 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_EntityStep_4ABE50B2)) = (YYRValue(gml_Script_EntityStep, pSelf)), PopContextStack();
;
return _result;
}
#endif
