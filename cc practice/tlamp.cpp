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

int taylor_swift[1003][1003];
int32_t main() {
    fastio;
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int left_D = 1;
    int top_D = 2;
    int first_idx = 1;

    loop(i, 0, 1003) {
        if(i!=0) {
            first_idx=taylor_swift[i-1][0]+top_D;
            top_D++;
            left_D=top_D-1;
        }
        loop(j, 0, 1003) {
            if(j==0) {
                taylor_swift[i][j]=first_idx;
            }
            else {
                taylor_swift[i][j] = first_idx+left_D;
                first_idx = taylor_swift[i][j];
                left_D++;
            }
        }
    }
    testcase {
        int x1, x2, y1, y2;
        cin>>x1>>y1>>x2>>y2;
        int ans=0;
        x1--, x2--, y1--, y2--;
        // loop(i, x1, x2+1) {
        //     loop(j, y1, y2+1) {
        //         cout<<taylor_swift[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // } 
        loop(i, x1, x2+1) {
            // cout<<taylor_swift[i][y1]<<" ";
            ans+=taylor_swift[i][y1];
        }
        // cout<<endl;
        // x2--;
        loop(i, y1+1, y2+1) {
            // cout<<taylor_swift[x2][i]<<" ";
            ans+=taylor_swift[x2][i];
        }
        // cout<<endl;
        cout<<ans<<"\n";
        // cout<<"YO"<<"\n";
    }
}