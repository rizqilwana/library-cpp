//Input x, output y : y= x²-3x+2
//Enter the radius (r) of the circle and use the macro constant PI to caiculate the area and circumference (cir) of the circle Output the circle area Tr² (PI*r*r) and circumference 2Tr (2*PI*r)

#include <iostream>
#define PI 3.14159
using namespace std;

int main () {
  double x, y;
  cout << "ENTER X=";
  cin >> x;

  y = x*x-3*x + 2;
  cout << "y=" << y << endl;
  double r;
  cout << "ENTER the radius (r) of the circle: ";
  cin >> r;

  double area = PI*r*r;
  double circumference = 2 * PI*r;

  cout << "circle area: " << area << endl;
  cout << "circumference: " << circumference << endl;
  return 0;
}

