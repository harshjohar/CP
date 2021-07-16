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
const int mod = 1e9 + 7;
// bss i kra ti isne

// fast modular exponentiation
inline int power(int a, int b){
	int ans = 1;
	while(b){
		if(b & 1LL)	ans = (1LL * ans * a) % mod;
		a = (1LL * a * a) % mod;
		b >>= 1;
	}
	return ans;
}

// why i even chose to do this qn
// never gonna try such shit again, until m a pro
// sorry

int32_t main() {
    fastio;
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    
    int k; cin>>k;
    bool even=true, valid=false;

    int x = 2;
    while(k--) {
        int in; cin>>in;
        if(in>1) valid=true;   // all one isn't favourable
        if(!(in&1LL)) { // true when in is odd
            even=false;
        }
        x=power(x, in);
    }
    if(!valid) {
        cout<<"0/1"<<endl;
        return 0;
    }
    // ans is y/x
    
    // x is anyway equal to 2^(n-1)
    x = (1LL*x*power(2, mod-2))%mod;
    int y = (mod+x+(!even?1:-1))%mod;
    y = (1LL*y*power(3, mod-2))%mod;

    cout<<y<<'/'<<x<<endl;
    return 0;
}