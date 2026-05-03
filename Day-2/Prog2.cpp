/*WAP to print senior citizen for age 100+, eligible to vote for 18+ and underage for below 18*/
#include<iostream>
using namespace std;

int main() {
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if(age>=100) {
        cout<<"Senior  citizen";
    }
    else if( age >= 18 && age<= 100) {
        cout<<"\nEligible to vote";
    }
    else {
        cout<<"\nYou are underage";
    }
    return 0;
}