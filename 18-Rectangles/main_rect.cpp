#include<iostream>
#include<fstream>
#include<cstdlib>

#include "Rectangle.h"

using namespace std;

int main()
{
	double x1, x2, y1, y2;
	double x1_2, x2_2, y1_2, y2_2;
	ifstream fin("TextFile1.txt");
	fin.open("TextFile1.txt");
	if(!fin.is_open())
	{
		cout << "Error!";
	}
	if (fin.is_open())
	{
		cout << "Succes";
	}
	fin >> x1 >> x2 >> y1 >> y2 >> x1_2 >> x2_2 >> y1_2 >> y2_2;
	cout << x1 << x2 << y1 << y2 << x1_2 << x2_2 << y1_2 << y2_2;

	Rectangle Rect1(x1, x2, y1, y2);
	Rectangle Rect2(x1_2, x2_2, y1_2, y2_2);

	Rect1.crossing(Rect2);

	int c = 0;
	cin >> c;

	return 0;
}




