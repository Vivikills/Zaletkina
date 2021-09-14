#include<iostream>
#include<string>
int main()
{
	setlocale(LC_ALL, "rus");
    std::string name;
	std::cout << "Enter your name: ";
	std::cin >> name;
	std::cout << "\n";
	std::cout << "Hello, " << name << "!\n";
	//int c = 0;
	//std::cin >> c;
	return 0;
}