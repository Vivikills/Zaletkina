#include<iostream>
#include<cmath>
#include<fstream>

using namespace std;

int main()
{
	double cord_x; 
	double cord_y;
	double cord_z;
	const double pi = 3.14;
    ofstream fout;
    string path = "Data9.txt";
	fout.open(path, ofstream::app);
    if (!fout.is_open())
	{
		cout << "Error of openning";
	}
	else
	{
		for (int i = 0; i <= 100 ; i++)
		{
			for (int j = 0; j < 100; j ++)
	        {
			   cord_x = i;
			   cord_y = 2*pi*j/100;
		       cord_z = sin(cord_y)*sin(cord_x);
			   fout << cord_x << "   " << cord_y << "   " << cord_z;
			   fout << "\n";
			  // cout << cord_x << " ";
	        }
		}
    }
	fout.close();

	int c = 0;
	cin >> c;
	return 0;
}