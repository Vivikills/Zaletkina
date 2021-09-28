#include<iostream>

using namespace std;

int main()
{
	//FOR FLOAT
	float e = 1.0;
	while (1 + e > 1)
	{
		e /= 2.0f;
	}
	cout << "Machine epsilon for the float type: " << e << "\n";

	//FOR DOUBLE
	double e_doub = 1.0;
	while (1 + e_doub > 1)
	{
		e_doub /= 2.0;
	}
	cout << "Machine epsilon for the double type: " << e_doub << "\n";

	//FOR LONG DOUBLE
	long double e_long_doub = 1.0;
	while (1 + e_long_doub > 1)
	{
		e_long_doub /= 2.0;
	}
	cout << "Machine epsilon for the long double type: " << e_long_doub << "\n";

	int c = 0;
	cin >> c;
	return 0;
}

