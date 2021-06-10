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
    
    testcase {
        int n; cin>>n;
        vi st(n);
        loop(i, 0, n) cin>>st[i];

        int min_idx=0, max_idx=0, mini=st[0], maxi=st[0];

        loop(i, 0, n) {
            if(st[i]>=maxi) {
                maxi = st[i];
                max_idx = i;
            }
            if(st[i]<=mini) {
                mini = st[i];
                min_idx = i;
            }
        }
        // debug(max_idx);
        // debug(min_idx);
        // if(min_idx <=n/2 and max_idx<=n/2) {
        //     cout<<max(min_idx, max_idx)<<endl;
        // }

        // else if(min_idx<=n/2 and max_idx>=n/2) {
        //     cout<<min(min_idx+n-max_idx+1, max(min_idx, max_idx))<<endl;
        // }

        // else if(min_idx>=2 and max_idx<=n/2) {
        //     cout<<min(max_idx+n-min_idx+1, max(min_idx, max_idx))<<endl;
        // }

        // else {
        //     cout<<n-min(min_idx, max_idx)+1<<endl;
        // }

        int i=max(min_idx, max_idx);
        int j=min(min_idx, max_idx);

        if(j+1>n-i) 
            {cout<<(n-i)+min(i-j, j+1)<<endl;}
        else 
            cout<<j+1+min(i-j, n-i)<<endl;

    }
    return 0;
}