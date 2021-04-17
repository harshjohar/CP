#include<iostream>
typedef long long int lld;
using namespace std;
int main() {
    lld t; cin>>t; lld ans;
    while(t--) {
        lld n; cin>>n;
        if(n==1) cout<<20<<'\n';
        else if(n==2) cout<<36<<'\n';
        else if(n==3) cout<<51<<'\n';
        else {
            lld max = 21*n;
            if(n%4==0) {
                ans = max - (n*3 + n + n*2 + ((n-4)*4));
            }
            else if(n%4==1) {
                lld normal = 4*((n/4)-1);
                ans = max - (normal*3 + normal + normal*2 + ((normal-4)*4)) - 16 - 29;
            }
            else if(n%4==2)  {
                lld normal = 4*((n/4)-1);
                ans = max - (normal*3 + normal + normal*2 + ((normal-4)*4)) - 16 - 38;
            }
            else {
                lld normal = 4*((n/4)-1);
                ans = max - (normal*3 + normal + normal*2 + ((normal-4)*4)) - 16 - 48;
            }
            //cout<<max<<'\n';
            cout<<ans<<'\n';
        }
    }
}