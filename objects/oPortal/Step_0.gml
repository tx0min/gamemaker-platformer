
if(instance_number(oParEnemy)==0 && instance_exists(oPlayer) && !opened){
    audio_play_sound(sndPortal,1,0);
    opened=true;
}

if(opened){
    image_alpha=1;
    if(place_meeting(x,y,oPlayer)){
        nextRoom();
    }
}else{
    image_alpha=0.5;
}

