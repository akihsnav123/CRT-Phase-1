#include <iostream>
using namespace std;

int calculateVolume(int shots) {
    int volume= 30;
    return shots * volume;
}

int main() {
    int shots;
    
    cout << "Enter number of coffee shots: ";
    cin >> shots;
    int totalVolume = calculateVolume(shots);
    cout << "Total coffee consumed = " << totalVolume << " ml" << endl;
    return 0;
}