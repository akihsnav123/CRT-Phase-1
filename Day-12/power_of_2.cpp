#include<iostream>
using namespace std;

bool power_of_2(int n) {
 //base case
 if(n == 0) {
    return false;
 }
 if(n == 1) {
    return true;
 }
  return (n%2 == 0) && power_of_2(n/2);

};
 int main() {
    int t;
    cout<<"Enter number of test cases:";
    cin>>t;
    while(t--) {
        int n;
        cout<<"Enter value of n:";
        cin>>n;
        cout<<power_of_2(n)<<endl;
    }
    return 0;
 }
