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
        int arr[n];
        loop(i, 0, n) {
            cin>>arr[i];
        }
        cout<<3*n<<endl;
        loop(i, 0, n) {
            loop(j, 0, 3) {
                cout<<1<<" "<<i+1<<" "<<i+2<<endl;
                cout<<2<<" "<<i+1<<" "<<i+2<<endl;
            }
            i++;
        }
    }
    
    return 0;
}