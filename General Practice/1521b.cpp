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
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n";

int32_t main() {
    fastio;
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    testcase {
        int n; cin>>n;
        int arr[n+1];
        loop(i, 1, n+1) cin>>arr[i];

        int min = INT64_MAX;
        int idx = 0;

        loop(i, 1, n+1) {
            if(arr[i]<min) {
                min = arr[i];
                idx = i;
            }
        }

        cout<<n-1<<endl;

        loop(i, 1, n+1) {
            if(i==idx) continue;
            cout<<idx<<" "<<i<<" "<<min<<" "<<min+abs(idx-i)<<endl;
        }

    }
    
    return 0;
}