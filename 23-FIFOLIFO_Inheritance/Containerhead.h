#ifndef CONTAINER_H
#define CONTAINER_H

#include<iostream>

using namespace std;

class Container
{
public:
	int *array;
	int N;
	int temp;
	Container();

	~Container();

	virtual void push(int value) = 0;

	virtual int pop() = 0;
};

class FIFO: public Container
{
public:
	FIFO();

	virtual void push(int value);

	virtual int pop();
};

class LIFO: public Container
{
public:
	LIFO();

	virtual void push(int value);

	virtual int pop();
};
#endif


	