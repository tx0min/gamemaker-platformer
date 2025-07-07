//log(image_yscale);
image_yscale=Approach(image_yscale,finalyscale,0.01);
image_xscale=Approach(image_xscale,finalxscale,0.01);

if(position=="left" ||position=="right"){
    var met=true;
    
    if(position=="left"){
        met=position_meeting(x-1, y + round(sprite_yoffset) + 1, oParSolid) || !position_meeting(x+1, y + round(sprite_yoffset) + 1, oParSolid);
    }else if(position=="right"){
        met=position_meeting(x+1, y + round(sprite_yoffset) + 1, oParSolid) || !position_meeting(x-1, y + round(sprite_yoffset) + 1, oParSolid);
    }
    
    if(!met){
       y=Approach(y,yend,1);
    }
}

