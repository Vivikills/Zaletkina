#include<iostream>
#include<string>

using namespace std;

int fibonacci (int a)
{
	if ( a == 0 )
		return 0;
	if ( a == 1 )
		return 1;
	if ( a > 1 )
		return fibonacci(a-1) + fibonacci(a-2);
	
}


int main()
{
	cout << "Enter a number N, 1 <= N <= 100: ";
	string number;
	int k = 0;
	cin >> number;
	int lens = 0;
	lens = number.length();
	for (int i = 0; i <= lens; i++)
	{
		if(!isdigit(number[i]) && number[i] != '\0')
		{
			k++;
		}
	}
	if (k != 0)
	{
		cout << "You entered a string or non-integer number" << "\n";
	}
	if (k == 0)
	{
		int integer = stoi(number);
		if (integer < 1)
		{
			cout << "You need to enter a number from 1 to 100.";
			cout << "\n";
		}
		if(integer >= 1)
		{
			for (int count = 1; count <= integer; count ++)
			{
				cout << fibonacci(count) << " ";
			}
			cout << "\n";
		}
		if (integer > 100)
		{
			cout << "You entered a number greater than 100. Try again, please." << "\n";
		}
	}


	int c = 0;
	cin >> c;
	return 0;
}

