#include<bits/stdc++.h>
using namespace std;

int main() {
    int  n; cin>>n;
    string s; cin>>s;
    string ans;
    int a=0, d=0;
    for(int i=0; i<n; i++) {
        if(s[i]=='A') a++;
        else d++;
    }
    if(a>d) ans="Anton";
    else if (a<d) ans="Danik";
    else ans="Friendship";
    cout<<ans<<"\n";
}