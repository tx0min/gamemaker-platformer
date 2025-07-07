var tmp=y;

if(vsp<grav)  vsp+=0.1;
if(hsp>-0.2 && hsp<0.2)  hsp=-power(vsp,2);

x += hsp;
y += vsp;

if(image_index>0)
    image_angle+=rotsp;
else
    image_angle = point_direction(xcenter,ycenter,x,y);

if(fadeaway){
    image_alpha-=fadespeed;
    if(image_alpha<=0) instance_destroy();
}


//si la siguiente posicion colisionaría
//if(place_meeting(x+hsp,y+vsp,oParSolid)){

    var oh=instance_position(x+hsp,y,oParSolid);
    var ov=instance_position(x,y+vsp,oParSolid);
    
    if(oh xor ov){
        var pos="";
        if(oh){
            if(hsp>0) pos="left";
            else pos="right";
            drawWallPuddle(oh,pos,color);
        }else{
            if(vsp>0) pos="top";
            else pos="bottom";
            drawWallPuddle(ov,pos,color);
        }
        
        
    }

       
    if(oh || ov) instance_destroy();
//}

//log(x,y);


