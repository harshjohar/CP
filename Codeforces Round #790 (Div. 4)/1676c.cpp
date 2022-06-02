#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector< vector<int> >
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
    int n, m;
    cin>>n>>m;

    vector<string> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    // sort(v.begin(), v.end());
    // debugvi(v);
    int ans = INT_MAX;

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            int d = 0;

            for(int k=0; k<m; k++) {
                d+=abs(v[i][k]-v[j][k]);
            }

            ans = min(ans, d);
        }
    }
    cout<<ans<<endl;
}

int32_t main() {
    testcase
    solve();
    return 0;
}