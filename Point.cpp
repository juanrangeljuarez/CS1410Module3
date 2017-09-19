// File: Point
// Created by Juan Rangel Juarez on 9/19/17 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;

// Global, Constants, and Structures
const int MAX_X = 10;
const int MAX_Y = 10;
const float IN_CM =2.54;

struct Point
{
    float x;    // x-coordinate
    float y;    // y-coordinate
};

// Prototypes
void showPoint(const struct Point &p);
void updatePoint(struct Point &p);
struct Point CreatePoint();
struct Point CreatePointValue(float x = 0.0, float y = 0.0);
inline float InchesToCm(float val){return (val * IN_CM);};


// Main Program Program
int main()
{
    Point p1 = {2.5, 3.1};
    Point p2,p3;
    showPoint(p1);
    updatePoint(p1);
    showPoint(p1);

    p2 = CreatePoint();
    showPoint(p2);

    p3 = CreatePointValue(1.5,7.9);
    showPoint(p3);

    p3 = CreatePointValue(4.5,1.9);
    showPoint(p3);
    p3.x = InchesToCm(1.5);
    showPoint(p3);
    return 0;
}
// Function Definitions
// Take a constaant address of a structure Point.
// You cannot modify the content of the structure
void showPoint(const struct Point &p)
{
    cout << "X-coordinate is: " << p.x <<endl;
    cout << "Y-coordinate is: " << p.y <<endl;
}

void updatePoint(struct Point &p)
{
    // Update x and y by incrementing their val
    // by 1
    p.x += 1.0;
    p.y += 1.0;
}

struct Point CreatePoint()
{
    Point p;
    p.x =0.0;
    p.y = 0.0;
    return p;
}

// Take two optopmal input values. If no vaalues are provided
struct Point CreatePointValue(float x, float y)
{
    Point p;
    p.x = x;
    p.y = y;
    return  p;
}