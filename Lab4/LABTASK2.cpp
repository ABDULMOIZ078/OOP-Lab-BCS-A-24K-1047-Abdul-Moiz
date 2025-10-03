#include <iostream>
using namespace std;
class NUCES_Student{
    private:
    int id;
    string name;

    public:
    NUCES_Student(){
        id = 0;
        name = "Not Registered";
    }

    NUCES_Student(int i){
        id = i;
        name = "Name Pending";
    }

    NUCES_Student(int id, string name){
        this->id = id;
        this->name = name;
    }

    void display(){
        cout << "ID = " << id << endl;
        cout << "Nmae = " << name << endl;
    }
};
int main(){
    NUCES_Student n1;
    NUCES_Student n2(72);
    NUCES_Student n3(34, "Moiz");

    n1.display();
    n2.display();
    n3.display();
}