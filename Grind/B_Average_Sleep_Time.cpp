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
    int n, k;
    cin>>n>>k;
    float sumTotal = 0;
    float totalWeeks = n-k+1;
    float tempSum = 0;
    vi v(n);
    loop(i, 0, n) {
        cin>>v[i];
    }

    loop(i, 0, k) {
        tempSum+=v[i];
    }
    // debug(tempSum);
    sumTotal+=tempSum;

    loop(i, 1, n-k+1) {
        tempSum = tempSum-v[i-1]+v[i+k-1];
        // debug(tempSum);
        sumTotal+=tempSum;
    }

    double ans = sumTotal/totalWeeks;
    printf("%.10f", ans);
}

int32_t main() {
    // testcase
    solve();
    return 0;
}