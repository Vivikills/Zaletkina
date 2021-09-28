#include<iostream>

using namespace std;

int main()
{
	// FOR FLOAT
	float null = 1.0;
	while (null/2 > 0)
	{
		null /= 2.0f;
	}
	cout << "Machine zero for the float type: " << null << "\n";

	//FOR DOUBLE
	double null_d = 1.0;
	while (null_d/2 > 0)
	{
		null_d /= 2.0;
	}
	cout << "Machine zero for the double type: " << null_d << "\n";

	//FOR LONG DOUBLE
	long double null_l_d = 1.0;
	while (null_l_d/2 > 0)
	{
		null_l_d /= 2.0;
	}
	cout << "Machine zero for the long double type: " << null_l_d << "\n";

	int c = 0;
	cin >> c;
	return 0;
}
