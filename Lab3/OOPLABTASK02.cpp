#include <iostream>
using namespace std;

class Student {
private:
    int rollNumber;

public:
    void setRollNo(int n) {
        rollNumber = n;
    }

    int getRollNo() {
        return rollNumber;
    }
};

int main() {
    Student s1;
    s1.setRollNo(243);   

    cout << "Roll Number: " << s1.getRollNo();   
    return 0;
}
