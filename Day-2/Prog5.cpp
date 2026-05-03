/*WAP that takes a integer number n as input and prints all the numbers from 1 to n but skip numbers that are divisible by 3 using continue statement */
#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=1;i<=n;i++) {
        if(i%3 == 0) {
            continue;
        }
        cout<<"\n"<<i;
    }
    return 0;
}