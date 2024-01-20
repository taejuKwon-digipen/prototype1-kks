// Name:
// Assignment Name: Proto Type 1
// Course Number: CS120 & GAM 100
// Term & Year: Fall 2020

#pragma once
#include<iostream>
class Player
{
private:
	double player_xspeed = 10.0;
	double player_yspeed = 10.0;



public:
	double Player_posX{ 0 };
	double Player_posY{ 0 };
	double player_width{ 50.0 };
	double player_height{ 50.0 };
	bool Left_key_pressed = false;
	bool Right_key_pressed = false;
	bool Down_key_pressed = false;
	bool Up_key_pressed = false;

	bool Left_key_released = false;
	bool Right_key_released = false;
	bool Down_key_released = false;
	bool Up_key_released = false;
	double player_life{ 100 };

	Player() = default;
	Player(double posx, double posy) :Player_posX{ posx }, Player_posY{ posy } {};
	void Update();
	void Draw();

};




