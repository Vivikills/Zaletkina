#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	//FOR FLOAT
	float negative_inf_f = -FLT_MAX;
	float positive_inf_f = FLT_MAX;
	cout << "Infinity for the float type: " << negative_inf_f << "  " << positive_inf_f << "\n";

	//FOR DOUBLE
	double negative_inf_d = -DBL_MAX;
	double positive_inf_d = DBL_MAX;
    cout << "Infinity for the double type: " << negative_inf_d << "  " << positive_inf_d << "\n";

	//FOR LONG DOUBLE
	long double negative_inf_ld = -LDBL_MAX;
	long double positive_inf_ld = LDBL_MAX;
	cout << "Infinity for the long double type: " << negative_inf_ld << "  " << positive_inf_ld << "\n";

	int c = 0;
	cin >> c;
	return 0;
}


