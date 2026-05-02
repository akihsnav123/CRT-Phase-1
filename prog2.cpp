#include<iostream>
using namespace std;

int main() {
    int n;
    int i =1;
    cout<<"Enter a value:";
    cin>>n;
    while(i != n) {
        if(n%2 == 0){
            cout<<i<<endl;
        }
    }
    return 0;
}