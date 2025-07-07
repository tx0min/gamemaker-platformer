#include "pch.hpp"
YYRValue& gml_Script___background_set_element( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_Script_gml_Script___background_get_element;
extern YYVAR g_Script_gml_GlobalScript___background_get_element;
extern YYVAR g_FUNC_string_length;
extern YYVAR g_FUNC_layer_get_all;
extern YYVAR g_FUNC_array_length_1d;
extern YYVAR g_FUNC_layer_get_name;
extern YYVAR g_FUNC_string_pos;
extern YYVAR g_FUNC_string_char_at;
extern YYVAR g_FUNC_real;
extern YYVAR g_FUNC_layer_get_all_elements;
extern YYVAR g_FUNC_layer_get_element_type;
#ifndef __YYNODEFS
const char g_pString1_B3847E3F_s[] = {
0x43, 0x6f, 0x6d, 0x70, 0x61, 0x74, 0x69, 0x62, 0x69, 0x6c, 0x69, 0x74, 0x79, 0x5f, 0x46, 0x6f,      // Compatibility_Fo
0x72, 0x65, 0x67, 0x72, 0x6f, 0x75, 0x6e, 0x64, 0x5f, 0x00,                                          // reground_.
};
const YYRValue g_pString1_B3847E3F(g_pString1_B3847E3F_s, true);
const char g_pString2_B3847E3F_s[] = {
0x43, 0x6f, 0x6d, 0x70, 0x61, 0x74, 0x69, 0x62, 0x69, 0x6c, 0x69, 0x74, 0x79, 0x5f, 0x42, 0x61,      // Compatibility_Ba
0x63, 0x6b, 0x67, 0x72, 0x6f, 0x75, 0x6e, 0x64, 0x5f, 0x00,                                          // ckground_.
};
const YYRValue g_pString2_B3847E3F(g_pString2_B3847E3F_s, true);
const char g_pString5_B3847E3F_s[] = {
0x00,                                                                                                // .
};
const YYRValue g_pString5_B3847E3F(g_pString5_B3847E3F_s, true);
DValue gs_constArg0_B3847E3F = { -1, 0, VALUE_REAL };
DValue gs_constArg1_B3847E3F = { 0, 0, VALUE_REAL };
DValue gs_constArg2_B3847E3F = { 1, 0, VALUE_REAL };
DValue gs_constArg3_B3847E3F = { 16777215, 0, VALUE_REAL };
#else
extern const char g_pString1_B3847E3F_s[];
extern const YYRValue g_pString1_B3847E3F;
extern const char g_pString2_B3847E3F_s[];
extern const YYRValue g_pString2_B3847E3F;
extern const char g_pString5_B3847E3F_s[];
extern const YYRValue g_pString5_B3847E3F;
extern DValue gs_constArg0_B3847E3F;
extern DValue gs_constArg1_B3847E3F;
extern DValue gs_constArg2_B3847E3F;
extern DValue gs_constArg3_B3847E3F;
#endif // __YYNODEFS

YYRValue& gml_Script___background_get_element( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script___background_get_element( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script___background_get_element", 0 );
YY_STACKTRACE_LINE(1);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[15];
YYRValue __Args__[15];
YYRValue local___bind;
YYRValue local___result;
YYRValue local___fgstring;
YYRValue local___bgstring;
YYRValue local___fglen;
YYRValue local___bglen;
YYRValue local___layerlist;
YYRValue local___layerlistlength;
YYRValue local___layerid;
YYRValue local___isforeground;
YYRValue local___i;
YYRValue local___layername;
YYRValue local___slotchr;
YYRValue local___slot;
YYRValue local___els;
YYRValue local___elslength;
YYRValue local___newback;
YYRValue __ret1__(0);
YYRValue __ret2__(0);

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(2);
local___bind=(*YY_GET_ARG(_args, (int)(0), _count));
;

YY_STACKTRACE_LINE(4);
;

YY_STACKTRACE_LINE(5);
local___result((int)(0))=-1;
PopContextStack(1);
;

YY_STACKTRACE_LINE(6);
local___result((int)(1))=-1;
PopContextStack(1);
;

YY_STACKTRACE_LINE(7);
local___result((int)(2))=-1;
PopContextStack(1);
;

YY_STACKTRACE_LINE(11);
local___fgstring=g_pString1_B3847E3F;
;

YY_STACKTRACE_LINE(12);
local___bgstring=g_pString2_B3847E3F;
;

YY_STACKTRACE_LINE(13);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___fgstring;
local___fglen=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_string_length.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(14);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___bgstring;
local___bglen=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_string_length.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(15);
FREE_RValue( &__ret1__ );
local___layerlist=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,0,g_FUNC_layer_get_all.val,NULL);
;

YY_STACKTRACE_LINE(16);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___layerlist;
local___layerlistlength=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_array_length_1d.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(17);
;

YY_STACKTRACE_LINE(19);
local___layerid=-1;
;

YY_STACKTRACE_LINE(20);
local___isforeground=YYRValue(0!=0);
;

YY_STACKTRACE_LINE(23);

YY_STACKTRACE_LINE(23);
local___i=0;
;
bool ___f3___ = true;
while( true ) {
if (!___f3___) {

YY_STACKTRACE_LINE(23);
++/* local */local___i;
;
}
___f3___ = false;
bool ___b4___ = ((/* local */local___i < /* local */local___layerlistlength));
if (!___b4___) break;
{

YY_STACKTRACE_LINE(24);

YY_STACKTRACE_LINE(25);
FREE_RValue( &__ret1__ );
__Args__[0] = /* local */local___layerlist[(int)(/* local */local___i)];
__pArgs__[0] = &__Args__[0];
local___layername=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_get_name.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(26);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___fgstring;
__pArgs__[1] = &/* local */local___layername;
if((YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_string_pos.val,&__pArgs__[0]) > 0)) {

YY_STACKTRACE_LINE(27);

YY_STACKTRACE_LINE(28);
FREE_RValue( &__ret2__ );
__pArgs__[2] = &/* local */local___layername;
__Args__[3] = (/* local */local___fglen + 1);
__pArgs__[3] = &__Args__[3];
local___slotchr=YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,2,g_FUNC_string_char_at.val,&__pArgs__[2]);
;

YY_STACKTRACE_LINE(29);
if((/* local */local___slotchr == YYRValue(g_pString5_B3847E3F))) {

YY_STACKTRACE_LINE(30);
continue;
;
}
;

YY_STACKTRACE_LINE(32);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___slotchr;
local___slot=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_real.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(34);
if((/* local */local___slot == /* local */local___bind)) {

YY_STACKTRACE_LINE(35);

YY_STACKTRACE_LINE(36);
local___layerid=/* local */local___layerlist[(int)(/* local */local___i)];
;

YY_STACKTRACE_LINE(37);
local___isforeground=YYRValue(1!=0);
;

YY_STACKTRACE_LINE(39);
break;
;
;
}
;
;
}
else {

YY_STACKTRACE_LINE(42);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___bgstring;
__pArgs__[1] = &/* local */local___layername;
if((YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_string_pos.val,&__pArgs__[0]) > 0)) {

YY_STACKTRACE_LINE(43);

YY_STACKTRACE_LINE(44);
FREE_RValue( &__ret2__ );
__pArgs__[2] = &/* local */local___layername;
__Args__[3] = (/* local */local___bglen + 1);
__pArgs__[3] = &__Args__[3];
local___slotchr=YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,2,g_FUNC_string_char_at.val,&__pArgs__[2]);
;

YY_STACKTRACE_LINE(45);
if((/* local */local___slotchr == YYRValue(g_pString5_B3847E3F))) {

YY_STACKTRACE_LINE(46);
continue;
;
}
;

YY_STACKTRACE_LINE(48);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___slotchr;
local___slot=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_real.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(50);
if((/* local */local___slot == /* local */local___bind)) {

YY_STACKTRACE_LINE(51);

YY_STACKTRACE_LINE(52);
local___layerid=/* local */local___layerlist[(int)(/* local */local___i)];
;

YY_STACKTRACE_LINE(53);
local___isforeground=YYRValue(0!=0);
;

YY_STACKTRACE_LINE(55);
break;
;
;
}
;
;
}
;
}
;
;
}
}
;

