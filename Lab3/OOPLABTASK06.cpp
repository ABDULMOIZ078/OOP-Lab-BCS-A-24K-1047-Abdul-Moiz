#include <iostream>
using namespace std;

class Vehicle{
    public:
    string make;
    int model;
    void displayInfo(){
        cout << "Make: " << make << endl;
        cout << "Model: " << model ;
    }
};
class Car : public Vehicle{
    public:
    string engineType;
    void displayInfo(){
        Vehicle :: displayInfo();
        cout << "\nEngineType: " << engineType;
    };
};

int main() {
    Car c1;
    c1.make = "Ford";
    c1.model = 2024;
    c1.engineType = "Petrol";
    c1.displayInfo();
}

