#include<iostream>
using namespace std;

void swap_array(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int selectionSort(int num[], int n) {
    for (int i=0; i<n; i++) {
        int mini = i;
        for (int j = i + 1; j < n; j++) {
            if (num[mini] > num[j]) {
                mini = j;
            } 
        }
        swap_array(num[i], num[mini]);
    }
}
int main() {
    int arr[6] ={19, 35, 3, 75, 2, 4} ;
    int size = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, size);  
    cout<<"Sorted array: ";
    for (int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}