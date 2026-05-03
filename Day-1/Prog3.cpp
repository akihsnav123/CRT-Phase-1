/*WAP that takes three integer inputs representing  the 
sides of triangle. Print true if triangle is equilateral
else print false*/
#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cout<<"Enter three sides of triangle:";
    cin>>a>>b>>c;
    if(a==b && a==c) {
        cout<<"True";
    }
    else {
        cout<<"False";
    }
    return 0;
}