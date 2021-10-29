#include<iostream>
#include<cmath>

using namespace std;

class Rational
{
private:
	int num_n, den_n;
public:
	Rational()
	{
		num_n = 0;
		den_n = 1;
	}

	Rational(int num_n1, int den_n1)
	{
		if(num_n1 > 0 && den_n1 > 0)
		{
			num_n = num_n1;
			den_n = den_n1;
		}
		else if(num_n1 < 0 && den_n1 > 0)
		{
			num_n = -abs(num_n1);
			den_n = den_n1;
		}
		else if(num_n1 > 0 && den_n1 < 0)
		{
			num_n = num_n1;
			den_n = -abs(den_n1);
		}
	}

	void print(int num_n1, int den_n1)
	{
		if (num_n1 < den_n1 && den_n1 != 0)
		{
		  cout << num_n1 << "/" << den_n1;
		  cout << "\n";
		}
	}

	void reduct(int num_n1, int den_n1)
	{
		if (num_n1 > den_n1 && den_n1 != 0)
		{
			int n = 0;
			int int_part = num_n1/den_n1;
			int rem_part = num_n1%den_n1;
			if (rem_part != 0)
			{
			  for (int i = 1; i <= rem_part; i++)
			  {
				 if(rem_part%i == 0 && den_n1%i == 0)
				 {
				   n = i;
				 }
			   }
			  rem_part = rem_part/n;
			  den_n1 = den_n1/n;
			  cout << int_part << " ";
			  print(rem_part, den_n1);

			}
			else if (rem_part == 0)
			{
				cout << int_part << "\n";
			}
		}
		if (num_n1 == den_n1 && den_n1 != 0)
		{
			cout << "1" << "\n";
		}
		if (num_n1 < den_n1 && den_n1 != 0)
		{
			int n = 0;
			if (num_n1 != 0)
			{
			  for (int i = 1; i <= num_n1; i++)
			  {
				 if(num_n1%i == 0 && den_n1%i == 0)
				 {
				   n = i;
				 }
			   }
			  num_n1 = num_n1/n;
			  den_n1 = den_n1/n;
			  if (n > 1)
			  {
			    print(num_n1, den_n1);
			  }
			}
		}
	}

	int sum(int num_n1, int den_n1)
	{
		int num_sum = num_n1*den_n + num_n*den_n1;
		int den_sum = den_n*den_n1;
		print(num_sum, den_sum);
		reduct(num_sum, den_sum);
		return 0;
	}

	int mult(int num_n1, int den_n1)
	{
		int num_mult = num_n1*num_n;
		int den_mult = den_n1*den_n;
		print(num_mult, den_mult);
		reduct(num_mult, den_mult);
		return 0;
	}
};

int main()
{
	int num_n = 0;
	cout << "Enter a numerator: ";
	cin >> num_n;
	int den_n = 0;
	cout << "Enter a denominator: ";
	cin >> den_n;
	Rational drob1(num_n, den_n);
	drob1.print(num_n, den_n);
	drob1.reduct(num_n, den_n);
	int num_for_sum = 0;
	int den_for_sum = 0;
	cout << "Enter a numerator for sum: ";
	cin >> num_for_sum;
	cout << "Enter a denominator for sum: ";
	cin >> den_for_sum;
	drob1.sum(num_for_sum, den_for_sum);
    int num_for_mult = 0;
	int den_for_mult = 0;
	cout << "Enter a numerator for mult: ";
	cin >> num_for_mult;
	cout << "Enter a denominator for mult: ";
	cin >> den_for_mult;
	drob1.mult(num_for_mult, den_for_mult);

	int c = 0;
	cin >> c;

	return 0;
}