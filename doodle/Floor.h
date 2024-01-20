// Name:
// Assignment Name: Proto Type 1
// Course Number: CS120 & GAM 100
// Term & Year: Fall 2020

#pragma once
#include"doodle/doodle.hpp"
#include "Player.h"

using namespace doodle;

class Floor
{
private:
	Player& player1 = player1;
	double player_posx = 0;
	double player_posy = 0;
	double player_width = 50;
	double player_height = 50;

public:
	void Update();
	void Draw();

	Floor(Player& p) : player1{ p } {
		player_posx = player1.Player_posX;
		player_posy = player1.Player_posY;
		player_width = player1.player_width;
		player_height = player1.player_height;
	};
	int floor_posX{ random(100, 400) };
	int floor_posY{ random(100, 700) };
	int floor_width{ random(200, 400) };
	int floor_height{ random(200, 300) };
	double O = 50;
	double life = 150;

	bool isdead = false;
	bool fdamage = true;
	bool collision = false;

	Floor() = default;



};