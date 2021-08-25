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
    
    testcase {
        int tour[4];
        loop(i, 0, 4) {
            cin>>tour[i];
        }
        int best = 0;
        loop(i, 0, 4) {
            if(tour[i]>best) {
                best = tour[i];
            }
        }
        int sec_best = 0;
        loop(i, 0, 4) {
            if(tour[i]!=best) {
                if(tour[i]>sec_best) {
                    sec_best = tour[i];
                }
            }
        }

        // cout<<best<<" "<<sec_best<<endl;
        int final[2];

        if(tour[0]>tour[1]) {
            final[0] = tour[0];
        } else final[0] = tour[1];

        if(tour[2]>tour[3]) {
            final[1] = tour[2];
        }
        else final[1] = tour[3];

        // cout<<final[0]<<" "<<final[1]<<endl;
        sort(final, final+2);
        // cout<<final[0]<<" "<<final[1]<<endl;
        if(final[0]==sec_best and final[1]==best) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }


    }
    return 0;
}