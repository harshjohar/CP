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
#define cout std::cout
#define cin std::cin
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n";

int32_t main() {
    fastio;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    testcase {
        int n, m;
        cin>>n>>m;
        string cells; cin>>cells;
        if(m>n) {
            m=n;
        }
        int moves=0;
        vi ones(0);
        loop(i, 0, n) {
            if(cells[i]=='1') ones.pb(i);
        }
        vi new_ones(0);
        string cells_c = cells;
        while(moves<m) {
            loop(i, 0, ones.size()) {
                int idx = ones[i];
                if(idx<n-2) {
                    if(cells[idx+2]!='1') {
                        cells_c[idx+1]='1';
                        new_ones.push_back(idx+1);
                    }
                } else if(idx==n-2) {
                    cells_c[idx+1]='1';
                    new_ones.pb(idx+1);
                }

                if(idx>1) {
                    if(cells[idx-2]!='1') {
                        cells_c[idx-1]='1';
                        new_ones.pb(idx-1);
                    }
                } else if(idx==1) {
                    cells_c[idx-1]='1';
                    new_ones.pb(idx-1);
                }
            }
            // cout<<cells<<" Moves: "<<moves<<endl;
            moves++;
            ones = new_ones;
            cells = cells_c;
        }
        cout<<cells<<endl;
    }
    
    return 0;
}