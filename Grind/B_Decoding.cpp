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
    int length; cin>>length;
    string decoded, ans;
    cin>>decoded;
    if(length%2) {
        ans+=decoded[0];
        for(int i=1; i<length; i++) {
            if(i%2) {
                ans = decoded[i] + ans;
            } else {
                ans+=decoded[i];
            }
        }
    } else {
        ans+=decoded[0];
        for(int i=1; i<length; i++) {
            if(i%2) {
                ans+=decoded[i];
            } else {
                ans = decoded[i] + ans;
            }
        }
    }
    cout<<ans<<endl;
}

int32_t main() {
    // testcase
    solve();
    return 0;
}