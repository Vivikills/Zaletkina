#include<iostream>
#include "LIFO.h"

using namespace std;

int main()
{
	LIFO stack1;
	stack1.push(2);
	stack1.push(5);
	stack1.push(1);
	stack1.pop();
	stack1.push(7);

	LIFO stack2;
	stack2.push(8);
	stack2.push(10);
	stack2.push(41);
	stack2.pop();
	stack2.pop();



	int c = 0;
	cin >> c;

	return 0;
}