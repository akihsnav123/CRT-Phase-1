/*WAP in cpp that takes three integers as and find the largest number amongst them using nested loops*/
#include<iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"Enter three integer values:";
    cin>>a>>b>>c;
    cout<<"\nLargest value:";
    if(a>b) {
        if(a>c) {
            cout<<a;
        }
        else {
            cout<<c;;
        }
    }
    else if(b>c) {
        cout<<b;
    }
    else {
        cout<<c;
    }
}