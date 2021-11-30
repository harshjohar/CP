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

    int n, m;
    cin >> n >> m;
    vi katy(n, INT_MAX);
    vi perry(n);

    loop(i, 0, m)
    {
        int l, r, t, c;
        cin >> l >> r >> t >> c;
        l--, r--;
        loop(k, l, r + 1)
        {
            if (t < katy[k])
            {
                katy[k] = t;
                perry[k] = c;
            }
        }
    }
    // debugvi(katy);
    // debugvi(perry);
    int sum = 0;
    loop(i, 0, n)
    {
        sum += perry[i];
    }
    cout << sum << endl;
    return 0;
}