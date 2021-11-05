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
    
    testcase {
        int n; cin>>n;
        string st; cin>>st;
        vi newitem, checker(26, 0);
        int curr=st[0];
        newitem.pb(st[0]-'A');
        loop(i, 1, n) {
            if(curr!=st[i]) {
                newitem.pb(st[i]-'A');
                curr=st[i];
            }
        }
        // debugvi(newitem);
        bool valid=true;
        for(int i: newitem) {
            if(checker[i]) {
                cout<<"NO"<<endl;
                valid=false;
                break;
            }
            else {
                checker[i]++;
            }
        } 
        if(valid) {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}