#include <iostream>
using namespace std;

class CurrencyExchange{
    private:
    const double PKR_to_USD_Rate;
    string &branchName;
    int totalTransactions;

    public:
    CurrencyExchange(double p, string &b, int t): PKR_to_USD_Rate(p), branchName(b), totalTransactions(t){};

    void convertPKRtoUSD(int totalTransactions){
        double total = totalTransactions / PKR_to_USD_Rate;
        cout << "Total in USD: $" << total << endl;
    }

    void display(){
        cout << "PKR_to_USD_Rate : " << PKR_to_USD_Rate << endl;
        cout << "BranchName : " << branchName << endl;
        cout << "Total Transactions : PKR " << totalTransactions << endl;

    }
};
int main(){
    string branch = "Malir"; 
    CurrencyExchange c1(280.0, branch, 78000);
    c1.display();
    c1.convertPKRtoUSD(78000);
}