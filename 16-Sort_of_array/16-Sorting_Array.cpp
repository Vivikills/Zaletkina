#include<iostream>

using namespace std;

//Sortirovka vstavkami

void func1 (int &i1, int &i2)
{
	i1 = i1*i2;
	i2 = i1/i2;
	i1 = i1/i2;
}

void func2 (int *a, int *b)
{
	int temp1 = *a;
	*a = *b;
	*b = temp1;
}

void func3 (int &x, int &y)
{
	x = x + y;
	y = x - y;
	x = x - y;
}


int main()
{
	int numb_of_elements;
	cout << "Enter a number of element: ";
	cin >> numb_of_elements;
	cout << "\n";
	int array[100];
	for (int n = 0; n < numb_of_elements; n ++)
	{
		array[n] = rand()%100;
		cout << array[n] << " ";
	}
	cout << "\n";
	for (int i = 1; i < numb_of_elements; i++)
	{
	    for (int j = i-1; j >= 0; j--)
		{
			if (array[j+1] < array[j])
			{
		       func3(array[j], array[j+1]);
			}
		}
	 }
		
	for (int t = 0; t < numb_of_elements; t++)
	{
	     cout << array[t] << " ";
	}
    cout << "\n";

	int c = 0;
	cin >> c;
	return 0;
}