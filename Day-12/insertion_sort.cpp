#include<iostream>
using namespace std;


void swap_array(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int insertionSort(int num[], int n) {
    for (int i=1; i<n; i++) {
        int key = num[i];
        int j = i - 1;
        while (j >= 0 && num[j] > key) {
            num[j + 1] = num[j];
            j = j - 1;
        }
        num[j + 1] = key;
    }
}
int main() {
    int arr[6] ={19, 35, 3, 75, 2, 4} ;
    int size = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, size);  
    cout<<"Sorted array: ";
    for (int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}