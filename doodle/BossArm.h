// Name:
// Assignment Name: Proto Type 1
// Course Number: CS120 & GAM 100
// Term & Year: Fall 2020

#pragma once

#include"doodle/doodle.hpp"

using namespace doodle;

constexpr int W = 400;
constexpr int H = 200;

struct BossArm {
    double posx{};
    double posy{};
    double width{ W };
    double height{ H };
    BossArm() = default;
    BossArm(double x, double y) : posx{ x }, posy{ y } {};
    void update();
    void draw();
};