#include <iostream>
#include "Shape.h"

using namespace std;


Circle::Circle(double cord_x,double cord_y, double rad)
{
    cord_x = x;
    cord_y = y;
    rad=rad1;
}


void Circle::move(double x1, double y1)
{
    cord_x = cord_x + x1;
    cord_y = cord_y + y1;
}


void Circle::scale(double coeff)
{
    rad = coeff*rad;
}


void Circle::rotate(double angle)
{
    cord_x = cord_x;
	cord_y = cord_y;
	rad = rad;
}


void Circle::show()
{
    std::cout << "Circle(" << cord_x; << "," << cord_y; << "), r = " << rad;
}

Square::Square(double S_x, double S_y, double length, double angle)
{
	cord_x = cord_x;
	cord_y = cord_y;
	length = length;
	angle = angle;
}
void Square::move(double x1, double y1)
{
    cord_x = cord_x + x1;
    cord_y = cord_y + y1;
}

void Square::scale(double coeff_sq);
{
	cord_x = coeff_sq*cord_x;
    cord_y = coeff_sq*cord_y;
}

void Square::rotate(double angle1);
{
    angle = angle+angle1;
}

void Square::show()
{
    std::cout << "Square(" << S_x << "," << S_y << "), side: " << length;
}