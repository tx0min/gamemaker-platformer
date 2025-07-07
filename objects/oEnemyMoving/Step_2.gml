//) Wall collision
event_inherited();


//si se ha parado la entidad doy la vuelta
if(vx==0){
    vx=-1*facing*sp;
    
}
facing=sign(vx);



    



