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

bool inbound(int size, int idx) {
    if(idx<size and idx>=0) {
        return true;
    }
    return false;
}

int32_t main() {
    int n, curr;
    cin>>n>>curr;
    curr--;
    vi dis(n);
    loop(i, 0, n) cin>>dis[i];
    int cnt = 0;
    vi katy_perry(n, 0);
    loop(i, 0, n) {
        int d = abs(i-curr);
        if(dis[i])
            katy_perry[d]++;
    }
    int cnt2 =0;
    if(katy_perry[0]==1) cnt++;
    loop(i, 0, n) {
        if(katy_perry[i]==2) cnt+=2;
        if(katy_perry[i]==1) {
            if(inbound(n, curr+i) and inbound(n, curr-i)) {
                cnt2++;
                // cout<<"hello"<<i<<endl;
            }
            else {
                cnt++;
            }
        }
    }
    // loop(i, 0, n) {
    //     cout<<dis[i]<<' ';
    // }
    // cout<<endl;
    // loop(i, 0, n) {
    //     cout<<katy_perry[i]<<' ';
    // }
    // cout<<endl;
    cout<<cnt<<endl;
}