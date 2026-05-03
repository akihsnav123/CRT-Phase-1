/*WAP that idenyifies if a character is uppercase 
or lowercase*/

#include<iostream>
using namespace std;

int main() {
    char ch;
    cout<<"Enter the variable:";
    cin>>ch;

    if (ch>='A' && ch<='Z') {
        cout<<"UPPERCASE";
    }
    else if(ch>='a' && ch<='b') {
        cout<<"lowercase";
    }
    else {
        cout<<"Invalid";
    }
    return 0;
}