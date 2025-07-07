#include "pch.hpp"
extern YYVAR g_VAR_image_blend;
extern YYVAR g_Script_gml_Object_oFxPuddle_Draw_0;
extern YYVAR g_FUNC_is_array;
extern YYVAR g_FUNC_array_length_1d;
extern YYVAR g_FUNC_ds_map_find_value;
#ifndef __YYNODEFS
const char g_pString265_D4671D6E_s[] = {
0x78, 0x00,                                                                                          // x.
};
const YYRValue g_pString265_D4671D6E(g_pString265_D4671D6E_s, true);
const char g_pString266_D4671D6E_s[] = {
0x79, 0x00,                                                                                          // y.
};
const YYRValue g_pString266_D4671D6E(g_pString266_D4671D6E_s, true);
const char g_pString267_D4671D6E_s[] = {
0x78, 0x73, 0x63, 0x61, 0x6c, 0x65, 0x00,                                                            // xscale.
};
const YYRValue g_pString267_D4671D6E(g_pString267_D4671D6E_s, true);
const char g_pString268_D4671D6E_s[] = {
0x79, 0x73, 0x63, 0x61, 0x6c, 0x65, 0x00,                                                            // yscale.
};
const YYRValue g_pString268_D4671D6E(g_pString268_D4671D6E_s, true);
const char g_pString269_D4671D6E_s[] = {
0x72, 0x6f, 0x74, 0x00,                                                                              // rot.
};
const YYRValue g_pString269_D4671D6E(g_pString269_D4671D6E_s, true);
#else
extern const char g_pString265_D4671D6E_s[];
extern const YYRValue g_pString265_D4671D6E;
extern const char g_pString266_D4671D6E_s[];
extern const YYRValue g_pString266_D4671D6E;
extern const char g_pString267_D4671D6E_s[];
extern const YYRValue g_pString267_D4671D6E;
extern const char g_pString268_D4671D6E_s[];
extern const YYRValue g_pString268_D4671D6E;
extern const char g_pString269_D4671D6E_s[];
extern const YYRValue g_pString269_D4671D6E;
#endif // __YYNODEFS

void gml_Object_oFxPuddle_Draw_0( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oFxPuddle_Draw_0( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oFxPuddle_Draw_0", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[10];
YYRValue __Args__[10];
YYRValue local_i;
YYRValue local_drop;
YYRValue sbuiltin_image_blend;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;


YY_STACKTRACE_LINE(1);
YYGML_draw_self(pSelf);
;

YY_STACKTRACE_LINE(2);
YYRValue* sself_numdrops = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_numdrops); /* set ContextID to sself_numdrops */
if(BOOL_RValue( /* First usage */(*sself_numdrops) )) {

YY_STACKTRACE_LINE(2);

YY_STACKTRACE_LINE(3);
sself_numdrops = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_numdrops); /* set ContextID to 944 */
if((/* context id changed from 85 to 944*/(*sself_numdrops) > 0)) {

YY_STACKTRACE_LINE(3);

YY_STACKTRACE_LINE(4);
FREE_RValue( &__ret1__ );
YYRValue* sself_drops = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_drops); /* set ContextID to sself_drops */
__Args__[0] = /* First usage */(*sself_drops);
__pArgs__[0] = &__Args__[0];
if(BOOL_RValue( YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_is_array.val,&__pArgs__[0]) )) {

YY_STACKTRACE_LINE(4);

YY_STACKTRACE_LINE(5);

YY_STACKTRACE_LINE(5);
local_i=0;
;
bool ___f263___ = true;
while( true ) {
if (!___f263___) {

YY_STACKTRACE_LINE(5);
++/* local */local_i;
;
}
___f263___ = false;
FREE_RValue( &__ret1__ );
sself_drops = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_drops); /* set ContextID to 947 */
__Args__[0] = /* context id changed from 945 to 947*/(*sself_drops);
__pArgs__[0] = &__Args__[0];
bool ___b264___ = ((/* local */local_i < YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,1,g_FUNC_array_length_1d.val,&__pArgs__[0])));
if (!___b264___) break;
{

YY_STACKTRACE_LINE(5);

YY_STACKTRACE_LINE(6);
YYRValue* sself_drops_260A6C49 = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_drops); /* set ContextID to sself_drops_260A6C49 */
local_drop=/* First usage */(*sself_drops_260A6C49)[(int)(/* local */local_i)];
;

YY_STACKTRACE_LINE(7);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
FREE_RValue( &__ret3__ );
FREE_RValue( &__ret4__ );
FREE_RValue( &__ret5__ );
__pArgs__[0] = &/* local */local_drop;
__Args__[1] = g_pString265_D4671D6E;
__pArgs__[1] = &__Args__[1];
__pArgs__[2] = &/* local */local_drop;
__Args__[3] = g_pString266_D4671D6E;
__pArgs__[3] = &__Args__[3];
__pArgs__[4] = &/* local */local_drop;
__Args__[5] = g_pString267_D4671D6E;
__pArgs__[5] = &__Args__[5];
__pArgs__[6] = &/* local */local_drop;
__Args__[7] = g_pString268_D4671D6E;
__pArgs__[7] = &__Args__[7];
__pArgs__[8] = &/* local */local_drop;
__Args__[9] = g_pString269_D4671D6E;
__pArgs__[9] = &__Args__[9];
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_blend.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_blend );
YYGML_draw_sprite_ext(pSelf,(int)YYASSET_REF(0x0100001B).asReal(),(float)0,(float)YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,2,g_FUNC_ds_map_find_value.val,&__pArgs__[0]).asReal(),(float)YYGML_CallLegacyFunction(pSelf,pOther,__ret2__,2,g_FUNC_ds_map_find_value.val,&__pArgs__[2]).asReal(),(float)YYGML_CallLegacyFunction(pSelf,pOther,__ret3__,2,g_FUNC_ds_map_find_value.val,&__pArgs__[4]).asReal(),(float)YYGML_CallLegacyFunction(pSelf,pOther,__ret4__,2,g_FUNC_ds_map_find_value.val,&__pArgs__[6]).asReal(),(float)YYGML_CallLegacyFunction(pSelf,pOther,__ret5__,2,g_FUNC_ds_map_find_value.val,&__pArgs__[8]).asReal(),(int)(int64)/* First usage */sbuiltin_image_blend,(float)1);
;
;
}
}
;
;
}
;
;
}
;
;
}
;
}
#endif
