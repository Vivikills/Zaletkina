using namespace std;

Rectangle::Rectangle(double x_f, double x_s, double y_f, double y_s)
{
	initial(x_f, x_s, y_f, y_s);
}

void Rectangle::initial(double x_f, double x_s, double y_f, double y_s)
{
	x_first = x_f;
	x_second = x_s;
	y_first = y_f;
	y_second = y_s;
}

void Rectangle::crossing(const Rectangle &second) const
{
	if(x_second < second.x_first || second.x_second < x_first)
	{
		cout << "Not crossing";
	}
	if (y_second < second.y_first || y_first > second.y_second)
	{
		cout << "Not crossing";
	}
	if (x_first < second.x_first && second.x_first < x_second && (y_second >= second.x_first && y_first <= second.y_second))
	{
		cout << "Crossing";
	}
	if (x_first > second.x_first && x_second < second.x_second && (y_second >= second.x_first && y_first <= second.y_second))
	{
		cout << "Crossing";
	}
	if (x_first > second.x_first && x_second < second.x_second && (y_second < second.y_second && y_first > second.y_first))
	{
		cout << "Not crossing";
	}
	if(x_first < second.x_first && x_second > second.x_second && y_first < second.y_first && y_second > second.y_second)
	{
		cout << "Not crossing";
	}
}


	

 