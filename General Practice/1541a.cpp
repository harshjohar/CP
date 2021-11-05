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
        if(!(n%2)) {
            loop(i, 1, n+1) {
                cout<<i+1<<' ';
                cout<<i<<' ';
                i++;
            }
            cout<<endl;
        }
        else {
            loop(i, 1, n-2) {
                cout<<i+1<<' ';
                cout<<i<<' ';
                i++;
            }
            cout<<n<<' '<<n-2<<' '<<n-1<<endl;
        }

    }
    return 0;
}