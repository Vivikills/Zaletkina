#include<iostream>
#include<string>
int main()
{
	setlocale(LC_ALL, "rus");
	std::cout << "��������� ����� N �� 1 �� 100, � � ������!\n";
	int end = 100;
	int start = 0;
	int k = 0;
	int seredina = (end+start)/2;
	std::cout << "N ������ " << seredina << "? (1 ��, 2 ���, 3 �����)\n";
	for(seredina; seredina > 0 && seredina < 100; )
	{
		int t = 0;
		k++;
		std::cin >> t;
		if (t == 1 && seredina == 99)
		    {
				seredina = 100;
				std::cout << "�� �������� " << seredina << "! � � �������!\n";
				std::cout << "���������� �������: " << k << "\n";
		    }
		if (t == 1 && seredina < 99)
		{
			start = seredina;
			seredina = (end+start)/2;
			std::cout << "N ������ " << seredina << "? (1 ��, 2 ���, 3 �����)\n";
		}
		if (t  == 2)
		{
			end = seredina;
			seredina = (start+end)/2;
			std::cout << "N ������ " << seredina << "? (1 ��, 2 ���, 3 �����)\n";
		}
		if (t == 3)
		{
			std::cout << "�� �������� " << seredina << "! � � �������!\n";
			std::cout << "���������� �������: " << k << "\n";
		}
		if ( t != 1 && t != 2 && t != 3) 
		{
			std::cout << "������� �������� ������ �� ����������";
		}

	}
	int c = 0;
	std::cin >> c;
	return 0;
}

