#include<string>
#include "CSlice1.h"
using namespace std;

Slice::Slice()
{
	int_start = 0;
	int_stop = 0;
	int_step = 0;
	int N1;
	N1 = 0;
	flag1 = 0;
	flag2 = 0;
	flag3 = 0;
	flag = 0;
	cout << "Enter a number of elements in array: ";
	cin >> N1;
	N = N1;
	array = new int[N1];
	for (int i = 0; i < N1; i++)
	{
		cin >> array[i];
	}
}

void Slice::parser()
{
	std::cout << "Enter a command: ";
	string command; 
    cin >> command;
	std::cout << "\n";
	int length = command.length();
	//cout << command.length();
	int start1 = 0;
	int start2 = 0;
    int stop1 = 0;
	int stop2 = 0;
	int step1 = 0;
	int step2 = 0;
	for (int j = 0; j <= length; j++)
	{
		if (command[j] == '[' && command[j+1] != ':')
		{ 
			start1 = j + 1;
		}
		if (command[j] == ':' && flag == 0 && command[j+1] != ':')
		{
			start2 = j-1;
			stop1 = j+1;
			flag = 1;
		}
		if (command[j] == ':' && flag == 1 && command[j+1] != ']')
		{
			stop2 = j-1;
			step1 = j+1;
		}
		if (command[j] == ']' && command[j-1] != ':')
		{
			step2 = j-1;
		}
		if (command[j] == '[' && command[j+1] == ':')
		{
			int_start = 0;
			flag1 = 1;
		}
		if (command[j] == ':' && command[j+1] == ':')
		{
			int_stop = N - 1;
			flag2 = 1;
		}
		if (command[j] == ']' && command[j-1] == ':')
		{
			int_step = 1;
			flag3 = 1;
		}
	}
	string start;
	string stop;
	string step;
	if (flag1 == 0)
	{
	   start.append(command, start1, start2); 
       int_start = stoi(start);
	}
	if (flag2 == 0)
	{
       stop.append(command, stop1, stop2);
	   int_stop = stoi(stop);
	}
	if (flag3 == 0)
	{
	   step.append(command, step1, step2);
	   int_step = stoi(step);
	}
	if (flag2 == 1 && int_step < 0)
	{
		int_stop = 0;
	}
	if (flag1 == 1 && int_step < 0 && int_stop < 0)
	{
		int_start = -N;
	}
}

void Slice::obj()
{
	int *arr_result;
	arr_result = new int[N];
	int l = 0;
	if (int_start < 0 && flag1 == 0)
	{
		int_start = N + int_start;
	}
	if (int_stop < 0)
	{
		int_stop = N + int_stop;
	}
	if (int_step > 0 && int_start < int_stop) 
	{
	   for (int i = 0; i <= int_stop - int_start; i++)
	   {
		   if (i == 0)
		   {
		       arr_result[0] = array[int_start];
		   }
		   else if (i != 0)
		   {
			   int_start = int_start + int_step;
			   if (int_start < int_stop)
			   {
			        arr_result[i] = array[int_start];
			   }
			   else 
			   {
				   break;
			   }
		   }
		   l = i;
	   }
	   for (int k = 0; k <= l; k++)
	   {
		   cout << arr_result[k] << " ";
	   }
	}
	else if (int_step < 0 && int_start > int_stop) 
	{
		int p;
		int_step = -1*int_step;
		int *arr_result1;
		arr_result1 = new int[N];
		for (int j = 0; j <= int_start - int_stop; j++)
		{
			if (j == 0)
			{
			   arr_result1[j] = array[int_start];
			}
			else if (j != 0)
			{
				int_step = j*int_step;
				arr_result1[j] = array[int_start - int_step];
			}
			p = j;
		}
		for (int z = 0; z < p; z++)
		{
			cout << arr_result1[z] << " ";
		}
	}
}

Slice::~Slice()
{
	delete[] array;
}
