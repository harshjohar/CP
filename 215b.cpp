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

int32_t main() {
    fastio;
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    
    int n; cin>>n;
    int r1=0;
    loop(i, 0, n) {
        int tmp; cin>>tmp;
        if(tmp>r1) r1=tmp;
    }

    int m; cin>>m;
    double p1[m];
    loop(i, 0, m) cin>>p1[i];

    int k; cin>>k;
    double p2[k];
    loop(i, 0, k) cin>>p2[i];
    
    double A, B;
    cin>>A>>B;
    // cout<<A/B<<endl;
    double max_r2_sq = 0;
    loop(i, 0, m) {
        loop(j, 0, k) {
            double tmp = (p1[i]*r1*r1)/(p1[i]+p2[j]*(A/B));
            if(tmp > max_r2_sq) {
                max_r2_sq = tmp;
            }
        }
    }
    double ans = sqrt(max_r2_sq);
    printf("%.8f", ans);
    return 0;
}