#include<bits/stdc++.h>
using namespace std;
typedef long long int lld;
int main() {
    lld t; cin>>t;
    while(t--) {
        lld n; cin>>n;
        lld arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        bool flag=false;
        for(int i=0; i<n-1; i++) {
            if(arr[i]<arr[i+1]) flag=true;
        }
        if(flag) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}