// Circle.cpp : This file contains the function definitions for the class Circle
// 
//  
// Author: Cyle Dean Vernon Roberts 
// email: cdr0025@uah.edu 
// For: CS221-02, Spring 2023 
// Lecturer: Mrs. C. Delugach

#include "Circle.h"
#include <iostream>
#include <math.h>

using namespace std;

Circle::~Circle()//destructor
{
	cout << "Help me, I'm melting!" << endl;
}
Circle::Circle() //constructor 1
{
	radius = 1;
	SetBorderColor("Falu");
	SetFillColor("Wenge");
	SetShapeType("circle");
	SetNumSides(1);
}
Circle::Circle(int memradius, string memfillColor, string memborderColor) //constructor 2
{
	radius = 1;
	SetBorderColor("Falu");
	SetFillColor("Wenge");
	SetNumSides(1);
	SetShapeType("circle");
	radius = memradius;
	SetBorderColor(memborderColor);
	SetFillColor(memfillColor);
}
int Circle::GetRadius()
{
	return radius;
}
void Circle::SetRadius(int arg_1)
{
	if (arg_1 < 0)
	{
		radius = -1 * arg_1;
	}
	else
	{
		radius = arg_1;
	}
}
float Circle::GetArea()
{
	float area = 0;
	if (radius == 0)
	{
		cout << "radius is zero which means the Circle is undefined." << endl
			<< "please restart and enter a valid radius." << endl;
		return 0.0;
	}
	else
	{
		area = PI * pow(radius, 2);
		return area;
	}

}
int Circle::GetPerimeter()
{
	if (radius == 0)
	{
		cout << "radius is zero which means the Circle is undefined." << endl
			<< "please restart and enter a valid radius." << endl;
		return 0;
	}
	float perimeter_f = 0;
	int perimeter = 0;
	perimeter_f = 2 * PI * radius;
	perimeter_f = round(perimeter_f);
	perimeter = static_cast<int>(perimeter_f);
	return perimeter;
}