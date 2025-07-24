// Shape.cpp : This file contains the function definitions for the class Shape
// 
//  
// Author: Cyle Dean Vernon Roberts 
// email: cdr0025@uah.edu 
// For: CS221-02, Spring 2023 
// Lecturer: Mrs. C. Delugach
#pragma once
#ifndef Shape_h
#define Shape_h
#include <string>
using namespace std;
class Shape
{
private:
//start of private

string shapeType = "";
int numSides = 0;
string fillColor = "";
string borderColor = "";
//end of private

public:
//start of public
Shape();
~Shape();
string GetFillColor();
string GetBorderColor();
void SetFillColor(string Fill_Color_arg);
void SetBorderColor(string Bor_Color);
string GetShapeType();
int GetNumSides();
float GetArea();
int GetPerimeter();

//end of public
protected:
	void SetShapeType(string type);
	void SetNumSides(int side_val);
};// spent way too much time on this for it to probably not work because of a misunderstanding/dissonance. 
#endif