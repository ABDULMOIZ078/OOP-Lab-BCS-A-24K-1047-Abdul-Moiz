#include <iostream>
using namespace std;
class PetrolPump{
    private:
    static double priceperlitre;
    int pumpid;
    double litersfilled;
    public:
    PetrolPump(int p, double l){
        pumpid = p;
        litersfilled = l;
    }
    void printReceipt(){
        double price = litersfilled * priceperlitre;
        cout<<"The price is Rs."<<price;
    }

};
double PetrolPump:: priceperlitre = 270.50;
int main()
{
    PetrolPump c1(9009,12);
    c1.printReceipt();
}