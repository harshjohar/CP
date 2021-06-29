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
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    
    testcase {
        int n, x, k;
        cin>>n>>x>>k;
        if(k<x) {
            cout<<0<<endl;
        }
        if(k==x) {
            cout<<n-1<<endl;
        }
        int sub=0, sum=0;
        if(k>x) {
            if(((n-1)*x)%k==0) {
                int fi = (k*(k-1)/2);
                int se = k*(n-k);
                sum = fi+se;
            }
            else {

                sum = n*(n-1)/2;
                sub = (n-1)*x/k;
            }
            cout<<sum-sub<<endl;
        }
    }
    return 0;
}