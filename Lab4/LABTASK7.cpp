#include <iostream>
using namespace std;

class SecureBankAccount{
    private:

    int accountNumber;
    double balance;
    const string accountType;
    int *logHistory;

    public:

    SecureBankAccount(int accountNumber, double balance, string a , int log): accountType(a){
        logHistory = new int;
        *logHistory = log;
        this -> accountNumber = accountNumber;
        this -> balance = balance;
        if (balance < 500.0) {
            cout << "Low Balance...." << endl;
        }
    }

    SecureBankAccount(const SecureBankAccount &s)
        : accountType(s.accountType)   
    {
        this->accountNumber = s.accountNumber;
        this->balance = s.balance;

        logHistory = new int;
        *logHistory = *(s.logHistory); 
    }

    ~SecureBankAccount() {
        cout << "Releasing memory for account: " << accountNumber << endl;
        delete logHistory;
    }

    void display(){
        cout << "Account Number: " << accountNumber << endl;
        cout << "balance: " << balance << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "logHistory: " << *logHistory << endl << endl; 
    }
};
int main(){
    SecureBankAccount s1(2536, 5789,"Current",5);
    s1.display();
}