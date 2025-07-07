#include "pch.hpp"
extern YYVAR g_Script_gml_Script___background_set_element;
extern YYVAR g_Script_gml_GlobalScript___background_set_element;
extern YYVAR g_FUNC_string_length;
extern YYVAR g_FUNC_layer_get_all;
extern YYVAR g_FUNC_array_length_1d;
extern YYVAR g_FUNC_layer_get_name;
extern YYVAR g_FUNC_string_pos;
extern YYVAR g_FUNC_string_char_at;
extern YYVAR g_FUNC_real;
extern YYVAR g_FUNC_layer_depth;
extern YYVAR g_FUNC_layer_get_depth;
extern YYVAR g_FUNC_string;
extern YYVAR g_FUNC_layer_destroy;
extern YYVAR g_FUNC_layer_create;
extern YYVAR g_FUNC_layer_x;
extern YYVAR g_FUNC_layer_y;
extern YYVAR g_FUNC_layer_hspeed;
extern YYVAR g_FUNC_layer_vspeed;
extern YYVAR g_FUNC_layer_background_create;
extern YYVAR g_FUNC_layer_background_visible;
extern YYVAR g_FUNC_layer_background_htiled;
extern YYVAR g_FUNC_layer_background_vtiled;
extern YYVAR g_FUNC_layer_background_xscale;
extern YYVAR g_FUNC_layer_background_yscale;
extern YYVAR g_FUNC_layer_background_stretch;
extern YYVAR g_FUNC_layer_background_blend;
extern YYVAR g_FUNC_layer_background_alpha;
#ifndef __YYNODEFS
const char g_pString16_5779BF07_s[] = {
0x43, 0x6f, 0x6d, 0x70, 0x61, 0x74, 0x69, 0x62, 0x69, 0x6c, 0x69, 0x74, 0x79, 0x5f, 0x46, 0x6f,      // Compatibility_Fo
0x72, 0x65, 0x67, 0x72, 0x6f, 0x75, 0x6e, 0x64, 0x5f, 0x00,                                          // reground_.
};
const YYRValue g_pString16_5779BF07(g_pString16_5779BF07_s, true);
const char g_pString17_5779BF07_s[] = {
0x43, 0x6f, 0x6d, 0x70, 0x61, 0x74, 0x69, 0x62, 0x69, 0x6c, 0x69, 0x74, 0x79, 0x5f, 0x42, 0x61,      // Compatibility_Ba
0x63, 0x6b, 0x67, 0x72, 0x6f, 0x75, 0x6e, 0x64, 0x5f, 0x00,                                          // ckground_.
};
const YYRValue g_pString17_5779BF07(g_pString17_5779BF07_s, true);
const char g_pString18_5779BF07_s[] = {
0x43, 0x6f, 0x6d, 0x70, 0x61, 0x74, 0x69, 0x62, 0x69, 0x6c, 0x69, 0x74, 0x79, 0x5f, 0x43, 0x6f,      // Compatibility_Co
0x6c, 0x6f, 0x75, 0x72, 0x00,                                                                        // lour.
};
const YYRValue g_pString18_5779BF07(g_pString18_5779BF07_s, true);
const char g_pString23_5779BF07_s[] = {
0x00,                                                                                                // .
};
const YYRValue g_pString23_5779BF07(g_pString23_5779BF07_s, true);
DValue gs_constArg0_5779BF07 = { 2147483600, 0, VALUE_REAL };
DValue gs_constArg1_5779BF07 = { -2147482000, 0, VALUE_REAL };
#else
extern const char g_pString16_5779BF07_s[];
extern const YYRValue g_pString16_5779BF07;
extern const char g_pString17_5779BF07_s[];
extern const YYRValue g_pString17_5779BF07;
extern const char g_pString18_5779BF07_s[];
extern const YYRValue g_pString18_5779BF07;
extern const char g_pString23_5779BF07_s[];
extern const YYRValue g_pString23_5779BF07;
extern DValue gs_constArg0_5779BF07;
extern DValue gs_constArg1_5779BF07;
#endif // __YYNODEFS

