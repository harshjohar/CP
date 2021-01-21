#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++) {
        string text;
        cin>>text;
        int check;
        // cout<<text.length()<<", "<<text;
        int length = text.length();
        // cout<<length;
        if(length%2 == 0) {
            string s1 = text.substr(0, length/2);
            string s2 = text.substr(length/2, length/2);
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());
            check = (s1).compare(s2);
        }
        else {
            string s1 = text.substr(0, length/2);       // substr(begin_point, length)
            string s2 = text.substr(length/2 +1, length/2);
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());
            check = (s1).compare(s2);       // compare returns 0 if both the strings are equal
        }

        if(check == 0) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}