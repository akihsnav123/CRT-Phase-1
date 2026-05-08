#include <iostream>
using namespace std;

class College {
protected:
    string name;
    int age;

public:
    College(string n, int a) {
        name = n;
        age = a;
    }
    virtual void category() {
        cout << "Belongs to: College" << endl;
    }

    void displayDetails() {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

class Student : public College {
private:
    int rollNo;
    string studentClass;
    string course;

public:
    Student(string n, int a, int r, string c, string cr)
        : College(n, a) {

        rollNo = r;
        studentClass = c;
        course = cr;
        }
    void category() override {
        cout << "Belongs to: Student" << endl;
    }

    void displayStudent() {
        displayDetails();
        cout << "Roll No : " << rollNo << endl;
        cout << "Class   : " << studentClass << endl;
        cout << "Course  : " << course << endl;
    }
};

class Teacher : public College {
private:
    string dept;
    int empId;
    float salary;

public:
    Teacher(string n, int a, string d, int id, float s)
        : College(n, a) {

        dept = d;
        empId = id;
        salary = s;
    }
    void category() override {
        cout << "Belongs to: Teacher" << endl;
    }

    void displayTeacher() {
        displayDetails();
        cout << "Department  : " << dept << endl;
        cout << "Employee ID : " << empId << endl;
        cout << "Salary      : " << salary << endl;
    }
};

int main() {

    College c("JECRC"   , 10 );
    Student s("Vanshika", 21, 2234, "B.Tech", "Computer Science");
    Teacher t("xyz", 45, "Computer Dept", 5001, 55000);

    cout << "College Details:\n";
    c.displayDetails();
    c.category();

    cout << "Student Details:\n";
    s.displayStudent();
    s.category();

    cout << "Teacher Details:\n";
    t.displayTeacher();
    t.category();

    return 0;
}