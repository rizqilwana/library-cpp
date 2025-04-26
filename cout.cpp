//Declare name (string), student ID (long integer), age (integer), height (floating-point number), weight (floating-point number) Input various data with cin, and use cout to output the data line by line.

#include <iostream>
using namespace std;

int main() {
    char Name[20];
    long int StudentID;
    int Age;
    float Height, Weight;

    cout << "Enter Name: ";
    cin >> Name;

    cout << "Student ID: ";
    cin >> StudentID;

    cout << "Age: ";
    cin >> Age;

    cout << "Height: ";
    cin >> Height;

    cout << "Weight: ";
    cin >> Weight;

    cout << "Name: " << Name << endl;
    cout << "Student ID: " << StudentID << endl;
    cout << "Age: " << Age << endl;
    cout << "Height: " << Height << endl;
    cout << "Weight: " << Weight << endl;

    return 0;
}