YYRValue& gml_Script___background_set_element( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script___background_set_element( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script___background_set_element", 0 );
YY_STACKTRACE_LINE(1);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[15];
YYRValue __Args__[15];
YYRValue local___bind;
YYRValue local___vis;
YYRValue local___fore;
YYRValue local___back;
YYRValue local___x;
YYRValue local___y;
YYRValue local___htiled;
YYRValue local___vtiled;
YYRValue local___xscale;
YYRValue local___yscale;
YYRValue local___stretch;
YYRValue local___hspeed;
YYRValue local___vspeed;
YYRValue local___blend;
YYRValue local___alpha;
YYRValue local___nearestdepth;
YYRValue local___farthestdepth;
YYRValue local___depthinc;
YYRValue local___result;
YYRValue local___fgstring;
YYRValue local___bgstring;
YYRValue local___colstring;
YYRValue local___fglen;
YYRValue local___bglen;
YYRValue local___layerlist;
YYRValue local___layerlistlength;
YYRValue local___collayer;
YYRValue local___i;
YYRValue local___slots;
YYRValue local___isforeground;
YYRValue local___layername;
YYRValue local___slotchr;
YYRValue local___slot;
YYRValue local___currdepth;
YYRValue local___depth;
YYRValue local___layerdepth;
YYRValue local___layerid;
YYRValue local___backel;
YYRValue __ret1__(0);
YYRValue __ret2__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(3);
local___bind=(*YY_GET_ARG(_args, (int)(0), _count));
;

YY_STACKTRACE_LINE(4);
local___vis=(*YY_GET_ARG(_args, (int)(1), _count));
;

YY_STACKTRACE_LINE(5);
local___fore=(*YY_GET_ARG(_args, (int)(2), _count));
;

YY_STACKTRACE_LINE(6);
local___back=(*YY_GET_ARG(_args, (int)(3), _count));
;

YY_STACKTRACE_LINE(7);
local___x=(*YY_GET_ARG(_args, (int)(4), _count));
;

YY_STACKTRACE_LINE(8);
local___y=(*YY_GET_ARG(_args, (int)(5), _count));
;

YY_STACKTRACE_LINE(9);
local___htiled=(*YY_GET_ARG(_args, (int)(6), _count));
;

YY_STACKTRACE_LINE(10);
local___vtiled=(*YY_GET_ARG(_args, (int)(7), _count));
;

YY_STACKTRACE_LINE(11);
local___xscale=(*YY_GET_ARG(_args, (int)(8), _count));
;

YY_STACKTRACE_LINE(12);
local___yscale=(*YY_GET_ARG(_args, (int)(9), _count));
;

YY_STACKTRACE_LINE(13);
local___stretch=(*YY_GET_ARG(_args, (int)(10), _count));
;

YY_STACKTRACE_LINE(14);
local___hspeed=(*YY_GET_ARG(_args, (int)(11), _count));
;

YY_STACKTRACE_LINE(15);
local___vspeed=(*YY_GET_ARG(_args, (int)(12), _count));
;

YY_STACKTRACE_LINE(16);
local___blend=(*YY_GET_ARG(_args, (int)(13), _count));
;

YY_STACKTRACE_LINE(17);
local___alpha=(*YY_GET_ARG(_args, (int)(14), _count));
;

YY_STACKTRACE_LINE(21);
local___nearestdepth=1000000000;
;

YY_STACKTRACE_LINE(22);
local___farthestdepth=-1000000000;
;

YY_STACKTRACE_LINE(23);
local___depthinc=100;
;

YY_STACKTRACE_LINE(25);
;

YY_STACKTRACE_LINE(26);
local___result((int)(0))=-1;
PopContextStack(1);
;

YY_STACKTRACE_LINE(27);
local___result((int)(1))=-1;
PopContextStack(1);
;

YY_STACKTRACE_LINE(31);
local___fgstring=g_pString16_5779BF07;
;

YY_STACKTRACE_LINE(32);
local___bgstring=g_pString17_5779BF07;
;

YY_STACKTRACE_LINE(33);
local___colstring=g_pString18_5779BF07;
;

YY_STACKTRACE_LINE(34);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___fgstring;
local___fglen=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_string_length.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(35);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___bgstring;
local___bglen=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_string_length.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(36);
FREE_RValue( &__ret1__ );
local___layerlist=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,0,g_FUNC_layer_get_all.val,NULL);
;

YY_STACKTRACE_LINE(37);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___layerlist;
local___layerlistlength=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_array_length_1d.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(38);
local___collayer=-1;
;

YY_STACKTRACE_LINE(39);
;

YY_STACKTRACE_LINE(40);
;

YY_STACKTRACE_LINE(41);
;

YY_STACKTRACE_LINE(42);

YY_STACKTRACE_LINE(42);
local___i=0;
;
bool ___f19___ = true;
while( true ) {
if (!___f19___) {

YY_STACKTRACE_LINE(42);
++/* local */local___i;
;
}
___f19___ = false;
bool ___b20___ = ((/* local */local___i < 8));
if (!___b20___) break;
{

YY_STACKTRACE_LINE(43);

YY_STACKTRACE_LINE(44);
local___slots((int)(/* local */local___i))=-1;
PopContextStack(1);
;

YY_STACKTRACE_LINE(45);
local___isforeground((int)(/* local */local___i))=YYRValue(0!=0);
PopContextStack(1);
;
;
}
}
;

YY_STACKTRACE_LINE(49);

YY_STACKTRACE_LINE(49);
local___i=0;
;
bool ___f21___ = true;
while( true ) {
if (!___f21___) {

YY_STACKTRACE_LINE(49);
++/* local */local___i;
;
}
___f21___ = false;
bool ___b22___ = ((/* local */local___i < /* local */local___layerlistlength));
if (!___b22___) break;
{

YY_STACKTRACE_LINE(50);

YY_STACKTRACE_LINE(51);
FREE_RValue( &__ret1__ );
__Args__[0] = /* local */local___layerlist[(int)(/* local */local___i)];
__pArgs__[0] = &__Args__[0];
local___layername=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_get_name.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(52);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___fgstring;
__pArgs__[1] = &/* local */local___layername;
if((YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_string_pos.val,&__pArgs__[0]) > 0)) {

YY_STACKTRACE_LINE(53);

YY_STACKTRACE_LINE(54);
FREE_RValue( &__ret2__ );
__pArgs__[2] = &/* local */local___layername;
__Args__[3] = (/* local */local___fglen + 1);
__pArgs__[3] = &__Args__[3];
local___slotchr=YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,2,g_FUNC_string_char_at.val,&__pArgs__[2]);
;

YY_STACKTRACE_LINE(55);
if((/* local */local___slotchr == YYRValue(g_pString23_5779BF07))) {

YY_STACKTRACE_LINE(56);
continue;
;
}
;

YY_STACKTRACE_LINE(58);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___slotchr;
local___slot=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_real.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(59);
local___slots((int)(/* local */local___slot))=YYRValue(/* local */local___layerlist[(int)(/* local */local___i)]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(61);
local___isforeground((int)(/* local */local___slot))=YYRValue(1!=0);
PopContextStack(1);
;
;
}
else {

YY_STACKTRACE_LINE(65);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___bgstring;
__pArgs__[1] = &/* local */local___layername;
if((YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_string_pos.val,&__pArgs__[0]) > 0)) {

YY_STACKTRACE_LINE(66);

YY_STACKTRACE_LINE(67);
FREE_RValue( &__ret2__ );
__pArgs__[2] = &/* local */local___layername;
__Args__[3] = (/* local */local___bglen + 1);
__pArgs__[3] = &__Args__[3];
local___slotchr=YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,2,g_FUNC_string_char_at.val,&__pArgs__[2]);
;

YY_STACKTRACE_LINE(68);
if((/* local */local___slotchr == YYRValue(g_pString23_5779BF07))) {

YY_STACKTRACE_LINE(69);
continue;
;
}
;

YY_STACKTRACE_LINE(71);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___slotchr;
local___slot=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_real.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(72);
local___slots((int)(/* local */local___slot))=YYRValue(/* local */local___layerlist[(int)(/* local */local___i)]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(74);
local___isforeground((int)(/* local */local___slot))=YYRValue(0!=0);
PopContextStack(1);
;
;
}
else {

YY_STACKTRACE_LINE(78);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___colstring;
__pArgs__[1] = &/* local */local___layername;
if((YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_string_pos.val,&__pArgs__[0]) > 0)) {

YY_STACKTRACE_LINE(79);

YY_STACKTRACE_LINE(81);
local___collayer=/* local */local___layerlist[(int)(/* local */local___i)];
;

YY_STACKTRACE_LINE(82);
FREE_RValue( &__ret1__ );
__Args__[0] = /* local */local___layerlist[(int)(/* local */local___i)];
__pArgs__[0] = &__Args__[0];
__pArgs__[1] = &/* local */local___farthestdepth;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_depth.val,&__pArgs__[0]);
;
;
}
else {

YY_STACKTRACE_LINE(85);

YY_STACKTRACE_LINE(86);
FREE_RValue( &__ret1__ );
__Args__[0] = /* local */local___layerlist[(int)(/* local */local___i)];
__pArgs__[0] = &__Args__[0];
local___currdepth=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_get_depth.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(88);
if((/* local */local___currdepth < /* local */local___nearestdepth)) {

YY_STACKTRACE_LINE(89);
local___nearestdepth=/* local */local___currdepth;
;
}
;

YY_STACKTRACE_LINE(91);
if((/* local */local___currdepth > /* local */local___farthestdepth)) {

YY_STACKTRACE_LINE(92);
local___farthestdepth=/* local */local___currdepth;
;
}
;
;
}
;
}
;
}
;
;
}
}
;

