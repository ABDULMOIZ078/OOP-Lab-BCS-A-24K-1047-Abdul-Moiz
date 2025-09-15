#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int rollNumber;
};

int main() {
    Student s1;
    s1.name = "Moiz";
    s1.rollNumber = 243;

    cout << "Name: " << s1.name << endl; 
    cout << "RollNumber: " << s1.rollNumber;

}