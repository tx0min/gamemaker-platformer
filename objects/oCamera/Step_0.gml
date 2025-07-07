
if(instance_exists(oPlayer)){

     
    
    x = oPlayer.x;
    y = oPlayer.y;
    
    w=__view_get( e__VW.WView, 0 );
    rw=room_width;
    h=__view_get( e__VW.HView, 0 );
    rh=room_height;
    
    hboxl = w * hborder;
    hboxr= w - hboxl;
    vboxt= h * vborder;
    vboxb= h - vboxt;
    
    
    __view_set( e__VW.XView, 0, max(shakepower, x - w/2) );
    if(__view_get( e__VW.XView, 0 ) > rw - w - shakepower )  __view_set( e__VW.XView, 0, rw - w - shakepower );
    
    __view_set( e__VW.YView, 0, max(shakepower, y - h/2) )
    if(__view_get( e__VW.YView, 0 ) > rh - h - shakepower )  __view_set( e__VW.YView, 0, rh - h - shakepower );
    
    
    if (isshaking)
    {
        __view_set( e__VW.XView, 0, __view_get( e__VW.XView, 0 ) + (random_range(-shakepower,shakepower)) );
        __view_set( e__VW.YView, 0, __view_get( e__VW.YView, 0 ) + (random_range(-shakepower,shakepower)) );
    }

}

