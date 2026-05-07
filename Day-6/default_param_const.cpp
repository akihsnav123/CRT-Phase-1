#include <iostream>
using namespace std;

class Student {
private:
    string name, regNo, email;
    int rollNo;
    long long phoneNo;
    float marks;

public:
    Student() {
        name = "Not Available";
        rollNo = 0;
        regNo = "N/A";
        email = "N/A";
        phoneNo = 0;
        marks = 0;
    }

    Student(string n, int r, string reg, string e, long long p, float m) {
        name = n;
        rollNo = r;
        regNo = reg;
        email = e;
        phoneNo = p;
        marks = m;
    }

    void display() {
        cout << "Name      : " << name << endl;
        cout << "Roll No   : " << rollNo << endl;
        cout << "Reg No    : " << regNo << endl;
        cout << "Email     : " << email << endl;
        cout << "Phone No  : " << phoneNo << endl;
        cout << "Marks     : " << marks << endl;
    }
};

int main() {
    Student s1;
    Student s2("Vanshika", 101, "REG2026", "vanshika@gmail.com", 9876543210, 89.5);
    s1.display();
    s2.display();

    return 0;
}