#include "pch.hpp"
extern YYVAR self_we;
extern YYVAR self_i;
extern YYVAR self_disa;
extern YYVAR g_VAR_x;
extern YYVAR g_VAR_y;
extern YYVAR g_VAR_image_angle;
extern YYVAR g_VAR_image_yscale;
extern YYVAR g_VAR_alarm;
extern YYVAR g_Script_gml_Script_dropWeapon;
extern YYVAR g_Script_gml_GlobalScript_dropWeapon;
#ifndef __YYNODEFS
#else
#endif // __YYNODEFS

YYRValue& gml_Script_dropWeapon( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_Script_dropWeapon( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_Script_dropWeapon", 0 );
YY_STACKTRACE_LINE(2);
YYGML_array_set_owner( (int64)(intptr_t)pSelf );
YYRValue o0ECB8E193_weapon;
YYRValue oWweapon0630EAB5B_inuse;
YYRValue oWweapon0630EAB5B_disabled;
YYRValue o09F585553_x;
YYRValue oWweapon0630EAB5B_x;
YYRValue o09F585553_y;
YYRValue oWweapon0630EAB5B_y;
YYRValue oWweapon0630EAB5B_image_angle;
YYRValue oWweapon0630EAB5B_image_yscale;
YYRValue oWweapon0FB327668_alarm;

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;


YY_STACKTRACE_LINE(3);
YYGML_Variable_GetValue( YYASSET_REF(0x0000000E), kVARID_self_weapon, (int)ARRAY_INDEX_NO_INDEX, &o0ECB8E193_weapon );
if((/* First usage */o0ECB8E193_weapon != -4)) {

YY_STACKTRACE_LINE(3);

YY_STACKTRACE_LINE(4);
SWithIterator ___wi121___;
int ___wc122___ = YYGML_NewWithIterator( &___wi121___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther, YYASSET_REF(0x0000000E));
if (___wc122___ > 0 ) {
do {

YY_STACKTRACE_LINE(4);

YY_STACKTRACE_LINE(5);
YYRValue* sself_weapon = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_weapon); /* set ContextID to sself_weapon */
oWweapon0630EAB5B_inuse=YYRValue(0!=0);
YYGML_Variable_SetValue( /* First usage */(*sself_weapon), kVARID_self_inuse, (int)ARRAY_INDEX_NO_INDEX, &oWweapon0630EAB5B_inuse );
;

YY_STACKTRACE_LINE(6);
oWweapon0630EAB5B_disabled=YYRValue(1!=0);
sself_weapon = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_weapon); /* set ContextID to 676 */
YYGML_Variable_SetValue( /* context id changed from 674 to 676*/(*sself_weapon), kVARID_self_disabled, (int)ARRAY_INDEX_NO_INDEX, &oWweapon0630EAB5B_disabled );
;

YY_STACKTRACE_LINE(7);
sself_weapon = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_weapon); /* set ContextID to 677 */
YYGML_ErrCheck_Variable_GetValue( YYASSET_REF(0x0000001D), g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &o09F585553_x, pSelf, pOther );
oWweapon0630EAB5B_x=YYRValue(/* First usage */o09F585553_x);
Variable_SetValue( /* context id changed from 676 to 678*/(*sself_weapon), g_VAR_x.val, (int)ARRAY_INDEX_NO_INDEX, &oWweapon0630EAB5B_x );
;

YY_STACKTRACE_LINE(8);
sself_weapon = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_weapon); /* set ContextID to 679 */
YYGML_ErrCheck_Variable_GetValue( YYASSET_REF(0x0000001D), g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &o09F585553_y, pSelf, pOther );
oWweapon0630EAB5B_y=YYRValue(/* First usage */o09F585553_y);
Variable_SetValue( /* context id changed from 677 to 680*/(*sself_weapon), g_VAR_y.val, (int)ARRAY_INDEX_NO_INDEX, &oWweapon0630EAB5B_y );
;

YY_STACKTRACE_LINE(9);
oWweapon0630EAB5B_image_angle=0;
sself_weapon = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_weapon); /* set ContextID to 681 */
Variable_SetValue( /* context id changed from 679 to 681*/(*sself_weapon), g_VAR_image_angle.val, (int)ARRAY_INDEX_NO_INDEX, &oWweapon0630EAB5B_image_angle );
;

YY_STACKTRACE_LINE(10);
oWweapon0630EAB5B_image_yscale=1;
sself_weapon = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_weapon); /* set ContextID to 682 */
Variable_SetValue( /* context id changed from 681 to 682*/(*sself_weapon), g_VAR_image_yscale.val, (int)ARRAY_INDEX_NO_INDEX, &oWweapon0630EAB5B_image_yscale );
;

YY_STACKTRACE_LINE(11);
oWweapon0FB327668_alarm=120;
sself_weapon = &((CInstanceBase*)pSelf)->GetYYVarRef(kVARID_self_weapon); /* set ContextID to 683 */
Variable_SetValue( /* context id changed from 682 to 683*/(*sself_weapon), g_VAR_alarm.val, (int)0, &oWweapon0FB327668_alarm );
;

YY_STACKTRACE_LINE(12);
YYRValue* sWself_weapon = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_weapon); /* set ContextID to 674 */
(*sWself_weapon)=-4;
;
;
} while(YYGML_WithIteratorNext( &___wi121___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther));
}
YYGML_DeleteWithIterator( &___wi121___, (YYObjectBase**) &pSelf, (YYObjectBase**) &pOther);
;
;
}
;
return _result;

}

#endif
YYRValue& gml_GlobalScript_dropWeapon( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  );
#ifndef __YYNODEFS
YYRValue& gml_GlobalScript_dropWeapon( CInstance* pSelf, CInstance* pOther, YYRValue& _result, int _count,  YYRValue** _args  )
{
YY_STACKTRACE_FUNC_ENTRY( "gml_GlobalScript_dropWeapon", 0 );
YYGML_array_set_owner( (int64)(intptr_t)pSelf );

_result.kind = VALUE_UNDEFINED; _result.ptr = NULL;

YY_STACKTRACE_LINE(2);
YYRValue* sWself_dropWeapon_4ABE50B2 = &((CInstanceBase*)pSelf)->GetYYVarRefL(kVARID_self_dropWeapon); /* set ContextID to 23 */
(PushContextStack( (YYObjectBase*)pSelf ), (*sWself_dropWeapon_4ABE50B2)) = (YYRValue(gml_Script_dropWeapon, pSelf)), PopContextStack();
;
return _result;
}
#endif
