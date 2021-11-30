#include <bits/stdc++.h>
using namespace std;
#define maxn 750000
typedef long ll;

ll m = pow(10, 9) + 7; 

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }
        sort(arr, arr+n, greater<int>());
        vector<ll> dp(maxn+1, 0);
        int one = 0;
        for(int i=0; i<n; i++) {
            int x = arr[i];
            dp[x] += 1;
            if(x == 1) {
                one = 1;
                continue;
            }
            for(int j= 2*x; j<=maxn; j+=x) {
                dp[x] = (dp[x]+dp[j]%m)%m;
            }
        }
        ll count = 0;
        for(int i=2; i<=maxn; i++) {
            count = (count+dp[i]%m)%m;
        }
        if(one) {
            count = (count*2 + 1)%m;
        }
        cout<<count<<"\n";
    }
}