/// @description  Handle gravity
if (!onGround) {
   vy = Approach(vy, vyMax, gravNorm);
    
}




///Player Collision
if(place_meeting(x,y,oPlayer)){
   playerHit(id);
}


