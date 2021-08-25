#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>

int main() {
    string s;
    cin>>s;
    int sz = s.size();
    vi alphabets(26, 0);
    for(int i=0; i<s.size(); i++) {
        alphabets[s[i]-'a']++;
    }
    int unique=0;
    for(int i=0; i<26; i++) {
        // cout<<alphabets[i]<<" ";
        if(alphabets[i]) unique++;
    }
    // cout<<"\n"<<unique<<"\n";
    if(unique%2) cout<<"IGNORE HIM!"<<"\n";
    else cout<<"CHAT WITH HER!"<<"\n";
}