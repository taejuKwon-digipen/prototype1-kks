// Name:
// Assignment Name: Proto Type 1
// Course Number: CS120 & GAM 100
// Term & Year: Fall 2020

#include<iostream>
#include "Sketch.h"
#include <doodle/drawing.hpp>
#include <doodle/environment.hpp>
#include <doodle/input.hpp>
#include <doodle/random.hpp>
#include <doodle/window.hpp>
#include"Sphere.h"

using namespace doodle;
[[noreturn]] void error(const std::string& s) { throw std::runtime_error(s); }
Player player1{400,400};
Boss boss;
void on_key_released(KeyboardButtons button) //If Player Press ESC button Quit Program

{
    if (button == KeyboardButtons::Escape)
    {
        close_window();
    }
}

/*
bool Left_key_pressed = false;
bool Right_key_pressed = false;
bool Down_key_pressed = false;
bool Up_key_pressed = false;
*/

void key_pressed(KeyboardButtons button) //If Player Press ESC button Quit Program
{
    if (button == KeyboardButtons::Left)
    {
        player1.Left_key_pressed = true;
    }
    else if (button == KeyboardButtons::Right)
    {
        player1.Right_key_pressed = true;
    }
    else if (button == KeyboardButtons::Up)
    {
        player1.Up_key_pressed = true;
    }
    else if (button == KeyboardButtons::Down)
    {
        player1.Down_key_pressed = true;
    }
    
}

void key_released(KeyboardButtons button) 
{
    if (button == KeyboardButtons::Left)
    {
        player1.Left_key_pressed = false;
    }
    else if (button == KeyboardButtons::Right)
    {
        player1.Right_key_pressed = false;
    }
    else if (button == KeyboardButtons::Up)
    {
        player1.Up_key_pressed = false;
    }
    else if (button == KeyboardButtons::Down)
    {
        player1.Down_key_pressed = false;
    }

}



void Sketch::setup()
{
    create_window("Team KKS", 1000, 1000);
    set_frame_of_reference(FrameOfReference::LeftHanded_OriginTopLeft); //Change FrameOfReference like P5.js
    set_callback_key_pressed(&key_pressed);
    set_callback_key_released(&key_released);
   
 
   
}

void Sketch::draw()
{
    
    clear_background(200);
    set_rectangle_mode(RectMode::Center);
    player1.Update();
    boss.Update(player1);
    player1.Draw();
    boss.Draw();
    
}









