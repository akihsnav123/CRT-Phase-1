#include <iostream>
using namespace std;

void showNumber(int num = 100) {
    cout << "Number is: " << num << endl;
}

int main() {
    showNumber();    
    showNumber(50);

    return 0;
}