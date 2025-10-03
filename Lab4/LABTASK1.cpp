#include <iostream>
using namespace std;
class MobileAccount{
    public:
    double balance;
    string phoneNumber;

    MobileAccount(){
        balance = 50.0;
        phoneNumber = "";
    }

    MobileAccount(double b, string p){
        balance = b;
        phoneNumber = p;
    }

    void display(){
        cout << "Phone number: " << phoneNumber << endl;
        cout << "Current Balance: " << balance << " PKR" << endl;
    }
};
int main(){
    MobileAccount m1;
    MobileAccount m2(567, "9785432456");
    m1.display();
    m2.display();
}