#include "Circle.h"
#include "Triangle.h"
#include <iostream>


using namespace std;

int main() {
  cout << "Creating default Circle..." << endl;
  Circle defaultCircle;
  cout << "Circle info:" << endl;
  cout << "Radius: " << defaultCircle.GetRadius() << endl;
  cout << "Area: " << defaultCircle.GetArea() << endl;
  cout << "Perimeter: " << defaultCircle.GetPerimeter() << endl;
  cout << "Fill Color: " << defaultCircle.GetFillColor() << endl;
  cout << "Border Color: " << defaultCircle.GetBorderColor() << endl;
  cout << "Shape Type: " << defaultCircle.GetShapeType() << endl << endl;

  cout << "Creating parameterized Circle..." << endl;
  Circle paramCircle(5, "Red", "Black");
  cout << "Circle info:" << endl;
  cout << "Radius: " << paramCircle.GetRadius() << endl;
  cout << "Area: " << paramCircle.GetArea() << endl;
  cout << "Perimeter: " << paramCircle.GetPerimeter() << endl;
  cout << "Fill Color: " << paramCircle.GetFillColor() << endl;
  cout << "Border Color: " << paramCircle.GetBorderColor() << endl;
  cout << "Shape Type: " << paramCircle.GetShapeType() << endl << endl;

  cout << "Creating default Triangle..." << endl;
  Triangle defaultTriangle;
  cout << "Triangle info:" << endl;
  cout << "Sides length: " << defaultTriangle.GetSides() << endl;
  cout << "Area: " << defaultTriangle.GetArea() << endl;
  cout << "Perimeter: " << defaultTriangle.GetPerimeter() << endl;
  cout << "Fill Color: " << defaultTriangle.GetFillColor() << endl;
  cout << "Border Color: " << defaultTriangle.GetBorderColor() << endl;
  cout << "Shape Type: " << defaultTriangle.GetShapeType() << endl << endl;

  cout << "Creating parameterized Triangle..." << endl;
  Triangle paramTriangle(6, "Blue", "Yellow");
  cout << "Triangle info:" << endl;
  cout << "Sides length: " << paramTriangle.GetSides() << endl;
  cout << "Area: " << paramTriangle.GetArea() << endl;
  cout << "Perimeter: " << paramTriangle.GetPerimeter() << endl;
  cout << "Fill Color: " << paramTriangle.GetFillColor() << endl;
  cout << "Border Color: " << paramTriangle.GetBorderColor() << endl;
  cout << "Shape Type: " << paramTriangle.GetShapeType() << endl << endl;

  cout << "End of program. Destructors will be called now." << endl;
  return 0;
}