#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define int long long int
#define pb push_back
#define loop(i, a, b) for(int i=a; i<b; i++)
#define loopb(i, a, b) for(int i=a; i>=b; i--)
#define testcase int t; cin>>t; while(t--)
#define pii pair<int, int>
#define f first
#define s second
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n";
#define debug(x) cout<<(#x)<<": "<<x<<endl
#define debugvi(v) cout<<(#v)<<": "; loop(i, 0, v.size()) cout<<v[i]<<" "; cout<<endl;

int32_t main() {
    fastio;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n, m;
    cin>>n>>m;
    vi total_debts(n, 0);
    int p1, p2, amount;
    loop(i, 0, m) {
        cin>>p1>>p2>>amount;
        p1--; p2--;
        // debug(amount);
        total_debts[p1]+=amount;
        total_debts[p2]-=amount;
        // debugvi(total_debts);
    }

    int ans = 0;
    loop(i, 0, n) {
        if(total_debts[i]<0) ans+=(0-total_debts[i]);
    }

    cout<<ans<<endl;
    
    return 0;
}