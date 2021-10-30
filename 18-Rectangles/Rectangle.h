#ifndef RECTANGLE_H
#define RECTANGLE_H

#include<iostream>
#include<fstream>
#include <cassert>

class Rectangle
{
private:
	double x_first, x_second, y_first, y_second;
public:
	Rectangle(double x_f, double x_s, double y_f, double y_s);

	void initial(double x_f, double x_s, double y_f, double y_s);

	void crossing(const Rectangle &second) const;
};

#include "Rectangle.cpp"
#endif 