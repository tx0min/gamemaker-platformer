/// @description fxDust([x,y,hrange,vrange,intensity,color,sprite])
/// @param [x
/// @param y
/// @param hrange
/// @param vrange
/// @param intensity
/// @param color
/// @param sprite]
function fxDust() {
	var xout=x;
	if(argument_count > 0) xout = argument[0];

	var yout=y;
	if(argument_count > 1) yout = argument[1];

	var hrange=4;
	if(argument_count > 2) hrange = argument[2];

	var vrange=2;
	if(argument_count > 3) vrange = argument[3];

	var intensity=5;
	if(argument_count > 4) intensity = argument[4];

	var color=c_white;
	if(argument_count > 5) color = argument[5];

	var sprite=sDust;
	if(argument_count > 6) sprite = argument[6];


	for (var i = 0; i < intensity; ++i) {
	    var dust=instance_create(xout + random_range(-hrange, hrange), yout + random_range(-vrange, vrange), oFxDust);
	    dust.color=color;
	    dust.sprite_index=sprite;
	}




}
