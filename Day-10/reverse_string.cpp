#include <iostream>
#include <cstring>
#include<algorithm>
using namespace std;

int main() {
    char str[10];
    cin.getline(str, 10);
    int i = 0;
    int j = strlen(str) - 1;
    while(i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;

    }
    cout << "Reversed string: " << str << endl;
    return 0;
}
