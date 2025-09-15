#include <iostream>
using namespace std;

class Concrete{
    private:
    string message;

    public:

    Concrete(string s){
        message = s;
    }

    void displayMessage(){
        cout << "Message is: " << message;
    } 
};

int main() {
    Concrete obj("ich bin moiz");
    obj.displayMessage();
}

