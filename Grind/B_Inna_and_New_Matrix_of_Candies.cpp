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
    int m, n;
    cin>>n>>m;
    set<int> h;
    bool valid = true;
    int ans=0, sIdx, gIdx;
    string line;
    loop(i, 0, n) {
        cin>>line;
        loop(j, 0, m) {
            if(line[j]=='G') {
                gIdx=j;
            }
            if(line[j]=='S') {
                sIdx=j;
            }
        }

        if(sIdx < gIdx) {
            valid=false;
        } else {
            h.insert(sIdx-gIdx);
        }
    }
    if(valid) {
        cout<<h.size()<<endl;
    }
    else {
        cout<<-1<<endl;
    }
}

int32_t main() {
    // testcase
    solve();
    return 0;
}