#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define testcase int t; cin>>t; while(t--)
void solve() {
    int a, b, c;
    cin>>a>>b>>c;
    int ans1 = max(0LL, max(b, c)+1-a);
    int ans2 = max(0LL, max(a, c)+1-b);
    int ans3 = max(0LL, max(b, a)+1-c);
    cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
}

int32_t main() {
    testcase
    solve();
    return 0;
}