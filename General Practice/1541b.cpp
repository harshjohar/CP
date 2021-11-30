#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define int long long int
#define pb push_back
#define loop(i, a, b) for (int i = a; i < b; i++)
#define loopb(i, a, b) for (int i = a; i >= b; i--)
#define testcase \
    int t;       \
    cin >> t;    \
    while (t--)
#define pii pair<int, int>
#define f first
#define s second
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n";
#define debug(x) cout << (#x) << ": " << x << endl
#define debugvi(v)                            \
    cout << (#v) << ": ";                     \
    loop(i, 0, v.size()) cout << v[i] << " "; \
    cout << endl;

int32_t main()
{
    fastio;
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    testcase
    {
        int n; cin>>n;
        vi iloveu(n+1);

        loop(i, 1, n+1)
        {
            cin >> iloveu[i];
        }
        // bool valid = true;
        int ans = 0;
        loop(i, 1, n+1)
        {
            int next = 1;
            int x = 2*i;
            int mahi = (x/iloveu[i])*iloveu[i] + iloveu[i];
            mahi -= i;
            for(int j= mahi; j<= n; j+=iloveu[i]) {
                if(iloveu[i]*iloveu[j] == i+j) {
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}