/// @description controla el efectoal tocar el suelo
var onGroundPrev = onGround;

event_inherited();

if (onGround && !onGroundPrev) {
    fxDust(x, bbox_bottom, round(sprite_width/2), 3, 20);
    xscale = stretch;
    yscale = squash;
}

