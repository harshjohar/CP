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
    // middle = (2, 2)
    int row=0, column=0, x;
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            cin>>x;
            if(x==1) {
                column = j, row=i;
            }
        }
    }
    int ans = abs(2-row) + abs(2-column);
    cout<<ans<<endl;
}

int32_t main() {
    // testcase
    solve();
    return 0;
}