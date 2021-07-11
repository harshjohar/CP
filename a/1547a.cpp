#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define int long long int
#define pb push_back
#define loop(i, a, b) for(int i=a; i<b; i++)
#define loopb(i, a, b) for(int i=a; i>=b; i--)
#define testcase int t; cin>>t; while(t--)
#define pii pair<int, int>
#define mii map<int, int>
#define f first
#define s second
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n";
#define debug(x) cout<<(#x)<<": "<<x<<endl
#define debugvi(v) cout<<(#v)<<": "; loop(i, 0, v.size()) cout<<v[i]<<" "; cout<<endl;


int32_t main() {
    fastio;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    testcase {
        char q = getchar();
        vi arr(6);
        loop(i, 0, 6) {
            cin>>arr[i];
        }
        // debugvi(arr);
        int hor = abs(arr[2]-arr[0]);
        int ver = abs(arr[3]-arr[1]);
        // debug(hor); debug(ver);
        int distance = hor+ver;

        if(arr[0] == arr[2]) {
            if(arr[0]!= arr[4]) {
                // cout<<distance<<endl;
            }
            else {
                if(arr[5] > min(arr[1], arr[3]) and arr[5] < max(arr[1], arr[3])) {
                    distance += 2;
                // cout<<distance<<endl;
                }
            }
        }

        else if (arr[1] == arr[3]) {
            if(arr[1]!= arr[5]) {
                // cout<<distance<<endl;
            }
            else {
                if(arr[4] > min(arr[0], arr[2]) and arr[4] < max(arr[0], arr[2])) {
                    distance += 2;
                // cout<<distance<<endl;

                }
            }
        }
        else {
            // cout<<distance<<endl;
        }
        cout<<distance<<endl;
    }
    return 0;
}