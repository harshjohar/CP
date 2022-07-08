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
#define ff first
#define ss second
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n";
#define debug(x) cout<<(#x)<<": "<<x<<endl
#define debugvi(v) cout<<(#v)<<": "; loop(i, 0, v.size()) cout<<v[i]<<" "; cout<<endl;


void solve() {
    int n, k;
    cin>>n>>k;

    string s; cin>>s;

    int c=n;
    

    loop(i, 1, n) {
        if(s.substr(i)==s.substr(0, n-i)) {
            c=i;
            break;
        }
    }

    string repeatThis = s.substr(0, c);

    string ans;
    for(int i=0; i<k; i++) {
        ans+=repeatThis;
    }

    ans+=s.substr(c);

    cout<<ans;

}

int32_t main() {
    // testcase
    solve();
    return 0;
}