YY_STACKTRACE_LINE(97);
/* local */local___farthestdepth+=(/* local */local___depthinc + 1000);
;

YY_STACKTRACE_LINE(98);
/* local */local___nearestdepth-=/* local */local___depthinc;
;

YY_STACKTRACE_LINE(102);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___farthestdepth;
__Args__[1] = (YYRValue*)&gs_constArg0_5779BF07;
__pArgs__[1] = &__Args__[1];
local___farthestdepth=YYGML_max(__ret1__,2,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(103);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___nearestdepth;
__Args__[1] = (YYRValue*)&gs_constArg1_5779BF07;
__pArgs__[1] = &__Args__[1];
local___nearestdepth=YYGML_min(__ret1__,2,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(105);

YY_STACKTRACE_LINE(105);
local___i=0;
;
bool ___f24___ = true;
while( true ) {
if (!___f24___) {

YY_STACKTRACE_LINE(105);
++/* local */local___i;
;
}
___f24___ = false;
bool ___b25___ = ((/* local */local___i < 8));
if (!___b25___) break;
{

YY_STACKTRACE_LINE(106);

YY_STACKTRACE_LINE(107);
if((/* local */local___slots[(int)(/* local */local___i)] != -1)) {

YY_STACKTRACE_LINE(108);

YY_STACKTRACE_LINE(109);
local___depth=0;
;

YY_STACKTRACE_LINE(110);
if((/* local */local___isforeground[(int)(/* local */local___i)] == YYRValue(1!=0))) {

YY_STACKTRACE_LINE(111);

YY_STACKTRACE_LINE(112);
local___depth=(/* local */local___nearestdepth - (/* local */local___i * /* local */local___depthinc));
;
;
}
else {

YY_STACKTRACE_LINE(115);

YY_STACKTRACE_LINE(116);
local___depth=((/* local */local___farthestdepth - /* local */local___depthinc) - (/* local */local___slot * /* local */local___depthinc));
;
;
}
;

YY_STACKTRACE_LINE(119);
FREE_RValue( &__ret1__ );
__Args__[0] = /* local */local___slots[(int)(/* local */local___i)];
__pArgs__[0] = &__Args__[0];
__pArgs__[1] = &/* local */local___depth;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_depth.val,&__pArgs__[0]);
;
;
}
;
;
}
}
;

YY_STACKTRACE_LINE(123);
if((/* local */local___collayer != -1)) {

YY_STACKTRACE_LINE(124);

YY_STACKTRACE_LINE(125);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___collayer;
__pArgs__[1] = &/* local */local___farthestdepth;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_depth.val,&__pArgs__[0]);
;
;
}
;

