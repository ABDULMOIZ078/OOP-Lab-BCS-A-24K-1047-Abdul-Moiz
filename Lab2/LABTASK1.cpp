#include <iostream>
using namespace std;

int main(){
    int amount, a;
    cout << "Enter an amount in Rs = ";
    cin >> amount;
    cout << endl;
    cout << "Minimum notes required for Rs. " << amount << " are:" << endl;

    if(amount >= 5000){
        a = amount / 5000;
        amount -= 5000 * a;
        cout << "5000 x " << a << endl;
    }

    if(amount >= 1000){
        a = amount / 1000;
        amount -= 1000 * a;
        cout << "1000 x " << a << endl;
    }

    if(amount >= 500){
        a = amount / 500;
        amount -= 500 * a;
        cout << "500 x " << a << endl;
    }

    if(amount >= 100){
        a = amount / 100;
        amount -= 100 * a;
        cout << "100 x " << a << endl;
    }

    if(amount >= 20){
        a = amount / 20;
        amount -= 20 * a;
        cout << "20 x " << a << endl;
    }

    if(amount >= 10){
        a = amount / 10;
        amount -= 10 * a;
        cout << "10 x " << a << endl;
    }

    if(amount >= 5){
        a = amount / 5;
        amount -= 5 * a;
        cout << "5 x " << a << endl;
    }

    if(amount >= 2){
        a = amount / 2;
        amount -= 2 * a;
        cout << "2 x " << a << endl;
    }

    if(amount >= 1){
        a = amount / 1;
        amount -= 1 * a;
        cout << "1 x " << a << endl;
    }

    return 0;
}
