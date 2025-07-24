// Shape.cpp : This file contains the function definitions for the class Shape
// 
//  
// Author: Cyle Dean Vernon Roberts 
// email: cdr0025@uah.edu 
// For: CS221-02, Spring 2023 
// Lecturer: Mrs. C. Delugach
#include "Shape.h"
#include <string>
#include<iostream>

using namespace std;

Shape::~Shape()
{
	cout << "This is a parting message." << endl;
}
Shape::Shape()
{
	shapeType = "undefined shape";
	numSides = 0;
	borderColor = "clear";
	fillColor = "clear";
}
string Shape::GetFillColor()
{
	return fillColor;
}
string Shape::GetBorderColor()
{
	return borderColor;
}
void Shape::SetFillColor(string Fill_Color_arg)
{
	fillColor = Fill_Color_arg;
}
void Shape::SetBorderColor(string Bor_Color_arg)
{
	borderColor = Bor_Color_arg;
}
string Shape::GetShapeType()
{
	return shapeType;
}
int Shape::GetNumSides()
{
	return numSides;
}
void Shape::SetShapeType(string type)
{
	shapeType = type;
}
void Shape::SetNumSides(int side_val)
{
	numSides = side_val;
}
float Shape::GetArea() 
{
	return 0.0;
}
int Shape::GetPerimeter()
{
	return 0;
}