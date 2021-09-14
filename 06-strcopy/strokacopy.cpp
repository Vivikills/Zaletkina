#include<iostream>
#include<string>
int main() 
{   
	system("chcp 1251");
	std::cout << "Введите строку: ";
	char s[100];
	gets(s);
	int lens = strlen(s);
    std::cout << "Копия строки: ";
	int i;
	char m[100];
	for(i = 0; i <= lens; i++)
	{
		m[i] = s[i];
		std::cout << m[i];
	}
	std::cout << "\n";
	//int c = 0;
	//std::cin >> c;
	return 0;
}