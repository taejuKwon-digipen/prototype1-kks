// Name:
// Assignment Name: Proto Type 1
// Course Number: CS120 & GAM 100
// Term & Year: Fall 2020

#include "Sphere.h"

void Sphere::update()
{
	
   
		 posx = player_posx + cos(degree_angle) * radiance;
		 posy = player_posy + sin(degree_angle) * radiance;
		 radiance = radiance - 10;
			
	life = life - DeltaTime*200;
	if (life < 0)
	{
		isdaed = true;
	}
	
	
}


void Sphere::draw()
{
	if (!isdaed)
	{
		push_settings();
		apply_translate(posx, posy);
		apply_rotate(degree_angle);
		set_fill_color(80, 188, 223);
		draw_rectangle(0, 0, 70, 10);
		pop_settings();
	}
		
}

