#include<iostream>
#include "FIFO.h"

using namespace std;

int main()
{
	int n = 0;
	FIFO stack1;
	stack1.push(5);
	stack1.push(3);
	//n = stack1.pop();
	//cout << n << "\n";
	stack1.push(9);
    stack1.push(8);
	stack1.push(2);
	stack1.pop();
	stack1.push(6);
	stack1.push(1);
	int c = 0;
	cin >> c;
	return 0;
}
    

