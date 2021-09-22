#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define testcase int t; cin>>t; while(t--)
#define debug(x) cout<<#x<<": "<<x<<endl
void solve() {
    int k; cin>>k;
    int sqroot = sqrt(k);
    // debug(sqroot);
    if(sqroot==sqrt(k)) {
        cout<<sqroot<<" "<<1<<endl;
    }
    else {
        bool found = false;
        int start = (sqroot*sqroot);
        int range = (sqroot+1)*(sqroot+1) - start;
        // debug(range);
        for(int i=1; i<=range/2 + 1; i++) {
            if(k==start+i) {
                found = true;
                cout<<i<<" "<<sqroot+1<<endl;
                return;
            }
        }
        if(!found) {
            start = start+range;
            // debug(start);
            for(int i=1; i<=range/2; i++) {
                if(k==start-i) {
                    cout<<sqroot+1<<" "<<i+1<<endl;
                    return;
                }
            }
        }
    }
}

int32_t main() {
    testcase
    solve();
    return 0;
}