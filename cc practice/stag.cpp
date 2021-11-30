#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main() {
    int t; cin>>t;
    while(t--) {
        int n, k, cnt, s;
        cin>>n>>k;
        cnt=n/2;
        if(n%2) cnt++;
        if(cnt<k) {
            if(n>=k) {
                cout<<k<<"\n";
            }
            else {
                cout<<-1<<"\n";
            }
        }
        else if(cnt%k==0) cout<<cnt<<"\n";
        else {
            s=cnt/k;
            cout<<(s+1)*k<<"\n";
        }
    }
    return 0;
}