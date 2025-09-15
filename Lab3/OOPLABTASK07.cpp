#include <iostream>
using namespace std;

class Student{
    private:
    string name;
    int rollNo;
    double marks;
    char grade;

    public:
    Student(string n, int r, double m){
        name = n;
        rollNo = r;
        marks = m;
    }

    void calculateGrade(){
        if (marks >= 90)
        {
            grade = 'A';
        }
        else if(marks >= 80){
            grade = 'B';
        }
        else if(marks >= 70){
            grade = 'C';
        }
        else{
            grade = 'F';
        }
    }

    void displayStudentInfo(){
        cout << "Name: " << name << endl;
        cout << "RollNo: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;
        cout << endl;
    }
};

int main() {
    Student s1("Moiz",1,91);
    Student s2("Rigos",2,87);
    s1.calculateGrade();
    s2.calculateGrade();

    s1.displayStudentInfo();
    s2.displayStudentInfo();
}
