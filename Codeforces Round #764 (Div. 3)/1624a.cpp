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
    int min=INT_MAX, max=INT_MIN, x;
    for(int i=0; i<n; i++) {
        cin>>x;
        if(x>max) {
            max=x;
        }
        if(x<min) {
            min=x;
        }
    }

    cout<<max-min<<endl;
}

int32_t main() {
    testcase
    solve();
    return 0;
}