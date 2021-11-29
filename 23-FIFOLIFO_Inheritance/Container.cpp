#include<iostream>
#include "Containerhead.h"

using namespace std;

Container::Container()
{
	temp = -1;
	cout << "Enter the initial number of elements: ";
	int N1;
	cin >> N1;
	array = new int[N1];
	for (int i = 0; i < N1; i++)
	{
		array[i] = 0;
	}
}

Container::~Container()
{
	delete[] array;
}

LIFO::LIFO()
	:Container()
{
}

FIFO::FIFO()
	:Container()
{
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

void FIFO::push(int value)
{
	temp ++;
	if (temp > 0)
	{
		for(int j = temp; j > 0; j--)
		{
			array[j] = array[j-1];
		}
	}
	array[0] = value;
	cout << "The current queue: ";
	for (int i = 0; i <= temp; i++)
	{
		cout << array[i] << " ";
	}
	cout << "\n";
}

int FIFO::pop()
{
	int *mas;
	mas = new int[temp];
	for (int i = 0; i < temp; i++)
	{
		mas[i] = array[i];
	}
	int return_element = array[temp];
	delete[] array;
	array = new int[N];
	cout << "The current queue: ";
	for (int k = 0; k < temp; k++)
	{
		array[k] = mas[k];
		cout << array[k] << " ";
	}
	temp--;
	cout << "\n";
	return return_element;
}