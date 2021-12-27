#include "Shape.h"
using namespace std;

int main() 
{
    Circle circle(0,0,5);
    Square square(1,1,2,0);
    double x_m;
    double y_m;
    double x_sq_m;
    double y_sq_m;
    double k;
    double k1;
    double angle;
    cout << "Circle: " << endl;
    circle.show();
    circle.rotate(45);
    cout << "Coord of vector: ";
    cin << x_m;
    cin << y_m;
    circle.move(x_m,y_m);
    circle.show();
    return 0;
}