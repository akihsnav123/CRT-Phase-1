#include<iostream>
using namespace std;

class car{
    const int speed =120;
    public: 
    void showSpeed() const {
        // speed = 150; // Error: cannot modify a const variable
        cout<<"Speed of the car is: "<<speed<<" km/h"<<endl;
    }   
};
int main() {
    car c;
    c.showSpeed();
    return 0;
}

