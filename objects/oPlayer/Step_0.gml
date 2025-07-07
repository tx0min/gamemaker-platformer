/// @description Movement

// Input //////////////////////////////////////////////////////////////////////

var kLeft, kRight, kUp, kDown, kJump, kJumpRelease, tempAccel, tempFric;
if(oGame.controltype=="mouse"){
    kLeft        = keyboard_check(vk_left) || keyboard_check(ord("A"))  ;
    kRight       = keyboard_check(vk_right) || keyboard_check(ord("D")) ;
    kUp          = keyboard_check(vk_up) || keyboard_check(ord("W")) ;
    kDown        = keyboard_check(vk_down) || keyboard_check(ord("S")) ;
    
    kJump        = keyboard_check_pressed(vk_space) || keyboard_check_pressed(vk_up) || keyboard_check_pressed(ord("W"));
    kJumpRelease = keyboard_check_released(vk_space)|| keyboard_check_released(vk_up) || keyboard_check_released(ord("W"));
}else{
    if(global.padindex!=noone){
        kLeft        = gamepad_axis_value(global.padindex,gp_axislh)<0 || gamepad_button_check(global.padindex,gp_padl)  ;
        kRight       = gamepad_axis_value(global.padindex,gp_axislh)>0 || gamepad_button_check(global.padindex,gp_padr) ;
        kUp          = gamepad_axis_value(global.padindex,gp_axislv)>0 || gamepad_button_check(global.padindex,gp_padu)  ;
        kDown        = gamepad_axis_value(global.padindex,gp_axislv)<0 || gamepad_button_check(global.padindex,gp_padd)  ;
        
        kJump        = gamepad_button_check_pressed(global.padindex,gp_shoulderl);
        kJumpRelease = gamepad_button_check_released(global.padindex,gp_shoulderl);  
    }
}
// Movement ///////////////////////////////////////////////////////////////////

// Apply the correct form of acceleration and friction
if (onGround) {
    tempAccel = groundAccel;
    tempFric  = groundFric;
} else {
    tempAccel = airAccel;
    tempFric  = airFric;
}

// Reset wall cling
if ((!cRight && !cLeft) || onGround) {
    canStick = true;
    sticking = false;
    
}   

//reset double jumps
if(onGround || cRight || cLeft){
    jumps=maxjumps;
}

// Cling to wall
if (((kRight && cLeft) || (kLeft && cRight)) && canStick && !onGround) {
    alarm[0] = clingTime;
    sticking = true; 
    canStick = false;       
}

// Handle gravity
if (!onGround) {
    if ((cLeft || cRight) && vy >= 0) {
        // Wall slide
        vy = Approach(vy, vyMax, gravSlide);
    } else {
        // Fall normally
        vy = Approach(vy, vyMax, gravNorm);
    }
}

// Left 
if (kLeft && !kRight && !sticking) {
    facing = -1;
    state  = RUN;
    
    // Apply acceleration left
    if (vx > 0)
        vx = Approach(vx, 0, tempFric);   
    vx = Approach(vx, -vxMax, tempAccel);
}

// Right 
if (kRight && !kLeft && !sticking) {
    facing = 1;
    state  = RUN;
    
    // Apply acceleration right
    if (vx < 0)
        vx = Approach(vx, 0, tempFric);   
    vx = Approach(vx, vxMax, tempAccel);
}

// Friction
if (!kRight && !kLeft){
    vx = Approach(vx, 0, tempFric); 
    state = IDLE;
}
// Wall jump
if (kJump && cLeft && !onGround) {

    yscale = stretch;
    xscale = squash;
    
    if (kLeft) {
        vy = -jumpHeight * 1.1;
        vx =  jumpHeight * .75;
    } else {
        vy = -jumpHeight * 1.1;
        vx =  vxMax;
    }  
}


if (kJump && cRight && !onGround) {
 
    yscale = stretch;
    xscale = squash;
    
    if (kRight) {
        vy = -jumpHeight * 1.1;
        vx = -jumpHeight * .75;
    } else {
        vy = -jumpHeight * 1.1;
        vx = -vxMax;
    }  
}
 
// Jump 
if (kJump) { 
    audio_play_sound(sndJump,1,0);
    if (onGround || jumps >0){
        vy = -jumpHeight;
        yscale = stretch;
        xscale = squash;
     } 
     jumps--;
          
    // Variable jumping
} else if (kJumpRelease) { 
    if (vy < 0)
        vy *= 0.25;
}

// Jump state
if (!onGround)
    state = JUMP;

    
// Swap facing during wall slide
if (cRight && !onGround){
    facing = -1;
    fxDust(bbox_right, y);
}else if (cLeft && !onGround){
    facing = 1;
    fxDust(bbox_left,y);
}
    



///Squash and Stretch
/// Squash + stretch

xscale = Approach(xscale, 1, 0.05);
yscale = Approach(yscale, 1, 0.05);

///Death by fall
if(y - sprite_get_yoffset(sprite_index) > room_height){
    death();
}

