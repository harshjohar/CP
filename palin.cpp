#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        string s1 = s;
        int len = s.length();
        for(int i= len/2; i<len; ++i) {
            s[i] = s[len-i-1];
        }
        if(s>s1) {
            cout<<s<<endl;
        }
        else {
            for(int i=(len-1)/2; i>=0; i--) {
                if(s[i]!='9') {
                    s[i]++;
                    break;
                }
                else {
                    s[i] = '0';
                }
            }
            for(int i=len/2; i<len; ++i) {
                s[i] = s[len-i-1];
            }
            if(s[0] == '0') {
                s+='1';
                s[0] = '1';
            }
            cout<<s<<endl;
        }
    }
    return 0;
}