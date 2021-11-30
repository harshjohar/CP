#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define testcase int t; cin>>t; while(t--)

int gcd(int a, int b) {
    if(b==0) {
        return a;
    }
    return gcd(b, a%b);
}
// we want to minimize the (e+w) so we ll maximize x, and x should be divisible by 100 and k, so x = (100, k) 
void solve() {
    int n; cin>>n;
    cout<<100/gcd(100, n)<<endl;
}

int32_t main() {
    testcase
    solve();
    return 0;
}