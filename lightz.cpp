#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    int t; cin>>t;
    while(t--) {
        int n, k; cin>>n>>k;
        int arr[n];
        int ones=0;
        int first=0;
        for(int i=0; i<n; i++) {
            cin>>arr[i];
            if(!ones) if(arr[i]) first=i;
            if(arr[i]) ones++;

        }
        bool valid=true;
        for(int i=0; i<n-1; i++) {
            if(arr[i]&arr[i+1]) {
                cout<<0<<endl;
                break;
                valid=false;
            }
        }
    int khali;
        if(valid) {
            if(first%2) {
                khali = n/2;
            }
            else {
                khali = ceil(n/2.0);
            }
            // cout<<khali<<endl;
            if(khali-ones>=k) cout<<1<<endl;
            else cout<<0<<endl;
        }
    }
}