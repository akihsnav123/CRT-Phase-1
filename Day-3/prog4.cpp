/* WAP that takes a +ve integer m as a input from user 
and then calculates it's factorial using for loop*/
#include<iostream>
using namespace std;

int main() {
    int m,fact;
    fact = 1;
    cout<<"Enter the value of m:"<<" ";
    cin>>m;
     for(int i= 1;i<=m;i++) {
        fact = fact *= i;
        }
        cout<<"Factorial:"<<fact<<" ";
     
     return 0;
}