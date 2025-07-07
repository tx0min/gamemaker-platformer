draw_self();
if(numdrops){
    if(numdrops>0){
        if(is_array(drops)){
            for (var i=0;i< array_length_1d(drops);i++){
                 var drop=drops[i];
                 draw_sprite_ext(sDust,0,drop[? "x"],drop[? "y"],drop[? "xscale"],drop[? "yscale"],drop[? "rot"],image_blend,1);
           
            }
            
        }
    }
}

