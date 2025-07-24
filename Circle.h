#pragma once
// Circle.h : This file contains the Circle Class definition 
// 
//  
// Author: Cyle Dean Vernon Roberts 
// email: cdr0025@uah.edu 
// For: CS221-02, Spring 2023 
// Lecturer: Mrs. C. Delugach

#pragma once
#ifndef Circle_h
#define Circle_h
#include "Shape.h"
#include <iostream>
#include <math.h>
#include <string>
using namespace std;
class Circle: public Shape
{//beginning of class
private:
	//beginning of private data
	int radius;
	const float PI = 3.14;
	//end of private data
public:
	//beginning of public data
	Circle();//constructor
	Circle(int memradius, string memfillColor, string memborderColor);// constructor
	~Circle(); //destructor
	int GetRadius();
	void SetRadius(int arg_1C);
	float GetArea();
	int GetPerimeter();
	//end of public data
};//end of class
#endif
