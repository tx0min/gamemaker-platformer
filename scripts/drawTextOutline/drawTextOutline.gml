/// @description drawTextOutline(x,y,size,text,textcolor,outlinecolor,font) 
/// @param x
/// @param y
/// @param size
/// @param text
/// @param textcolor
/// @param outlinecolor
/// @param font
function drawTextOutline(argument0, argument1, argument2, argument3, argument4, argument5, argument6) {
	//Extreemly simple code to make your text have an outline


	var color;
	color=draw_get_color();

	draw_set_font(argument6);

	draw_set_color(argument5);
	for(i=argument0-argument2;i<=argument0+argument2;i+=1){
	    for(n=argument1-argument2;n<=argument1+argument2;n+=1){
	        draw_text(i,n,string_hash_to_newline(argument3));
	    }
	}
	draw_set_color(argument4);
	draw_text(argument0,argument1,string_hash_to_newline(argument3));

	draw_set_color(color);



}
