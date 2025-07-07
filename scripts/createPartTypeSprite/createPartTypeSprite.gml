/// @description createPartTypeSprite(sprite, blend, min_life, max_life, min_scale, max_scale, scaling )
/// @param sprite
/// @param  blend
/// @param  min_life
/// @param  max_life
/// @param  min_scale
/// @param  max_scale
/// @param  scaling 
function createPartTypeSprite(argument0, argument1, argument2, argument3, argument4, argument5, argument6) {

	var sprite=argument0;
	var blend=argument1;
	var min_life=argument2;
	var max_life=argument3;
	var min_scale=argument4;
	var max_scale=argument5;
	var scaling=argument6;

	var type=part_type_create();

	part_type_alpha2(type, .75, 0);
	part_type_sprite(type,sprite,false,true,false);
	part_type_blend(type,blend);
	part_type_size(type,min_scale,max_scale,scaling,0);
	part_type_life(type,min_life,max_life);
	part_type_orientation(type,0,360,0,0,0);

	return type;




}
