#include<iostream>
using namespace std;
class employee {
    public:
    static int reg_no;
    employee() {
        reg_no++;
    }
    static void show()
    {
        cout<<"Employee number: "<<reg_no<<endl;
    }
};
int employee::reg_no = 100;
int main() {
    employee e1, e2, e3, e4;
    employee::show();
    return 0;
}