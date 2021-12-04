#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define int long long int
#define pb push_back
#define loop(i, a, b) for(int i=a; i<b; i++)
#define loopb(i, a, b) for(int i=a; i>=b; i--)
#define testcase int t; cin>>t; while(t--)
#define pii pair<int, int>
#define mii map<int, int>
#define f first
#define s second
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n";
#define debug(x) cout<<(#x)<<": "<<x<<endl
#define debugvi(v) cout<<(#v)<<": "; loop(i, 0, v.size()) cout<<v[i]<<" "; cout<<endl;

int numberOfDigits(int n) {
    if(n%10==n) {
        return 1;
    }
    return 1 + numberOfDigits(n/10);
}

int power(int e, int x) {
    int ans = 1;
    while(x--) {
        ans*=e;
    }
    return ans;
}

void solve() {
    int n; cin>>n;
    int d = numberOfDigits(n)-1;
    if(d==0) {
        cout<<1<<endl;
        return;
    }
    int tenPower = power(10, d);
    int first = (n%(tenPower*10) - n%(tenPower))/tenPower;
    // debug(first);
    int lucky = (first+1)*tenPower;
    int ans = lucky-n;
    cout<<ans<<endl;
}

int32_t main() {
    // testcase
    solve();
    return 0;
}