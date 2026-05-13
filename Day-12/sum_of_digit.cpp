#include<iostream>
using namespace std;

int sum_of_digits(int n) {
    //base case
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sum_of_digits(n / 10);
}   
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout<< sum_of_digits(n) << endl;
    return 0;
}