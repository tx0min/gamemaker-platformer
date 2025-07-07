/// @description Position the bullet
if(vanish){
    image_alpha-=0.1;
    if(image_alpha<=0) instance_destroy();
}

//log(weight,grav);

if(weight!=0){
    //if(abs(vsp)<grav){
        if(vsp<10) vsp+= weight * grav ;
       // if (hsp>-0.2 && hsp<0.2) 
            //hsp = sign(hsp)*power(vsp,2);
        
    //}
    
}
//log(vsp);

x += hsp;
y += vsp;
image_angle = point_direction(xcenter,ycenter,x,y);

if(trail) fxDust(x,y);




