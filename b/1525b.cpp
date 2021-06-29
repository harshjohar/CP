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
        int seerat[n];
        int seetu[n];
        loop(i, 0, n) {
            cin>>seerat[i];
            seetu[i]=seerat[i];
        }
        sort(seetu, seetu+n);
        int check=0;
        loop(i, 0, n) {
            if(seerat[i]!=seetu[i]) check=1;
        }
        if(!check) {
            cout<<0<<endl;
            continue;
        }

        if(seerat[0]==1 or seerat[n-1]==n) {
            cout<<1<<endl;
        }

        else if(seerat[0]==n and seerat[n-1]==1) {
            cout<<3<<endl;
        }

        else {
            cout<<2<<endl;
        }

    }
    return 0;
}