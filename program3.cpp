#include<iostream>
using namespace std;
class Area {
public:
    void area(int side) {
        int area = side * side;
        cout << "The area of the square is: " << area << endl;
    }
    void area(int length, int breadth) {
        int area = length * breadth;
        cout << "The area of the rectangle is: " << area << endl;
    }
};
int main()
{
   Area a;
a.area(5);
a.area(5, 10);
 
}