YY_STACKTRACE_LINE(130);
;

YY_STACKTRACE_LINE(131);
;

YY_STACKTRACE_LINE(132);
if((/* local */local___bind == -1)) {

YY_STACKTRACE_LINE(133);

YY_STACKTRACE_LINE(135);
local___layername=/* local */local___colstring;
;

YY_STACKTRACE_LINE(136);
local___layerdepth=/* local */local___farthestdepth;
;
;
}
else {

YY_STACKTRACE_LINE(139);

YY_STACKTRACE_LINE(140);
if((/* local */local___fore == YYRValue(1!=0))) {

YY_STACKTRACE_LINE(141);

YY_STACKTRACE_LINE(142);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___bind;
local___layername=(/* local */local___fgstring + YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_string.val,&__pArgs__[0]));
;

YY_STACKTRACE_LINE(143);
local___layerdepth=(/* local */local___nearestdepth - (/* local */local___bind * /* local */local___depthinc));
;
;
}
else {

YY_STACKTRACE_LINE(146);

YY_STACKTRACE_LINE(147);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___bind;
local___layername=(/* local */local___bgstring + YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_string.val,&__pArgs__[0]));
;

YY_STACKTRACE_LINE(148);
local___layerdepth=((/* local */local___farthestdepth - /* local */local___depthinc) - (/* local */local___bind * /* local */local___depthinc));
;
;
}
;
;
}
;

