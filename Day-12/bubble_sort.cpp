#include<iostream>
using namespace std;

void swap_array(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int bubbleSort(int num[], int n) {
    for (int i=0; i<n; i++) {
        bool flag= false;
        for (int j = 0;j<n-i-1; j++) {
            if (num[j] > num[j+1]) {
                swap_array(num[j], num[j+1]);
                flag = true;
            } 
        }
        if (!flag) {
            cout<<"Array is already sorted."<<endl;
            break;
        }
    }
}
int main() {
    int arr[5] ={1,2,3,5,4} ;
    int size = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, size);  
    cout<<"Sorted array: ";
    for (int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}