#pragma once
#ifndef Triangle_h
#define Triangle_h
#include "Shape.h"
#include <iostream>
#include <math.h>
#include <string>
using namespace std;
class Triangle: public Shape
{//beginning of class
private:
	//beginning of private data
	int side;
	//end of private data
public:
	//beginning of public data
	Triangle();//constructor
	Triangle(int memside, string f_color, string b_color);// constructor
	~Triangle(); //destructor
	int GetSides();
	void SetSides(int arg_1);
	float GetArea();
	int GetPerimeter();
	//end of public data
};//end of class
#endif

