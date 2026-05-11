#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string s) {
    cout<<"Enter a string: ";
    getline(cin, s);
    int start =0;
    int end = s.length() - 1;
    while(start < end) {
        while(!isalnum(s[start]) && start < end) {
            start++;
        }
        while(!isalnum(s[end]) && start < end) {
            end--;
        }
        if (tolower(s[start]) != tolower(s[end])) {
            return false;
        }
        start++;
        end--;
    }
    return true;
 }

 /*s = regex_replace(s, regex("[^a-zA-Z0-9]"), "");
    int start =0;
    int end = s.length() - 1;
    while(start < end) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;*/