YY_STACKTRACE_LINE(153);
;

YY_STACKTRACE_LINE(154);
if((/* local */local___bind == -1)) {

YY_STACKTRACE_LINE(155);

YY_STACKTRACE_LINE(156);
local___layerid=/* local */local___collayer;
;
;
}
else {

YY_STACKTRACE_LINE(159);

YY_STACKTRACE_LINE(160);
local___layerid=/* local */local___slots[(int)(/* local */local___bind)];
;
;
}
;

YY_STACKTRACE_LINE(163);
if((/* local */local___layerid != -1)) {

YY_STACKTRACE_LINE(164);

YY_STACKTRACE_LINE(165);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___layerid;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_destroy.val,&__pArgs__[0]);
;
;
}
;

YY_STACKTRACE_LINE(167);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___layerdepth;
__pArgs__[1] = &/* local */local___layername;
local___layerid=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_create.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(170);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___layerid;
__pArgs__[1] = &/* local */local___x;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_x.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(171);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___layerid;
__pArgs__[1] = &/* local */local___y;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_y.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(172);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___layerid;
__pArgs__[1] = &/* local */local___hspeed;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_hspeed.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(173);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___layerid;
__pArgs__[1] = &/* local */local___vspeed;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_vspeed.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(176);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___layerid;
__pArgs__[1] = &/* local */local___back;
local___backel=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_background_create.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(177);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___backel;
__pArgs__[1] = &/* local */local___vis;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_background_visible.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(178);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___backel;
__pArgs__[1] = &/* local */local___htiled;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_background_htiled.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(179);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___backel;
__pArgs__[1] = &/* local */local___vtiled;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_background_vtiled.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(180);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___backel;
__pArgs__[1] = &/* local */local___xscale;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_background_xscale.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(181);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___backel;
__pArgs__[1] = &/* local */local___yscale;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_background_yscale.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(182);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___backel;
__pArgs__[1] = &/* local */local___stretch;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_background_stretch.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(183);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___backel;
__pArgs__[1] = &/* local */local___blend;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_background_blend.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(184);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___backel;
__pArgs__[1] = &/* local */local___alpha;
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_layer_background_alpha.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(186);
local___result((int)(0))=/* local */local___backel;
PopContextStack(1);
;

YY_STACKTRACE_LINE(187);
local___result((int)(1))=/* local */local___layerid;
PopContextStack(1);
;

YY_STACKTRACE_LINE(189);
_result = /* local */local___result;
return _result;
;
return _result;

}

#endif
YYRValue& gml_GlobalScript___background_set_element( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript___background_set_element( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript___background_set_element", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(1);
YYRValue* sWself___background_set_element_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self___background_set_element); /* set ContextID to 4 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself___background_set_element_4ABE50B2)) = (YYRValue(gml_Script___background_set_element, pSelf)), PopContextStack();
;
return _result;
}
#endif
