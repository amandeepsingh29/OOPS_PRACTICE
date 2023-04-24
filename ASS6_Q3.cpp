#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the area of a right-angled triangle
double area(double base, double height) {
    return 0.5 * base * height;
}

// Function to calculate the area of an equilateral triangle
double area(double side) {
    return (sqrt(3) / 4) * pow(side, 2);
}

// Function to calculate the area of an isosceles triangle
double area(double base, double height, int x) {
    return 0.5 * base * height * x;
}

int main() {
    double base, height, side;
    int x;
    cout << "Enter the base and height of the right-angled triangle: ";
    cin >> base >> height;
    cout << "Area of right-angled triangle = " << area(base, height) << endl;
    cout << "Enter the side of the equilateral triangle: ";
    cin >> side;
    cout << "Area of equilateral triangle = " << area(side) << endl;
    cout << "Enter the base, height, and scaling factor of the isosceles triangle: ";
    cin >> base >> height >> x;
    cout << "Area of isosceles triangle = " << area(base, height, x) << endl;
    return 0;
}
