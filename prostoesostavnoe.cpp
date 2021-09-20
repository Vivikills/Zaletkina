#include<iostream>
#include<string>
int main()
{
	std::cout << "Enter a natural number: ";
	char string[1000];
	int k = 0;
    gets(string);
	int lens = strlen(string);
	for ( int i = 0; i <= lens; i++)
	{
		if (!isdigit(string[i]) && string[i] != '\0')
		{
			k++;
		}
	}
	if (k != 0)
	{
		std::cout << "You entered a string or non-integer number!";
	}
	int integer;
	integer = std::stoi(string);
	int l = 0;
	if ( k == 0)
	{
	for (int m = 1; m <= integer; m++)
	{
		int ost;
		ost = integer % m;
		if (ost == 0)
		{
			l++;
		}
	}
	if (l == 2)
	{
		std::cout << "This is a prime number\n";
	}
	else
	{
		std::cout << "This is a composite number!\n";
	}
	}

	int c = 0;
	std::cin >> c;
	return 0;
}
