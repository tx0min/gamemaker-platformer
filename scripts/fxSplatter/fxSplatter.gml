function fxSplatter() {
	//fxSplatter([x,y,quantity,hrangeleft,hrangeright,vrangetop,vrangebottom,color,fadeaway])

	var xout=x;
	if(argument_count > 0) xout = argument[0];

	var yout=y;
	if(argument_count > 1) yout = argument[1];

	var quantity=10;
	if(argument_count > 2) quantity = argument[2];

	var hrangeleft=4;
	if(argument_count > 3) hrangeleft = argument[3];

	var hrangeright=4;
	if(argument_count > 4) hrangeright = argument[4];

	var vrangetop=4;
	if(argument_count > 5) vrangetop = argument[5];

	var vrangebottom=4;
	if(argument_count > 6) vrangebottom = argument[6];

	var color=c_white;
	if(argument_count > 7) color = argument[7];

	var fadeaway=false;
	if(argument_count > 8) fadeaway = argument[8];


	for (var i = 0; i < quantity; ++i) {
	    var splat=instance_create(xout , yout , oFxSplatter);
	    splat.hrangeleft=hrangeleft;
	    splat.hrangeright=hrangeright;
	    splat.vrangetop=vrangetop;
	    splat.vrangebottom=vrangebottom;
	    splat.color=color;
	    splat.fadeaway=fadeaway;
    
	}





}
