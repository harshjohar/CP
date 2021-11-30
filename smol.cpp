#include <iostream>
using namespace std;
typedef long long int ll; 
int main() {
    ll t;
    cin>>t;
    while(t--) {
        ll n, k;
        cin>>n>>k;
        if(k==0) {
            cout<<n<<'\n';
        }
        else {
            // int ans = n;
            ll ans = n%k;
            cout<<ans<<'\n';
        }
    }
}