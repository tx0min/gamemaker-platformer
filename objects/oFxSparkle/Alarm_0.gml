/// @description Initialize parameters
hsp = random_range(-hrangeleft, hrangeright);
vsp = random_range(-vrangetop, vrangebottom);

image_angle=point_direction(xcenter,ycenter,xcenter+hsp,ycenter+vsp);

rotsp = irandom_range(-30, 30); 

image_alpha=1;
/*image_xscale = random_range(0.3, 1.2);
image_yscale = random_range(0.3, 1.2);*/
image_blend = color;

/* */
/*  */
