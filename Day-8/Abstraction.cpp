#include<iostream>
using namespace std;

class ATM {
    private:
    int balance;
    public:
    ATM(int balance) {
        this->balance = balance;
    }
    void withdraw(int amount) {
        //withdraw method
        if(amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    };
   void showBalance() {
        cout << "Current Balance: " << balance << endl;
    };
};
    int main() {
        ATM atm(5000);
        atm.showBalance();
        atm.withdraw(100);
        atm.showBalance();
        return 0;
    }

