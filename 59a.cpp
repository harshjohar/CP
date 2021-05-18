#include<bits/stdc++.h>
using namespace std;

int main() {
    string s; cin>>s;
    int cu=0, cl=0;
    for(int i=0; i<s.size(); i++) {
        if(isupper(s[i])) cu++;
        else cl++;
    }
    if(cu>cl) {
        for(int i=0; i<s.size(); i++) {
            cout<<(char)toupper(s[i]);
        }
    }
    else {
        for(int i=0; i<s.size(); i++) {
            cout<<(char)tolower(s[i]);
        }
    }
    cout<<"\n";
}