#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = "jecrc";

    cout << str1 <<" " << str2 << endl;

    // length of string
    int n = str1.length();
    cout << "Length of string is: " << n << endl;

    // append string
    cout << "After appending: " << str1.append("students") << endl;

    // empty string
    cout << "is string empty: " << str1.empty() << endl;

    // concatenate string
    cout << "Concatenated string: " << str1 + "Bacho " << endl;
    cout<<"After concatenation: "<<str1<<endl;

    //push back
    str2.push_back('s');
    cout<<"After push back: "<<str2<<endl;  

    //pop back
    str2.pop_back();
    cout<<"After pop back: "<<str2<<endl;

    // find 
    int index = str1.find("students");
    cout<<"Index of students: "<<index<<endl;

    //swap

    str1.swap(str2);
    cout<<"After swap: "<<str1<<" "<<str2<<endl;

    //sub str
    string subStr = str2.substr(5, 6);
    cout<<"Substring: "<<subStr<<endl;

    //get line 
    string str3;
    getline(cin, str3);
    cout <<"You entered: "<< str3<< endl;

    return 0;
}
