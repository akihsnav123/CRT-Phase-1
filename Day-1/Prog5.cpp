/*WAP that takes two numbers and a operator as input from the user
and form the corresponding arithmetic operation and print the result*/

#include<iostream>
using namespace std;

int main() {
    double n1, n2;
    char op;

    cout<<"Enter first number, an operand and second number:";
    cin>>n1>>op>>n2;

    switch(op) {
        case '+':
            cout<<n1<<"+"<<n2<<"="<<(n1+n2);
            break;
        case '_':
            cout<<n1<<"-"<<n2<<"="<<(n1-n2);
            break;
        case '*':
            cout<<n1<<"*"<<n2<<"="<<(n1*n2);
            break;
        case '/':
            cout<<n1<<"/"<<n2<<"="<<(n1/n2);
            break;
        default:
        cout<<"\nError"<<op<<" is not valid";
        break;
    }
    return 0;
}