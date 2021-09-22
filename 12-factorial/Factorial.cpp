#include<iostream>
#include<string>
int main()
{
	std::cout << "Enter a natural number (0 can also be entered): ";
	for (int l = 0; l < 1000 ; l++)
	{

	std::string number;
	int k = 0;
    std::cin >> number;
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
		std::cout << "You entered a string or non-integer number. Enter a natural number, please: ";
	}
	if (k == 0)
	{
		int integer = std::stoi(number);
		if (integer < 0)
		{
			std::cout << "You entered a negative number. Eneter a posotive one, please: ";
		}
		if ( integer == 0 )
		{
			std::cout << "Factorial: 1";
		}
		if (integer > 0 )
		{
			//std::string factorial;
		    float  res_after_iter = 1;
			for (int j = 2; j <= integer; j++)
			{
				res_after_iter = res_after_iter*j;
			}
			std::cout << "Factorial: " << res_after_iter << "\n";
		}
		if (integer > 100000)
		{
			std::cout << "This number is more than 100000. Enter a number less than 100000, please: ";
		}

	}
	}
	int c = 0;
	std::cin >> c;
	return 0;
}
