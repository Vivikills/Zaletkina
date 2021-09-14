#include<iostream>
#include<string>
int main()
{
	setlocale(LC_ALL, "rus");
	std::cout << "Задумайте число N от 1 до 100, а я угадаю!\n";
	int end = 100;
	int start = 0;
	int k = 0;
	int seredina = (end+start)/2;
	std::cout << "N больше " << seredina << "? (1 да, 2 нет, 3 равно)\n";
	for(seredina; seredina > 0 && seredina < 100; )
	{
		int t = 0;
		k++;
		std::cin >> t;
		if (t == 1 && seredina == 99)
		    {
				seredina = 100;
				std::cout << "Вы задумали " << seredina << "! А я молодец!\n";
				std::cout << "Количество попыток: " << k << "\n";
		    }
		if (t == 1 && seredina < 99)
		{
			start = seredina;
			seredina = (end+start)/2;
			std::cout << "N больше " << seredina << "? (1 да, 2 нет, 3 равно)\n";
		}
		if (t  == 2)
		{
			end = seredina;
			seredina = (start+end)/2;
			std::cout << "N больше " << seredina << "? (1 да, 2 нет, 3 равно)\n";
		}
		if (t == 3)
		{
			std::cout << "Вы задумали " << seredina << "! А я молодец!\n";
			std::cout << "Количество попыток: " << k << "\n";
		}
		if ( t != 1 && t != 2 && t != 3) 
		{
			std::cout << "Данного варианта ответа не существует";
		}

	}
	int c = 0;
	std::cin >> c;
	return 0;
}

