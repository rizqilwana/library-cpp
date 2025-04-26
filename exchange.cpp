//Input a, b, c and exchange the values of a, b, c, and output the values before and after the exchanges

#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    cout << "Before swapping: a=" << a << ",b=" << b << ",c=" << c << endl;
    int temp = a;
    a = b;
    b = c;
    c = temp;
    cout << "After swapping: a=" << a << ",b=" << b << ",c=" << c << endl;
    return 0;
}

