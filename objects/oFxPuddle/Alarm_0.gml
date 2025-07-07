/// @description generate random drops


for(var i=0;i<numdrops;i++){
    drop = ds_map_create();
    drop[? "xscale"]=random_range(0.7,1.2);
    drop[? "yscale"]=random_range(0.7,1.2);  
    drop[? "rot"]=random(360);
   
    var dw=drop[? "xscale"]*sprite_get_width(sDust);
    var dh=drop[? "yscale"]*sprite_get_height(sDust);
    var sw=sprite_width - dw;
    var sh=sprite_height - dh;
    
    if(position=="right"){
        drop[? "x"]= x - random(sw);
        drop[? "y"]=y + random_range(-sh/2,sh/2);
    }else if(position=="left"){
        drop[? "x"]=x + random(sw);
        drop[? "y"]=y + random_range(-sh/2,sh/2);
    }else if(position=="top"){
        drop[? "x"]=x + random_range(-sw/2,sw/2);
        drop[? "y"]=y + random(sh);
    }else if(position=="bottom"){
        drop[? "x"]=x + random_range(-sw/2,sw/2);
        drop[? "y"]=y - random(sh);
    }
    
   drops[i]=drop;

}


