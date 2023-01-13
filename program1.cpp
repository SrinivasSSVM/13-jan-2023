#include<iostream>
using namespace std;
class Rectangle {
    double length, breadth;

public:
    // Constructor with no parameters
    Rectangle() {
        length = 5;
        breadth = 3;
    }

    // Constructor with two parameters
    Rectangle(double l, double b) {
        length = l;
        breadth = b;
    }

    // Constructor with one parameter
    Rectangle(double num) {
        length = num;
        breadth = num;
    }

    double area() {
        return length * breadth;
    }
};

int main() {
    Rectangle r1;
    cout << "Area of rectangle (no parameters): " << r1.area() << endl;

    Rectangle r2(5);
    cout << "Area of rectangle (one parameter): " << r2.area() << endl;

    Rectangle r3(3, 4);
    cout << "Area of rectangle (two parameters): " << r3.area() << endl;

    return 0;
}

