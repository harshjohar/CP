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
        int k, n, m;
        cin>>k>>n>>m;
        vi mono(n), poly(m);
        int zeroes=0;
        int maxi = 0;
        loop(i, 0, n) {
            cin>>mono[i];
            if(mono[i]==0) {
                zeroes++;
            }
            maxi = max(maxi, mono[i]);
        }
        // debug(zeroes);
        loop(i, 0, m) {
            cin>>poly[i];
            if(poly[i]==0) {
                zeroes++;
            }
            maxi = max(maxi, poly[i]);
        }
        // debug(zeroes);
        if(maxi>k+zeroes) {
            cout<<-1;
        }
        else {
            loop(i, 0, zeroes) {
                cout<<0<<' ';
            }
            loop(i, 0, n) {
                if(mono[i]) {
                    cout<<mono[i]<<' ';
                }
            }

            loop(i, 0, m) {
                if(poly[i]) {
                    cout<<poly[i]<<' ';
                }
            }
        }
        cout<<endl;
    }
    return 0;
}