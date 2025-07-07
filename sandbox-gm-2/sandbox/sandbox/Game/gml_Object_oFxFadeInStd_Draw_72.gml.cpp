#include "pch.hpp"
YYRValue& gml_Script___view_get( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
extern YYVAR g_VAR_image_alpha;
extern YYVAR g_Script_gml_Object_oFxFadeInStd_Draw_72;
extern YYVAR g_FUNC_draw_rectangle_colour;
#ifndef __YYNODEFS
DValue gs_constArg1_9C7CE134 = { 0, 0, VALUE_REAL };
DLValue gs_constLongArg0_9C7CE134 = { 0LL, 0, VALUE_INT64 };
DLValue gs_constLongArg2_9C7CE134 = { 1LL, 0, VALUE_INT64 };
DLValue gs_constLongArg3_9C7CE134 = { 2LL, 0, VALUE_INT64 };
DLValue gs_constLongArg4_9C7CE134 = { 3LL, 0, VALUE_INT64 };
#else
extern DValue gs_constArg1_9C7CE134;
extern DLValue gs_constLongArg0_9C7CE134;
extern DLValue gs_constLongArg2_9C7CE134;
extern DLValue gs_constLongArg3_9C7CE134;
extern DLValue gs_constLongArg4_9C7CE134;
#endif // __YYNODEFS

void gml_Object_oFxFadeInStd_Draw_72( CInstance* pSelf, CInstance* pOther );
#ifndef __YYNODEFS
void gml_Object_oFxFadeInStd_Draw_72( CInstance* pSelf, CInstance* pOther )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Object_oFxFadeInStd_Draw_72", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue* __pArgs__[21];
YYRValue __Args__[21];
YYRValue sbuiltin_image_alpha;
YYRValue __ret1__;
YYRValue __ret2__;
YYRValue __ret3__;
YYRValue __ret4__;
YYRValue __ret5__;
YYRValue __ret6__;
YYRValue __ret7__;


YY_STACKTRACE_LINE(2);
YYGML_Variable_GetValue( (YYObjectBase*)pSelf, g_VAR_image_alpha.val, (int)ARRAY_INDEX_NO_INDEX, &sbuiltin_image_alpha );
YYGML_draw_set_alpha((float)(float)(/* First usage */sbuiltin_image_alpha.asReal()));
;

YY_STACKTRACE_LINE(3);
FREE_RValue( &__ret1__ );
FREE_RValue( &__ret2__ );
FREE_RValue( &__ret3__ );
FREE_RValue( &__ret4__ );
FREE_RValue( &__ret5__ );
FREE_RValue( &__ret6__ );
FREE_RValue( &__ret7__ );
__Args__[0] = (YYRValue*)&gs_constLongArg0_9C7CE134;
__pArgs__[0] = &__Args__[0];
__Args__[1] = (YYRValue*)&gs_constArg1_9C7CE134;
__pArgs__[1] = &__Args__[1];
__Args__[2] = (YYRValue*)&gs_constLongArg2_9C7CE134;
__pArgs__[2] = &__Args__[2];
__Args__[3] = (YYRValue*)&gs_constArg1_9C7CE134;
__pArgs__[3] = &__Args__[3];
__Args__[4] = (YYRValue*)&gs_constLongArg0_9C7CE134;
__pArgs__[4] = &__Args__[4];
__Args__[5] = (YYRValue*)&gs_constArg1_9C7CE134;
__pArgs__[5] = &__Args__[5];
__Args__[6] = (YYRValue*)&gs_constLongArg3_9C7CE134;
__pArgs__[6] = &__Args__[6];
__Args__[7] = (YYRValue*)&gs_constArg1_9C7CE134;
__pArgs__[7] = &__Args__[7];
__Args__[8] = (YYRValue*)&gs_constLongArg2_9C7CE134;
__pArgs__[8] = &__Args__[8];
__Args__[9] = (YYRValue*)&gs_constArg1_9C7CE134;
__pArgs__[9] = &__Args__[9];
__Args__[10] = (YYRValue*)&gs_constLongArg4_9C7CE134;
__pArgs__[10] = &__Args__[10];
__Args__[11] = (YYRValue*)&gs_constArg1_9C7CE134;
__pArgs__[11] = &__Args__[11];
__Args__[12] = gml_Script___view_get(pSelf,pOther,__ret2__,2,&__pArgs__[0]);
__pArgs__[12] = &__Args__[12];
__Args__[13] = gml_Script___view_get(pSelf,pOther,__ret3__,2,&__pArgs__[2]);
__pArgs__[13] = &__Args__[13];
__Args__[14] = (gml_Script___view_get(pSelf,pOther,__ret4__,2,&__pArgs__[4]) + gml_Script___view_get(pSelf,pOther,__ret5__,2,&__pArgs__[6]));
__pArgs__[14] = &__Args__[14];
__Args__[15] = (gml_Script___view_get(pSelf,pOther,__ret6__,2,&__pArgs__[8]) + gml_Script___view_get(pSelf,pOther,__ret7__,2,&__pArgs__[10]));
__pArgs__[15] = &__Args__[15];
__Args__[16] = (YYRValue*)&gs_constArg1_9C7CE134;
__pArgs__[16] = &__Args__[16];
__Args__[17] = (YYRValue*)&gs_constArg1_9C7CE134;
__pArgs__[17] = &__Args__[17];
__Args__[18] = (YYRValue*)&gs_constArg1_9C7CE134;
__pArgs__[18] = &__Args__[18];
__Args__[19] = (YYRValue*)&gs_constArg1_9C7CE134;
__pArgs__[19] = &__Args__[19];
__Args__[20] = (YYRValue*)&gs_constFalse;
__pArgs__[20] = &__Args__[20];
YYGML_CallLegacyFunction(pSelf,pOther,__ret1__,9,g_FUNC_draw_rectangle_colour.val,&__pArgs__[12]);
;

YY_STACKTRACE_LINE(4);
YYGML_draw_set_alpha((float)1);
;
}
#endif
