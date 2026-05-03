/*WAP that takes a persons age as input and if the age is 18 above prints eligible*/
#include<iostream>
using namespace std;

int main() {
    int age;
    cout<<"Please enter your age:";
    cin>>age;
    if(age>=18){
        cout<<"\nEligible to vote";
    }
    else {
        cout<<"\nNot eligible to vote";
    }
    return 0;
}

