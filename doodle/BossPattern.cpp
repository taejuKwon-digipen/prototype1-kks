// Name:
// Assignment Name: Proto Type 1
// Course Number: CS120 & GAM 100
// Term & Year: Fall 2020

#include "BossPattern.h"
 void pattern1(Player &player )
{
	 Player player1{400,400};
	 sphere.push_back(Sphere{player1,random(0.0,360.0) });
	 for (int i = 0; i < sphere.size() - 1; i++)
	 {
		 if (sphere[i].isdaed == false)
		 {
			 sphere[i].update();
			 double distance = sqrt(pow(sphere[i].posx - player.Player_posX, 2) + pow(sphere[i].posy - player.Player_posY, 2) * 1.0);
			 if (distance < 30)
			 {
				 sphere[i].isdaed = true;
				 player.player_life = player.player_life - 1;
			 }

			 sphere[i].draw();
		 }

	 }
	 draw_text(std::to_string(player.player_life), 140, 140);
		
}
 void pattern2(Player& player)
 {
	 auto Size = sphere.size() - 1;
	 if (!sphere.empty())
	 {
		 while (Size > 0)
		 {
			 sphere.pop_back();
			 Size--;
		 }
		 BossArm1.update();
		 double distance = sqrt(pow(BossArm1.posx - BossArm1.width - player.Player_posX, 2) + pow(BossArm1.posy - player.Player_posY, 2) * 1.0);
		 if (distance < 50)
		 {
			 player.player_life = player.player_life - 10;
		 }
		 draw_text(std::to_string(static_cast<int>(player.player_life)), 140, 140);
		 std::cout << BossArm1.posx - BossArm1.width << ' ' << BossArm1.posy << std::endl;
		 BossArm1.draw();


	 }
 }
void pattern3(Player &player)
{
	if (!sphere.empty())
	{
		for (auto i = sphere.size() - 1; i > 0; i--)
		{
			sphere.pop_back();
		}
	}

	rfloor.push_back(Floor{});

	int j = 0;
	rfloor[j].Update();

	if (rfloor[j].collision == true)
	{
		rfloor[j].isdead = true;
		player.player_life = player.player_life - 1;
	}

	while (j < rfloor.size() - 1)
	{
		if (rfloor[j].isdead == true)
		{
			rfloor[j + 1].Update();
			rfloor[j + 1].Draw();
		}
		j += 1;
	}
	
}