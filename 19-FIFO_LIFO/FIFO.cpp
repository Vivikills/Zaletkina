#include<iostream>
#include "FIFO.h";

using namespace std;

FIFO::FIFO () 
{ 
	cout << "Enter a number of elements: ";
    cin >> N; 
	array = new int[N];
	for (int i = 0; i < N; i++)
	{
		array[i] = 0;
	}
	temp = -1;
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

FIFO::~FIFO()
{
	delete[] array;
}


};
