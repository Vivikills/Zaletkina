#include<iostream>
#include<string>
int main()
{
	std::cout << "Create a number N from 1 to 100 and I'll guess it!\n";
	int end = 100;
	int start = 0;
	int k = 0;
	int seredina = (end+start)/2;
	std::cout << "N is bigger than " << seredina << "? (1 yes, 2 no, 3 equally)\n";
	for(seredina; seredina > 0 && seredina < 100; )
	{
		int t = 0;
		k++;
		std::cin >> t;
		if (t == 1 && seredina == 99)
		    {
				seredina = 100;
				std::cout << "You created " << seredina << "! I'm so cool!\n";
				std::cout << "Количество попыток: " << k << "\n";
		    }
		if (t == 1 && seredina < 99)
		{
			start = seredina;
			seredina = (end+start)/2;
			std::cout << "N is bigger " << seredina << "? (1 yes, 2 no, 3 equally)\n";
		}
		if (t  == 2)
		{
			end = seredina;
			seredina = (start+end)/2;
			std::cout << "N is bigger " << seredina << "? (1 yes, 2 no, 3 equally)\n";
		}
		if (t == 3)
		{
			std::cout << "You created " << seredina << "! I'm so cool!\n";
			std::cout << "The number of attempts: " << k << "\n";
		}
		if ( t != 1 && t != 2 && t != 3) 
		{
			std::cout << "This option doesn't exist";
		}

	}
	int c = 0;
	std::cin >> c;
	return 0;
}

