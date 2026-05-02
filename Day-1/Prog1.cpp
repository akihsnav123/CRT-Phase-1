/*WAP that takes a temp. value in celsius as input from the user 
and converts it into fahrenite and outputs the result*/
#include<iostream>
using namespace std;

int main() {
    double c, f;
    cout<<"Enter value in C:";
    cin>>c;
    f = (c*1.8) / 32.0;
    cout<<"\nTemp. in F:"<<f;
    return 0;
}