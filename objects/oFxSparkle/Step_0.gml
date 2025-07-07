var tmp=y;

if(vsp<grav)  vsp+=0.1;
if(hsp>-0.2 && hsp<0.2)  hsp=-power(vsp,2);

x += hsp;
y += vsp;

//image_angle+=rotsp;
image_angle = point_direction(xcenter,ycenter,x,y);

if(fadeaway){
    image_alpha-=fadespeed;
    if(image_alpha<=0) instance_destroy();
}

//log(x,y);


