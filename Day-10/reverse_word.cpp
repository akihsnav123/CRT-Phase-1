
#include <iostream>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int n = s.size();
        int i =0;

        while (i < n) {
            string temp="";
            while(s[i]==' '&& i<n)
                i++;

            while(s[i]!=' '&&i<n){
                temp+= s[i];
                i++;
            }
            cout<<temp<<endl;
            if(temp.size()>0){
                if(ans.size()==0) ans=temp;
                else  ans = temp+" "+ans;
            }
        }
        return ans;
    }
    
};
int main() {
    string s = "the sky is blue";
    Solution sol;
    cout<<sol.reverseWords(s)<<endl;
    return 0;
}
/*
int main() {
    string s = "the sky is blue";
    int end = s.length() - 1;

    for (int i = end; i >= 0; i--) {

        if (s[i] == ' ') {
            for (int j = i + 1; j <= end; j++) {
                cout << s[j];
            }
            cout << " ";
            end = i - 1;
     }  }

    for (int i = 0; i <= end; i++) {
        cout << s[i];
    }
    return 0;
}
*/
