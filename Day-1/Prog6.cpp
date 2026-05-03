/*WAP that takes two integers as input from the user and swaps 
their value using a temp value*/

#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout<<"Enter value of a:";
    cin>>a;
    cout<<"\nEnter value of b:";
    cin>>b;
    int c= a;
    a = b;
    b = c;
    cout<<"\na:"<<a;
    cout<<"\nb:"<<b;
    return 0;
}