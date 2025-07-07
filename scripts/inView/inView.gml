/// @description inView(x,y)
/// @param x
/// @param y
function inView(argument0, argument1) {
	var xx=argument0;
	var yy=argument1;

	if (xx < __view_get( e__VW.XView, 0 ) ) return false;
	if (xx > __view_get( e__VW.XView, 0 ) + __view_get( e__VW.WView, 0 )) return false;
	if (yy < __view_get( e__VW.YView, 0 ) ) return false;
	if (yy > __view_get( e__VW.YView, 0 ) + __view_get( e__VW.HView, 0 )) return false;


	//log(xx,yy);
	//log(view_xview,view_wview,view_yview,view_hview);
	return true;




}
