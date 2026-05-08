#include<iostream>
using namespace std;

namespace Virat {
    void show() {
        cout << "RCB" << endl;
    }
}
namespace Rohit {
    void show() {
        cout << "MI" << endl;
    }
}
int main() {
    Virat::show();
    Rohit::show();
    return 0;
}