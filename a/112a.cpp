#include<bits/stdc++.h>
using namespace std;

string lowercase(string s) {
    for(int i=0; i<s.size(); i++) {
        s[i]=tolower(s[i]);
    }
    return s;
}


int main() {
    string s1, s2;
    cin>>s1>>s2;
    string s1_ans = lowercase(s1);
    string s2_ans = lowercase(s2);
    if(s1_ans==s2_ans) cout<<"0"<<endl;
    if(s1_ans>s2_ans) cout<<"1"<<endl;
    if(s1_ans<s2_ans) cout<<"-1"<<endl;

}