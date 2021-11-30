#include<iostream>
#include<cmath>
using namespace std;
typedef long long int lld;
int main() {
    int t;
    cin>>t;
    while(t--) {
        lld a; cin>>a;
        lld n; cin>>n;
        int ans = a%10;
        lld cube = ans*ans*ans*ans;
        if(n>3) cout<<cube%10<<endl;
        else {
            lld ans = ((int)pow(ans, (int)pow(2,n)))%10;
            cout<<ans<<endl;
        }
    }
}
// 1 2 4 8 16 32.......