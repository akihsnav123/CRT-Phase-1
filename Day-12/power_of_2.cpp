#include<iostream>
using namespace std;

int power_of_2(int n) {
 //base case
 if(n == 0) {
    return 0;
 }
 if(n == 1) {
    return 1;
 }
  return (n%2 == 0 && n/2);

};
 int main() {
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    cout<<power_of_2(n)<<endl;
    return 0;
 }
