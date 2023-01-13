#include<iostream>
using namespace std;
class Student {
    private:
        string name;
        int age;
        string address;
    public:
        // Default constructor
        Student() {
            name = "unknown";
            age = 0;
            address = "not available";
        }
        // Overloaded constructor
        Student(string n, int a, string addr) {
            name = n;
            age = a;
            address = addr;
        }
        // Function to set name and age
        void setInfo(string n, int a) {
            name = n;
            age = a;
        }
        // Function to set name, age and address
        void setInfo(string n, int a, string addr) {
            name = n;
            age = a;
            address = addr;
        }
        // Function to display student information
        void display() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Address: " << address << endl;
        }
};

int main() {
    Student students[10];
    students[0].setInfo("John", 20, "123 Main St");
    students[1].setInfo("Jane", 22, "456 Park Ave");
    students[2].setInfo("Bob", 18, "789 Elm St");
    students[3].setInfo("Alice", 21, "111 Oak St");
    students[4].setInfo("Charlie", 19, "222 Pine St");
    // set information for remaining 5 students
    for (int i = 5; i < 10; i++) {
        students[i].setInfo("unknown", 0, "not available");
    }
    // display information for all students
    for (int i = 0; i < 10; i++) {
        cout << "Student " << i+1 << ":" << endl;
        students[i].display();
    }
    return 0;
}

