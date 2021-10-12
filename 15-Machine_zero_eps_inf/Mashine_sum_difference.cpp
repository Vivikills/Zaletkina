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
	float null = 1.0;
	while (null/2 > 0)
	{
		null /= 2.0f;
	}
	cout << "Sum of zero and epsilon: " << null + e << "\n";
	cout << "The difference of zero and epsilon: " << null - e << "\n";

	//FOR DOUBLE
	double e_doub = 1.0;
	while (1 + e_doub > 1)
	{
		e_doub /= 2.0;
	}
	double null_d = 1.0;
	while (null_d/2 > 0)
	{
		null_d /= 2.0;
	}
	cout << "Sum of zero and epsilon: " << null_d + e_doub << "\n";
	cout << "The difference of zero and epsilon: " << null_d - e_doub << "\n";


	//FOR LONG DOUBLE
	long double null_l_d = 1.0;
	while (null_l_d/2 > 0)
	{
		null_l_d /= 2.0;
	}
	long double e_long_doub = 1.0;
	while (1 + e_long_doub > 1)
	{
		e_long_doub /= 2.0;
	}
	cout << "Sum of zero and epsilon: " << null_l_d + e_long_doub << "\n";
	cout << "The difference of zero and epsilon: " << null_l_d - e_long_doub << "\n";

	int c = 0;
	cin >> c;
	return 0;
}

