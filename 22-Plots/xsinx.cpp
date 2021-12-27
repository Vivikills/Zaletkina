#include<iostream>
#include<cmath>
#include<fstream>

using namespace std;

int main()
{
	double cord_x; 
	double cord_y;
    ofstream fout;
    string path = "Data8.txt";
	fout.open(path, ofstream::app);
    if (!fout.is_open())
	{
		cout << "Error of openning";
	}
	else
	{
		for (int i = -100; i <= 100; i++)
	    {
			cord_x = i;
		    cord_y = cord_x*sin(cord_x);
			fout << cord_x << "   " << cord_y;
			fout << "\n";
			cout << cord_x << " ";
	    }
	}
	fout.close();

	int c = 0;
	cin >> c;
	return 0;
}
        