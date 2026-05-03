/*WAP that takes a integer input a and multiply a by 4 using
left shift bitwise operator. Print the value of a*/
#include<iostream>
using namespace std;

int main() {
    int a;
    cout<<"Enter the value of a:";
    cin>>a;
    int result = a<<2;
    cout<<result;
    return 0;
}