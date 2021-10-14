#include<iostream>

using namespace std;

void hanoi (int n, int i, int k)
{
	if (n == 1)
	{
		cout << "Move circle 1 from " << i << " to " << k;
		cout << "\n";
	}
	else
	{
		int temp = 6 - i - k;
		hanoi(n-1, i, temp);
		cout << " Move circle " << n << " from " << i << " to " << k;
		cout << "\n";
		hanoi(n-1, temp, k);
	}
}

int main()
{
	int numb_of_circ = 0;
	cout << "Enter a number of circles: ";
	cin >> numb_of_circ;
	hanoi(numb_of_circ, 1, 2);

	int c = 0;
	cin >> c;
	
	return 0;
}