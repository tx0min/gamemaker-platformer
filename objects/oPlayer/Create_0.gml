// Inherit oParEntity variables
event_inherited();

facing = 1;

// Movement ///////////////////////////////////////////////////////////////////

// Multiplier
m = 0.8;
jumpm=1;

groundAccel = 1.0  * m;
groundFric  = 1.9  * m;
airAccel    = 0.75 * m;
airFric     = 0.1  * m;
vxMax       = 6.5  * m;
vyMax       = 10.0 * m;
jumpHeight  = 12.0  * jumpm;
gravNorm    = global.grav  ;
gravSlide   = global.grav/2 ; 

clingTime   = 4.0 * m;

// Misc ///////////////////////////////////////////////////////////////////////

// States
IDLE     = 10;
RUN      = 11;
JUMP     = 12;


// Initialize properties
state  = IDLE;
facing = image_xscale; // Change xscale in editor to adjust initial facing

// For squash + stretch
xscale = 1;
yscale = 1;

stretch=1.3;
squash=2-stretch;


//double jump
maxjumps=2;
jumps=maxjumps;

canclimb=17;




//color de la sangre
color=make_colour_rgb(232,253,77);

invincible=false;
blinkmultiplier=1;



