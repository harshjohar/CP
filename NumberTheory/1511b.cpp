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

int NumDigits(int x) {
    int ans=0;
    while(x>0) {
        x/=10;
        ans++;
    }
    return ans;
}

void solve() {
    int a, b, c;
    cin>>a>>b>>c;
    int cVal = pow(10, c-1);
    int aVal = cVal;
    int bVal = cVal;

    while(NumDigits(aVal) < a) {
        aVal *=2;
    }

    while(NumDigits(bVal) < b) {
        bVal *= 3;
    }

    cout<<aVal<<" "<<bVal<<endl;
}

int32_t main() {
    testcase
    solve();
    return 0;
}