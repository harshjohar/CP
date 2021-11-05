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

int32_t main()
{
    fastio;
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    int n;
    cin >> n;
    vi arr(n);
    loop(i, 0, n) cin >> arr[i];
    int ans = 0;
    vector<pii> ansv;
    int i = 0;
    while (i < n - 1)
    {
        int mini = arr[i];
        int idx = i;
        loop(j, i, n)
        {
            if (arr[j] < mini)
            {
                mini = arr[j];
                idx = j;
            }
        }
        if (i != idx)
        {

            swap(arr[i], arr[idx]);
            ansv.pb({i, idx});
            ans++;
        }
        i++;
    }
    // debugvi(arr);
    cout << ans << endl;
    for (auto a : ansv)
    {
        cout << a.f << ' ' << a.s << endl;
    }
    return 0;
}