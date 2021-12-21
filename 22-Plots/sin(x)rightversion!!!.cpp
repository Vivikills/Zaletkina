#include<iostream>
#include<cmath>
#include<fstream>

using namespace std;

int main()
{
	const double pi = 3.141592;
	double cord_x; 
	double cord_y;
    ofstream fout;
    string path = "Data4.txt";
	fout.open(path, ofstream::app);
    if (!fout.is_open())
	{
		cout << "Error of openning";
	}
	else
	{
		for (int i = 0; i <= 100; i++)
	    {
			cord_x = i;
		    cord_y = sin(cord_x);
			fout << cord_x << "   " << cord_y;
			fout << "\n";
			cout << cord_x << " ";
			cord_x = i*pi*2/100;
	    }
	}
	fout.close();

	int c = 0;
	cin >> c;
	return 0;
}
        
