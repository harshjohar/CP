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
        int a, b, moves = 0;
        cin>>a>>b;
        if(a==0) {cout<<b<<' '<<0<<endl;}
        else if(b==0) {cout<<a<<' '<<0<<endl;}
        else if(a==b) {cout<<0<<' '<<0<<endl;}
        else {
            int gcd;
            if(a>b) {
                gcd = a-b;
                // a-b because i want a and b to be consecutive multiples of a number i.e. my gcd.
            }
            else {
                gcd = b-a;
            }

            int mod1 = a%gcd;
            int steps = min(mod1, gcd-mod1);
            cout<<gcd<<' '<<steps<<endl;;
        }
    }
    
    return 0;
}