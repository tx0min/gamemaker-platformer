
var vxNew=0;
var vyNew=0;
// Handle sub-pixel movement
cx += vx;
cy += vy;
vxNew = round(cx);
vyNew = round(cy);
cx -= vxNew;
cy -= vyNew;
//log(vyNew);

//moviment vertical
repeat (abs(vyNew)) {
    if (position_meeting(x, y + sign(vyNew) , oParRail) ) {
        with (oParEntity) {
            //si el jugador está encima le modifico su velocidad
            if (place_meeting(x, y + 1, other)){
                y += vyNew;
            }           
        }
        y += vyNew;
       
    }
    else {
        vy *= -1;
        break;
    }
}

//moviment horizontal
repeat (abs(vxNew)) {
    if (position_meeting(x + sign(vxNew), y , oParRail) ) {
        with (oParEntity) {
            //si el jugador está encima le modifico su velocidad
            if (place_meeting(x, y + 1, other)){
                x += vxNew;
            }           
        }
        x += vxNew;
    }
    else {
        vx *= -1;
        break;
    }
}

