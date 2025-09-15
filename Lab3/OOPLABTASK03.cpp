#include <iostream>
using namespace std;

class Calculator{
    private:
    int num1;
    int num2;

    public:
    void setNumbers(int n1, int n2){
        num1 = n1;
        num2 = n2;
    }

    int add(){
        return num1 + num2;
    }
};

int main() {
    Calculator c;
    c.setNumbers(25,67);
    int result = c.add();
    cout << "Result: " << result;
}

