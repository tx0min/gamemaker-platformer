//draw HP
draw_set_halign(fa_left);
draw_set_valign(fa_top);

 top=__view_get( e__VW.YView, 0 );
 left=__view_get( e__VW.XView, 0 );
 width=__view_get( e__VW.WView, 0 );
 height=__view_get( e__VW.HView, 0 );



if(instance_exists(oPlayer) && instance_exists(oGame)){
    
    var sprw=sprite_get_width(sprHeart);
    
    drawTextOutline(left+sprw,top+10,1,"HP",c_white,c_black,fntBase);
   
    var vida=oGame.currenthp;
    
    //log("MAX:",oGame.maxhp,"HP:",oGame.currenthp);
    //hearts
    for(var i=0;i<oGame.maxhp;i++){
        var color=c_red;
        var alpha=1;
        if(i>=vida){
            color=c_white;
            alpha=0.5;
        }
        draw_sprite_ext(sprHeart,0, left+80 + 2+ (sprw*i), top+sprw+2, 1,1,0, color,alpha);
    }   
    
    //weapon 
    
    drawTextOutline(left+sprw,top+50,1,"Weapon",c_white,c_black,fntBase);
    if(oGame.weapon!=noone){
        drawTextOutline(left+150,top+75,1,oGame.weapon.name,c_black,c_white,fntDebug);
        draw_sprite_ext( oGame.weapon.sprite_index, 0, left+160,top+60, 0.6, 0.6, 0, c_white, 1 );
    }
     
    
    
}



// Display room name

draw_set_font(fntDebug);
draw_set_halign(fa_right);
draw_set_valign(fa_top);
draw_set_color(c_black);

if(global.debug)
    draw_text(left+width-16, top+16, string_hash_to_newline(string("Room [Z/X]: " + string(room_get_name(room)) + " / CONTROL [C]:" + controltype +" / Restart [R] / DEBUG [G]")));


if(gameover){
    draw_set_halign(fa_center);
    draw_set_valign(fa_middle);
    drawTextOutline(left+width/2,top+height/2 -20,1,"GAME OVER",c_white,c_black,fntBig);
    drawTextOutline(left+width/2,top+height/2+20,1,"Press R to restart",c_black,c_white,fntBase);
        
}

