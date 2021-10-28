#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define testcase int t; cin>>t; while(t--)
void solve() {
    int n, m, x;
    cin>>n>>m>>x;
    x--;
    int y = x/n;
    int r = x%n;
    int ans = r*m + y + 1;
    cout<<ans<<endl;
    return;
}

int32_t main() {
    testcase
    solve();
    return 0;
}