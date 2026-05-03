/*WAP that takes two integer values as input and find the greater values using ternary operator*/
#include<iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"Enter two values:";
    cin>>a>>b;
    int max = (a>b) ? a : b;
    cout<<"\nLargest value is:"<<max;
    return 0;
}