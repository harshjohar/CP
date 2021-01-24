#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b);

int main() {
    int t;
    cin>>t;
    while(t--) {
        ll a, b;
        cin>>a>>b;
        ll lcm = (a*b)/gcd(a, b);
        cout<<gcd(a, b)<<" "<<lcm<<"\n"; 
    }
}

ll gcd(ll a, ll b) {
    while(b) {
        a %= b;
        swap(a, b);
    }
    return a;
}