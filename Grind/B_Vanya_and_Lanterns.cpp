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
    int n, l;
    cin>>n>>l;
    vi lalten;
    lalten.push_back(0);
    int x;
    loop(i, 0, n) {
        cin>>x;
        lalten.push_back(x);
    }
    lalten.push_back(l);
    sort(lalten.begin(), lalten.end());
    float largestDiff=0;
    loop(i, 0, n) {
        float diff = lalten[i+1]-lalten[i];
        largestDiff = max(diff, largestDiff); 
    }
    float firstEdge = lalten[1]-lalten[0];
    float lastEdge = l-lalten[n];
    // debugvi(lalten);
    // debug(firstEdge);
    // debug(lastEdge);
    // debug(largestDiff/2);
    // debug(max((largestDiff/2), max(firstEdge, lastEdge)));
    float ans = max((largestDiff/2), max(firstEdge, lastEdge));
    printf("%.10f", ans);
}

int32_t main() {
    // testcase
    fastio;
    solve();
    return 0;
}