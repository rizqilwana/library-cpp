//Write and use the following macros Inputx,y: cube(x), area(x,y), cir(x), sq(x,y), triangle(x,y)

#include <iostream>
using namespace std;
#define PI 3.1415926
#define cube(x) x*x*x
#define area(x,y) PI*x*x
#define cir(x) 2*PI*x
#define sq(x,y) (x*x)+(y*y)
#define triangle(x,y) 0.5*x*y

int main() {
  double x,y;
  cout << "Input x:";
  cin >> x,y;
  cout << "Input y:";
  cin >> y;
  cout << "Area of a cube with radius x:" <<cube(x)<< endl;
  cout << "Area of a area with radius x:" <<area(x,y)<< endl;
  cout << "Area of a circle with radius x:" <<cir(x)<< endl;
  cout << "Area of a sq with radius x:" <<sq(x,y)<< endl;
  cout << "Area of a triangle with radius x:" <<triangle(x,y)<< endl;
  
}
