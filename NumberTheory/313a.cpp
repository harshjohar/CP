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


void solve() {
    int n; cin>>n;
    if(n>=0) {
        cout<<n<<endl;
    }
    else {
        int u = n%10;
        int t = (n%100-u)/10;
        if(u<t) {
            cout<<n/10<<endl;
        } else {
            cout<<(n-t*10)/10 + u<<endl;
        }
    }
}

int32_t main() {
    solve();
    return 0;
}