// Triangle.cpp : This file contains the function definitions for the class Circle
// 
//  
// Author: Cyle Dean Vernon Roberts 
// email: cdr0025@uah.edu 
// For: CS221-02, Spring 2023 
// Lecturer: Mrs. C. Delugach
#include "Triangle.h"
#include<iostream>
using namespace std;
Triangle::~Triangle()
{
	std::cout << "Good bye cruel world!You won't have the Triangle to kick around anymore!" << std::endl;
}
Triangle::Triangle()
{
	SetBorderColor("Heart Blue");
	SetFillColor("Sky Grey");
	side = 2;
	SetShapeType("triangle");
	SetNumSides(3);
}
Triangle::Triangle(int memside, string f_color, string b_color)   //It feels wrong to set values in both of my constructors. Instructions say "Set in both constructors:".
{
	side = 2;
	SetBorderColor("Heart Blue");
	SetFillColor("Sky Grey");
	SetFillColor(f_color);
	SetBorderColor(b_color);
	side = memside;
	SetShapeType("triangle");
	SetNumSides(3);
}
int Triangle::GetSides()
{
	return side;
}
void Triangle::SetSides(int arg_1)
{
	if (arg_1 < 0)
	{
		side = -1 * arg_1;
	}
	else
	{
		side = arg_1;
	}
	if (arg_1 == 0)
	{
		cout << "call the function again and enter a number other than 0 please. A default value of 2 was given to the sides." << endl;
		side = 2;
	}
}

float Triangle::GetArea()
{
	float half_perimeter = 0;
	float Area = 0;
	half_perimeter = (side + side + side) / 2;
	Area = pow(half_perimeter * (half_perimeter - side) * (half_perimeter - side) * (half_perimeter - side), 0.5);
	if (Area == 0)
	{
		cout << "The area could not be calculated. Please restart the program and enter valid side values." << endl;
		return 0;
	}
	return Area;
}
int Triangle::GetPerimeter()
{
	if (side == 0)
	{
		cout << "The perimeter could not be calculated. One or more of the sides cannot = 0." << endl;
		return 0;
	}
	int perimeter = 0;
	perimeter = side + side + side;
	return perimeter;
}