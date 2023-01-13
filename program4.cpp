#include<iostream>
using namespace std;
class Base {
  public:
    int i;
    void printNum() {
        cout << i << endl;
    }
};

class Subclass : public Base {
  public:
    int j;
    void printNum() {
        cout << j << endl;
    }
};

int main() {
    Subclass obj;
    obj.i = 5;
    obj.j = 10;
    obj.printNum();
    return 0;
}

