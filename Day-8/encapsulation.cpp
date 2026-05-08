#include<iostream>
using namespace std;

class ATM {
    private:
    int balance;
    public:
    void setBalance(int b) {
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
    int getBalance() {
        return balance;
    }

    };
    int main() {
        int n;
        cin>>n;
        ATM atm;
        atm.setBalance(n);
        cout<<"Balance is:"<< atm.getBalance()<<endl;
        atm.withdraw(100);
        cout<<"Balance is:"<<  atm.getBalance()<<endl;
        return 0;
    }
