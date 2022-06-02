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

int getCost(vector<vi> &m, int i, int j)
{
    int ans = m[i][j];

    int r = m.size(), c = m[0].size();

    int cr = i - 1, cc = j - 1;

    while (cr >= 0 and cc >= 0)
    {
        ans += m[cr][cc];
        cr--;
        cc--;
    }

    cr = i + 1, cc = j + 1;

    while (cr < r and cc < c)
    {
        ans += m[cr][cc];
        cr++;
        cc++;
    }

    cr = i - 1, cc = j + 1;
    while (cr >= 0 and cc < c)
    {
        ans += m[cr][cc];
        cr--;
        cc++;
    }

    cr=i+1, cc=j-1;

    while(cr<r and cc>=0) {
        ans+=m[cr][cc];
        cr++;
        cc--;
    }

    return ans;
}

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vi> mt(n, vi(m, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mt[i][j];
        }
    }
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ans = max(ans, getCost(mt, i, j));
        }
    }
    cout << ans << endl;
}

int32_t main()
{
    testcase
    solve();
    return 0;
}