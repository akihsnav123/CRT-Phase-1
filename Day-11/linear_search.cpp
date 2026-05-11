#include<iostream>
using namespace std;
int linearSearch(int num[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (num[i] == target) {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[5] = {1,2,3,4,5};
    int key = 3;
    int size = sizeof(arr)/sizeof(arr[0]);
    int result = linearSearch(arr, size, key);
        cout << "Element found at index: " << result << endl;
    return 0;
}