YY_STACKTRACE_LINE(60);
if((/* local */local___layerid != -1)) {

YY_STACKTRACE_LINE(61);

YY_STACKTRACE_LINE(64);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___layerid;
local___els=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_get_all_elements.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(65);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___els;
local___elslength=YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_array_length_1d.val,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(66);

YY_STACKTRACE_LINE(66);
local___i=0;
;
bool ___f6___ = true;
while( true ) {
if (!___f6___) {

YY_STACKTRACE_LINE(66);
++/* local */local___i;
;
}
___f6___ = false;
bool ___b7___ = ((/* local */local___i < /* local */local___elslength));
if (!___b7___) break;
{

YY_STACKTRACE_LINE(67);

YY_STACKTRACE_LINE(68);
FREE_RValue( &__ret1__ );
__Args__[0] = /* local */local___els[(int)(/* local */local___i)];
__pArgs__[0] = &__Args__[0];
if((YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_layer_get_element_type.val,&__pArgs__[0]) == 1)) {

YY_STACKTRACE_LINE(69);

YY_STACKTRACE_LINE(70);
local___result((int)(0))=YYRValue(/* local */local___els[(int)(/* local */local___i)]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(71);
local___result((int)(1))=/* local */local___layerid;
PopContextStack(1);
;

YY_STACKTRACE_LINE(72);
local___result((int)(2))=/* local */local___isforeground;
PopContextStack(1);
;
;
}
;
;
}
}
;
;
}
else {

YY_STACKTRACE_LINE(77);

YY_STACKTRACE_LINE(79);
FREE_RValue( &__ret1__ );
__pArgs__[0] = &/* local */local___bind;
__Args__[1] = (YYRValue*)&gs_constFalse;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constFalse;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg0_B3847E3F;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (YYRValue*)&gs_constArg1_B3847E3F;
__pArgs__[4] = &__Args__[4];
__Args__[5] = (YYRValue*)&gs_constArg1_B3847E3F;
__pArgs__[5] = &__Args__[5];
__Args__[6] = (YYRValue*)&gs_constTrue;
__pArgs__[6] = &__Args__[6];
__Args__[7] = (YYRValue*)&gs_constTrue;
__pArgs__[7] = &__Args__[7];
__Args__[8] = (YYRValue*)&gs_constArg2_B3847E3F;
__pArgs__[8] = &__Args__[8];
__Args__[9] = (YYRValue*)&gs_constArg2_B3847E3F;
__pArgs__[9] = &__Args__[9];
__Args__[10] = (YYRValue*)&gs_constFalse;
__pArgs__[10] = &__Args__[10];
__Args__[11] = (YYRValue*)&gs_constArg1_B3847E3F;
__pArgs__[11] = &__Args__[11];
__Args__[12] = (YYRValue*)&gs_constArg1_B3847E3F;
__pArgs__[12] = &__Args__[12];
__Args__[13] = (YYRValue*)&gs_constArg3_B3847E3F;
__pArgs__[13] = &__Args__[13];
__Args__[14] = (YYRValue*)&gs_constArg2_B3847E3F;
__pArgs__[14] = &__Args__[14];
local___newback=gml_Script___background_set_element(pSelf,pOther,__ret1__,15,&__pArgs__[0]);
;

YY_STACKTRACE_LINE(80);
local___result((int)(0))=YYRValue(/* local */local___newback[(int)(0)]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(81);
local___result((int)(1))=YYRValue(/* local */local___newback[(int)(1)]);
PopContextStack(1);
;

YY_STACKTRACE_LINE(82);
local___result((int)(2))=YYRValue(0!=0);
PopContextStack(1);
;
;
}
;

YY_STACKTRACE_LINE(85);
_result = /* local */local___result;
return _result;
;
return _result;

}

#endif
YYRValue& gml_GlobalScript___background_get_element( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript___background_get_element( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript___background_get_element", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(1);
YYRValue* sWself___background_get_element_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self___background_get_element); /* set ContextID to 1 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself___background_get_element_4ABE50B2)) = (YYRValue(gml_Script___background_get_element, pSelf)), PopContextStack();
;
return _result;
}
#endif
