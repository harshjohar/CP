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


long double distance_between(pii first, pii second) {
    int x = (first.f - second.f)*(first.f - second.f);
    int y = (first.s - second.s)*(first.s - second.s);

    return sqrtl(x+y);
}

int32_t main() {
    fastio;
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    
    int n, k; cin>>n>>k;
    vector<pii> coordinates(n);
    loop(i, 0, n) {
        cin>>coordinates[i].f>>coordinates[i].s;
    }
    float distance_covered = 0;
    loop(i, 1, n) {
        distance_covered+=distance_between(coordinates[i], coordinates[i-1]);
    }

    distance_covered*=k;

    float ans = distance_covered/50;

    printf("%.7f", ans);
    return 0;
}