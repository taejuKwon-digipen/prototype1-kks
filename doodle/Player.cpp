// Name:
// Assignment Name: Proto Type 1
// Course Number: CS120 & GAM 100
// Term & Year: Fall 2020

#include "Player.h"
#include"doodle/doodle.hpp"
#include<iostream>
using namespace doodle;


void Player::Update()
{

	
	if (Left_key_pressed ==true)
	{
	Player_posX = Player_posX - player_xspeed;
	
	}
	else if (Right_key_pressed == true)
	{
		Player_posX = Player_posX + player_xspeed;
		
	}
	else if (Down_key_pressed == true)
	{
		Player_posY = Player_posY + player_yspeed;
		
	}
	else if (Up_key_pressed == true)
	{
		Player_posY = Player_posY - player_yspeed;
	
	}
	else
	{
		Player_posX = Player_posX + 0;
		Player_posY = Player_posY + 0;
	}


	if (Left_key_released == true)
	{
		Player_posX = Player_posX +0;
		
	}
	else if (Right_key_released == true)
	{
		Player_posX = Player_posX + 0;
	}
	else if (Down_key_released == true)
	{
		Player_posY = Player_posY + 0;
		
	}
	else if (Up_key_released == true)
	{
		Player_posY = Player_posY + 0;
	
	}
	else
	{
		Player_posX = Player_posX + 0;
		Player_posY = Player_posY + 0;
	}


		
		
	}
		//keywaspressed = doodle::KeyIsPressed;
	
	
	


void Player::Draw()
{    
	push_settings();
	if (player_life > 0)
	{
		if (player_life == 100)
		{
			set_fill_color(255, 0, 0);
		}
		if (player_life > 50 && player_life <= 99)
		{
			set_fill_color(0, 255, 0);
		}
		if (player_life > 0 && player_life <= 49)
		{
			set_fill_color(0, 0, 255);
		}
		draw_rectangle(Player_posX, Player_posY, player_width, player_height);
		pop_settings();
	}
	
};

/*
void Player::OnKeyReleased(KeyboardButtons button)
{
	
	if (button == KeyboardButtons::Left)
	{
		Player_posX = Player_posX + 10;
		//std::cout << "Player Posx :" << Player_posX << ' ' << "Player Posy" << Player_posY << std::endl;
		//std::cout << "Key is Pressed!" << std::endl;
	}
	if (button == KeyboardButtons::Right)
	{
		Player_posX = Player_posX - 10;
		//std::cout << "Player Posx :" << Player_posX << ' ' << "Player Posy" << Player_posY << std::endl;
		//std::cout << "Key is Pressed!" << std::endl;
	}
	if (button == KeyboardButtons::Up)
	{
		Player_posY = Player_posY - 10;
		//std::cout << "Player Posx :" << Player_posX << ' ' << "Player Posy" << Player_posY << std::endl;
		//std::cout << "Key is Pressed!" << std::endl;
	}
	if (button == KeyboardButtons::Down)
	{
		Player_posY = Player_posY + 10;
		//std::cout << "Player Posx :" << Player_posX << ' ' << "Player Posy" << Player_posY << std::endl;
		//std::cout << "Key is Pressed!" << std::endl;
	}
	
}
*/




