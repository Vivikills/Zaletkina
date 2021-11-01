#include<iostream>
#include "LIFO.h"

using namespace std;

LIFO::LIFO()
{
	temp = -1;
	cout << "Enter the initial number of elements in the stack: ";
	int N1;
	cin >> N1;
	array = new int[N1];
	for (int i = 0; i < N1; i++)
	{
		array[i] = 0;
	}
}

void LIFO::push(int value)
{
	temp++;
	if (temp == 0)
	{
	   array[0] = value;
	}
	else if (temp > 0)
	{
		for (int i = temp; i >= 0; i--)
		{
			array[i+1] = array[i];
		}
		array[0] = value;
	}
	for (int j = 0; j <= temp; j++)
	{
		cout << array[j] << " ";
	}
    cout << "\n";
}

int LIFO::pop()
{
	temp--;
	int n;
	n = array[0];
	for (int i = 0; i <= temp; i++)
	{
		array[i] = array[i+1];
	}
	for (int j = 0; j <= temp; j++)
	{
		cout << array[j] << " ";
	}
	cout << "\n";

	return n;
}

LIFO::~LIFO()
{
	delete[] array;
}
