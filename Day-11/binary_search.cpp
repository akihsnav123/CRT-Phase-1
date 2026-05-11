#include<iostream>
using namespace std;
int binarySearch(int num[], int n, int target) {
    int left = 0;
    int right = n - 1;
   while(left <= right) {
    int mid = left + (right - left) /2;
    if (num[mid] == target) {
        return mid;
    }
    else if (num[mid] < target)
{
    left = mid + 1;
}   
else {
    right = mid - 1;
}
    }
    return -1;
 };
   int main() {
    int arr[5] = {1,2,3,4,5};
    int key = 3;
    int size = sizeof(arr)/sizeof(arr[0]);
    if (binarySearch(arr, size, key) != -1) {
        cout << "Element found at index: " << binarySearch(arr, size, key) << endl;
    }
    else {
        cout << "Element not found in the array." << endl;
    }
   }