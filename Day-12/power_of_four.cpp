#include<iostream>
using namespace std;
bool isPowerOfFour(int n) {
    //base case
    if(n==0) {
        return false;
    }
    if(n==1) {
        return true;
    }
    return (n%4 == 0) && isPowerOfFour(n/4);
}

int main() {
    int t;
    cout<<"Enter number of test cases:";
    cin>>t;
    while(t--) {
        int n;
        cout<<"Enter value of n:";
        cin>>n;
        cout<<isPowerOfFour(n)<<endl;
    }
    return 0;
}