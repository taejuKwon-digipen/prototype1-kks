// Name:
// Assignment Name: Proto Type 1
// Course Number: CS120 & GAM 100
// Term & Year: Fall 2020

#pragma once
#include"doodle/doodle.hpp"
#include"Player.h"
#include<math.h>
#include<iostream>
using namespace doodle;
class Sphere
{
private:
	Player &player1=player1;
	double player_posx = player1.Player_posX;
	double player_posy = player1.Player_posY;
	double angle = 0;
	double degree_angle = to_radians(angle);
	double radiance = 600.0;
	double posx = player_posx + cos(degree_angle)*radiance;
	double posy = player_posy + sin(degree_angle) * radiance;
	double slope = (player_posy-posy)/(player_posx-posx);
	double intercept = posy - (slope * posx);
	double life = 250;
	
	

public:
	bool isdaed = false;
	Sphere(Player& p, double angle1) : player1{ p }, angle{angle1} {};
	friend void pattern1(Player& player);
	void update();
	void draw();
	

};

