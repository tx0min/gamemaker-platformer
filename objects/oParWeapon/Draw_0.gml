
 var alpha=1;
 if(disabled) alpha=0.5;
 draw_sprite_ext(sprite_index,0,x,y,image_xscale,image_yscale,image_angle,c_white ,alpha);
 
 if(inuse && drawPath){
    drawBulletPath(xout,yout,image_angle,bulletSpeed,bulletWeight,pathColor,pathSize,pathGap,pathDotsize);
 }
 //draw_circle(xout,yout,10,false);
      
    


