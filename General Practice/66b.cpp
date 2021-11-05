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

int maxi(vi ans) {
    int s = 0;
    loop(i, 0, ans.size()) {
        if(ans[i]>s) s=ans[i];
    }
    return s;
}
int32_t main() {

    int n; cin>>n;
    vi hills(n);
    loop(i, 0, n) cin>>hills[i];
    vi prefix(n, 1);
    vi suffix(n, 1);
    loop(i, 1, n) {
        if(hills[i]>=hills[i-1]) prefix[i]+=prefix[i-1];
        // else prefix[i]=1;
    }

    loopb(i, n-2, 0) {
        if(hills[i]>=hills[i+1]) suffix[i]+=suffix[i+1];
        // else suffix[i]=1;
    }
    // suffix[n-1]--;
    vi ans(n);
    loop(i, 0, n) {
        if(suffix[i]!=1)
            ans[i]=prefix[i]+suffix[i]-1;
        else
            ans[i]=prefix[i];
    }
    cout<<maxi(ans)<<endl;
    // loop(i, 0, n) {
    //     cout<<prefix[i]<<" ";
    // }
    // cout<<endl;
    // loop(i, 0, n) {
    //     cout<<suffix[i]<<" ";
    // }
    // cout<<endl;
    // loop(i, 0, n) {
    //     cout<<ans[i]<<" ";
    // }
    // cout<<endl;
    return 0;
}