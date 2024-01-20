//Name: 
//Assignment Name: Proto Type 1
//Course Number: CS120 & GAM 100
//Term & Year: Fall 2020

#include "Boss.h"
#include"doodle/doodle.hpp"

using namespace doodle;

void Boss::Update(Player &player1)
{
	
	if (FrameCount % 60 == 0)
	{
		Pattern_Checker = static_cast<int>(random(0, 2));
		std::cout << Pattern_Checker << std::endl;
	}

	switch (Pattern_Checker)
    {
        case 0: 
			pattern1(player1); 
			break;
        case 1: 
			Pattenr1_lifetime = 200;
			pattern2(player1); 
            break;
        case 2: 
			Pattenr1_lifetime = 300;
			pattern3(player1); 
            break;
	}
	   		 
}


void Boss::Draw()
{
	push_settings();
	set_rectangle_mode(RectMode::Corner);

	set_fill_color(0, 255, 0);
	draw_rectangle(BossBody_posX,BossBody_posY,BossBody_width,BossBody_height);

	set_fill_color(255,235,203);
	draw_ellipse(BossHead_posX, BossHead_posY, BossBody_width, BossBody_height);

	set_fill_color(255);

	switch (Pattern_Checker)
    {
        case 0: 
			set_fill_color(80, 188, 223); 
			break;
        case 1: 
			set_fill_color(0); 
			break;
	}
	
	draw_ellipse(BossLeft_eye_posx, eyes_posy, eye_width, eye_height);
	draw_ellipse(BossRight_eye_posx, eyes_posy, eye_width, eye_height);
	pop_settings();
	//std::cout << ElapsedTime << std::endl;
	
}



