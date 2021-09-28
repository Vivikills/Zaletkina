#include<iostream>
#include<string>

using namespace std;

int fact_recursion (int a)
{
	if ( a > 1 )
	{
		return a*fact_recursion(a-1);
	}
	if ( a == 1 )
	{
		return 1;
	}
	cout << a << "\n";
}

int main()
{
	cout << "Enter a natural number (0 can also be entered): ";
	for (int l = 0; l < 1000 ; l++)
	{

	string number;
	int k = 0;
    cin >> number;
	int lens = number.length();
	int i = 0;
	for (i = 0; i <= lens; i++)
	{
		if(!isdigit(number[i]) && number[i] != '\0' && number[i] != '-')
		{ 
			k++;
		}
	}
	if (k != 0)
	{
		cout << "You entered a string or non-integer number. Enter a natural number, please: ";
	}
	if (k == 0)
	{
		int integer = stoi(number);
		if (integer < 0)
		{
			cout << "You entered a negative number. Eneter a posotive one, please: ";
		}
		if ( integer == 0 )
		{
			cout << "Factorial: 1";
		}
		if (integer > 0 && integer <= 31 )
		{
		    cout << fact_recursion(integer) << "\n";
		}
		if (integer > 31)
		{
			cout << "This number is more than 100000. Enter a number less than 100000, please: ";
		}

	}
	}
	int c = 0;
	cin >> c;
	return 0;
}
