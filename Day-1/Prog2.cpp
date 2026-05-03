/*WAP that declares a global integer variable initialized to 100
in main function take an integer input from the user platform floating
point perform division of global variable by the user i/p */
#include<iostream>
using namespace std;
int gvar = 100;
int main() {
int n;
cout<<"Enter a integer value:";
cin>>n;
double result = (double) gvar/n;
cout<<"\nResult:"<<result;
return 0;
}