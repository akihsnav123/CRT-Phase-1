#include<iostream>
using namespace std;
/* int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int sum = 0;
    for(int i=0; i<6; i++) {
        sum += arr[i];
    }
    cout<<"Sum of the array elements: "<<sum<<endl;
    return 0;
}
    */
   class sum {
    public:
    int sumofArray(int nums[], int n) {
    int sum =0;
    for(int i = 0; i<n; i++) {
    sum += nums[i];
    }
    return sum;
   }
};
   int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    sum s;
    int result = s.sumofArray(arr, size);
    cout<<result<<endl;
    return 0;
   }