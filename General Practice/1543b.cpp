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
        int n; cin>>n;
        vi cars(n);
        int total = 0;
        loop(i, 0, n) {
            cin>>cars[i];
            total+=cars[i];
        }
        if(total%n) {
            int mod = total%n;
            mod *= (n-mod);
            // mod is extra cars, n-mod is extra space left
            cout<<mod<<endl;
        }
        else {
            cout<<0<<endl;
        }
    }
    return 0;
}