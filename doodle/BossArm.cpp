// Name:
// Assignment Name: Proto Type 1
// Course Number: CS120 & GAM 100
// Term & Year: Fall 2020

#include "BossArm.h"
void BossArm::update()
{
	
	width = width + 50;
	if (width > 2000)
	{
		width = 10;
	}
}
void BossArm::draw()
{
	push_settings();
	set_fill_color(0);
	draw_rectangle(posx, posy, width, height);
	pop_settings();

}