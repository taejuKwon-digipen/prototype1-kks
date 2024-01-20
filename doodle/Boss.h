
// Name:
// Assignment Name: Proto Type 1
// Course Number: CS120 & GAM 100
// Term & Year: Fall 2020

#pragma once
#include"doodle/doodle.hpp"
#include"BossPattern.h"
#include<vector>
#include<iostream>

using namespace doodle;

constexpr int BossB_x = 700;
constexpr int BossB_y = 400;
constexpr int BossB_w = 300;
constexpr int BossB_h = 600;
constexpr int BossH_WH = 100;
constexpr int BossH_x = 850;
constexpr int BossH_y = 200;
constexpr int BossLE_x = 750;
constexpr int BossE_y = 300;
constexpr int ew = 70;
constexpr int eh = 40;
constexpr int BossRE_x = 850;

class Boss
{
private:

	double BossBody_posX{ BossB_x };
	double BossBody_posY{ BossB_y };
	double BossBody_width{ BossB_w };
	double BossBody_height{ BossB_h };

	double BossHead_posX{ BossH_x };
	double BossHead_posY{ BossH_y };
	double BossHead_w{ BossH_WH };
	double BossHead_h{ BossH_WH };

	double BossLeft_eye_posx{ BossLE_x };
	double eyes_posy{ BossE_y };
	double eye_width{ ew };
	double eye_height{ eh };
	double BossRight_eye_posx{ BossRE_x };
	int Pattern_Checker = 1;
	bool Is_Pattern1_activate = false;
	bool Is_Pattern2_activate = false;
	bool Is_Pattern3_activate = false;
	double Pattenr1_lifetime = 200;


public:

	Boss() = default;
	void Update(Player& player1);
	void Draw();

};