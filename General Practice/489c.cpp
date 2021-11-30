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
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    
    int m, sum;
    cin>>m>>sum;
    string maxi="1", mini="1";
    if(sum==0 and m==1) {
        cout<<0<<' '<<0<<endl;
    }
    else if(sum==0 or sum>9*m) {
        cout<<"-1 -1"<<endl;
    } else {
        loop(i, 1, m) {
            maxi+='0';
            mini+='0';
        }
        // cout<<maxi<<" "<<mini<<endl;
        int curr=0; 
        sum--;
        int sum1=sum;
        while(sum1) {
            if(maxi[curr]<'9') {
                maxi[curr]++;
                sum1--;
            } else {
                curr++;
            }
        }
        curr=m-1;
        while(sum) {
            if(mini[curr]<'9') {
                mini[curr]++;
                sum--;
            } else {
                curr--;
            }
        }
        cout<<mini<<' '<<maxi<<endl;
    }
    return 0;
}