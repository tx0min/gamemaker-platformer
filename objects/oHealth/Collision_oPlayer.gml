if(instance_exists(oGame)){
    if(oGame.currenthp < oGame.maxhp){
        oGame.currenthp++;
        instance_destroy();
        fxDust(x,y,5,5,5,c_red,sprHeart);
        audio_play_sound(sndHp,1,0);
    }
}

