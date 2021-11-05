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
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n; cin>>n;
    int curr_energy = 0, curr_height;
    int max_pylon_height = 0;
    loop(i, 0, n) {
        cin>>curr_height;
        if(curr_height>max_pylon_height) max_pylon_height=curr_height;
    }
    cout<<max_pylon_height<<endl;
    return 0;
}