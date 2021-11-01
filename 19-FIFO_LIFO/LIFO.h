#ifndef LIFO_H
#define LIFO_H

#include<iostream>

using namespace std;

class LIFO
{
private:
	int *array;
	int N;
	int temp;
public:
	LIFO();

	~LIFO();

	void push(int value);

	int pop();
};
#endif 