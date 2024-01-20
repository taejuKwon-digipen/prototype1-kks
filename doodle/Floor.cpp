// Name:
// Assignment Name: Proto Type 1
// Course Number: CS120 & GAM 100
// Term & Year: Fall 2020

#include "Floor.h"
#include "doodle/doodle.hpp"
#include <iostream>

using namespace doodle;

void Floor::Update() {

	life = life - DeltaTime * 100;
	if (life < 0)
	{
		isdead = true;
		fdamage = true;
	}

	O = O + (DeltaTime * 70);

	if (fdamage == true)
	{
		if (player_posx <= floor_posX + floor_width &&
			player_posx + player_width >= floor_posX &&
			player_posy >= floor_posY - floor_height &&
			player_posy - player_height <= floor_posY)
		{
			collision = true;
		}
		else
		{
			collision = false;
		}
	}

}

void Floor::Draw() {

	if (!isdead)
	{
		push_settings();
		set_outline_color(0, 0, 255);
		set_fill_color(0, 0, 255, O);
		draw_rectangle(floor_posX, floor_posY, floor_width, floor_height);
		pop_settings();
	}

}