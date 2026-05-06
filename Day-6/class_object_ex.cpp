#include<iostream>
using namespace std;

class student {
    public:
    string name;
    int roll_no;
    int batch;
};

 int main() {
    student s1;
    s1.name = "Vanshika";
    s1.roll_no = 2234;
    s1.batch = 10;
    
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Roll No.:"<<s1.roll_no<<endl;
    cout<<"Batch: "<<s1.batch<<endl;

    return 0;
}
