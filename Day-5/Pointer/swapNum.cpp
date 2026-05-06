#include <iostream>
using namespace std;

void swapN(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}
int main() {
    int a1, b1;
    cout << "Enter two numbers: ";
    cin >> a1>>b1;
    swapN(&a1, &b1);  
    cout << "After swapping:\n";
    cout <<"x="<<a1<<"y="<<b1<<endl;
    return 0;
}