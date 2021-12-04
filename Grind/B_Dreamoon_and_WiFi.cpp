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
 
// Returns factorial of n
int fact(int n) {
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

int nCr(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

void solve() {
    string og, uk;
    cin>>og>>uk;

    float ans;
    int len = og.length();
    int plusOg=0, minusOg=0, qn=0, plus=0, minus=0;

    loop(i, 0, len) {
        plusOg+=(og[i]=='+');
        minusOg+=(og[i]=='-');
        plus+=(uk[i]=='+');
        minus+=(uk[i]=='-');
        qn+=(uk[i]=='?');
    }

    if(plus==plusOg && minus==minusOg && qn==0) {
        ans+=1;
        printf("%.12f", ans);
        return;
    }

    if(plus > plusOg || minus > minusOg) {
        printf("%.12f", ans);
        return;
    }

    // total outcomes = qn
    // favourable = (qn plusOg-plus) * (qn-plusOg-plus minusOg-minus)
    ans = nCr(qn, plusOg-plus) * nCr(qn-plusOg+plus, minusOg-minus) / pow(2, qn);
    printf("%.12f", ans);
}

int32_t main() {
    // testcase
    solve();
    return 0;
}