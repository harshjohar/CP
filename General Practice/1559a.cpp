#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define testcase int t; cin>>t; while(t--)
void solve() {
    int n; cin>>n;
    int h; cin>>h;
    int ans=h;
 
    for(int i=1; i<n; i++) {
        cin>>h;
        ans&=h;
    }   
    cout<<ans<<endl;
    return;
}
 
int32_t main() {
    testcase
    solve();
    return 0;
}