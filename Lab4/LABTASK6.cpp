#include <iostream>
using namespace std;

class OrderDetails{
    private:
    int orderID;
    string itemName;
    const double deliveryFee;

    public:
    OrderDetails(int orderID, string itemName, double d): deliveryFee(d){
        this -> orderID = orderID;
        this -> itemName = itemName;
    }

    ~OrderDetails(){
        cout << "Confirming Order ID: " << orderID << " Archived and memory cleared" << endl;
    }

    void display(){
        cout << "orderID : " << orderID << endl;
        cout << "itemName : " << itemName << endl;
        cout << "deliveryFee : " << deliveryFee << endl;
    }
};
int main(){
    OrderDetails o1(124, "Shoes", 250.0);
    o1.display();
}