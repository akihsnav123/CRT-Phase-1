
#include <iostream>
using namespace std;

int main() {
    string str = "the sky is blue";
    int end = str.length() - 1;

    for (int i = end; i >= 0; i--) {

        if (str[i] == ' ') {
            for (int j = i + 1; j <= end; j++) {
                cout << str[j];
            }
            cout << " ";
            end = i - 1;
        }
    }

    for (int i = 0; i <= end; i++) {
        cout << str[i];
    }
    return 0;
}
