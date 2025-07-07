if(slidedir!="circle"){
    if(slidedir=="left"){
        xdir=-1;
        ydir=0;
    }else if(slidedir=="top"){
        xdir=0;
        ydir=-1;
    }else if(slidedir=="bottom"){
        xdir=0;
        ydir=1;
    }else if(slidedir=="right"){
        //right
        xdir=1;
        ydir=0;
    }    
    
    xini=__view_get( e__VW.XView, 0 ) + xinc;
    yini=__view_get( e__VW.YView, 0 ) + yinc;
    
    
    draw_rectangle_colour(xini, yini, xini+__view_get( e__VW.WView, 0 ) , yini+__view_get( e__VW.HView, 0 ), slidecolor, slidecolor, slidecolor, slidecolor, false);
    
    xinc+=xdir*slidesp;
    yinc+=ydir*slidesp;
    
    if(xini<=__view_get( e__VW.XView, 0 ) - __view_get( e__VW.WView, 0 ) || xini>=__view_get( e__VW.XView, 0 ) + __view_get( e__VW.WView, 0 ))
        instance_destroy();
        
    if(yini<=__view_get( e__VW.YView, 0 ) - __view_get( e__VW.HView, 0 ) || yini>=__view_get( e__VW.YView, 0 ) + __view_get( e__VW.HView, 0 ))
        instance_destroy();
}else{
    var xx=x;
    var yy=y;
    var xini=__view_get( e__VW.XView, 0 )
    var yini=__view_get( e__VW.YView, 0 ) ;
    
    if(instance_exists(oPlayerSpawn)){
        xx=oPlayerSpawn.x;
        yy=oPlayerSpawn.y;
    }
    inc+=slidesp;
    if(inc<__view_get( e__VW.WView, 0 )){
        draw_set_color(c_black);
        if(yy-inc > yini)  draw_rectangle(xini, yini, xini+__view_get( e__VW.WView, 0 ), yy-inc,false);
        if(yy+inc < yini+__view_get( e__VW.HView, 0 ))  draw_rectangle(xini, yy+inc, xini+__view_get( e__VW.WView, 0 ), yini+__view_get( e__VW.HView, 0 ),false);
        if(xx-inc > xini)  draw_rectangle(xini, yini, xx-inc, yini+__view_get( e__VW.HView, 0 ),false);
        if(xx+inc < xini+ __view_get( e__VW.WView, 0 ))  draw_rectangle(xx+inc, yini, xini+__view_get( e__VW.WView, 0 ), yini+__view_get( e__VW.HView, 0 ),false);
        
        draw_sprite_pos(sCircleSlider, 0, xx-inc, yy-inc, xx+inc, yy-inc, xx+inc, yy+inc, xx-inc, yy+inc, 1);
        
    }
    
    
}


