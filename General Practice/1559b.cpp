#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define testcase int t; cin>>t; while(t--)
void solve() {
    int n, cnt=0; cin>>n;
    string s; cin>>s;
    for(int i=0; i<n; i++) {
        if(s[i]!='?') {
            cnt++;
        }
    }
    if(!cnt) {
        s[0]='R';
    }
    for(int i=1; i<n; i++) {
        if(s[i]=='?' and s[i-1]!='?') {
            s[i] = s[i-1]^('B'^'R');
        }
    }
    for(int i=n-2; i>=0; i--) {
        if(s[i]=='?' and s[i+1]!='?') {
            s[i] = s[i+1]^('B'^'R');
        }
    }
    cout<<s<<endl;
}
 
int32_t main() {
    testcase
    solve();
    return 0;
}