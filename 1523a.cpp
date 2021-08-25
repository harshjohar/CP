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
        string cells_c = cells;
        int moves_count = 0;
        int check = 1;
        while(check) {
            moves_count++;
            loop(i, 0, n) {
                if(cells[i]=='0') {
                    if((cells[i-1]=='1' and cells[i+1]=='0') or (i==n-1 and cells[i-1]=='1')) {
                        cells_c[i]='1';
                        i++;
                    }
                    if((cells[i-1]=='0' and cells[i+1]=='1') or (i==0 and cells[i+1]=='1')) {
                        cells_c[i]='1';
                    }
                }
            }
            cells=cells_c;
            // cout<<cells<<endl;
            if(moves_count>n) {
                check=0;
            }
            if(moves_count>=m) {
                check=0;
            }
        } 
        cout<<cells<<endl;
    }
    return 0;
}