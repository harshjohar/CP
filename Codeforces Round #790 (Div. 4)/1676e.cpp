#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vector<int>>
#define int long long int
#define pb push_back
#define loop(i, a, b) for (int i = a; i < b; i++)
#define loopb(i, a, b) for (int i = a; i >= b; i--)
#define testcase \
    int t;       \
    cin >> t;    \
    while (t--)
#define pii pair<int, int>
#define mii map<int, int>
#define f first
#define s second
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n";
#define debug(x) cout << (#x) << ": " << x << endl
#define debugvi(v)                            \
    cout << (#v) << ": ";                     \
    loop(i, 0, v.size()) cout << v[i] << " "; \
    cout << endl;

void solve()
{
    int n, q;
    cin >> n >> q;

    vi s(n);

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    sort(s.begin(), s.end(), greater<int>());

    for (int i = 1; i < n; i++)
    {
        s[i] += s[i - 1];
    }
    // debugvi(s);
    while (q--)
    {
        int x;
        cin >> x;

        int idx = lower_bound(s.begin(), s.end(), x) - s.begin();
        // cout << x << ": ";
        if (idx > n - 1)
        {
            cout << -1 << endl;
        }

        else if (idx == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout<<idx+1<<endl;
        }
    }
    // cout<<"hehehe"<<endl;
}

int32_t main()
{
    testcase
    solve();
    return 0;
}