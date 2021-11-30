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


int32_t main() {
    fastio;
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    
    int n, q;
    cin>>n>>q;
    string ts; cin>>ts;

    vi pref(n);
    pref.pb(0);
    pref[1]=ts[0]-'a'+1;
    loop(i, 2, n+1) {
        pref[i]+=pref[i-1]+ts[i-1]-'a'+1;
    }
    // int q; cin>>q;
    // debugvi(pref);
    int start, end;
    while(q--) {
        cin>>start>>end;
        // start--; end--;
        int ans=0;
        if(start>1)
            ans+=pref[end]-pref[start-1];
        else 
            ans+=pref[end];
        cout<<ans<<endl;
    }
    return 0;
}