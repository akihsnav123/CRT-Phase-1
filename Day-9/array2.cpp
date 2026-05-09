#include<iostream>
using namespace std;
int main() {
    int arr[5];
    cout<<"Elements of the array: ";
    cin>>arr[0];
    cin>>arr[1];
    cin>>arr[2];
    cin>>arr[3];
    cin>>arr[4];
    for(int i=0; i<5; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}