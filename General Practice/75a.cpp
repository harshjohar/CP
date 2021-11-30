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

int removezeroes(int n)
{
    int ans = 0;
    int cpv = 1; // current_place_value
    while (n > 0)
    {
        int x = n % 10;
        if (x % 10 != 0)
        {
            ans += x * cpv;
            cpv *= 10;
        }
        n /= 10;
    }
    return ans;
}

int32_t main()
{
    fastio;
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    int a, b;
    cin >> a >> b;

    int c = a + b, ad = removezeroes(a), bd = removezeroes(b);
    int cd = removezeroes(c), dd = ad + bd;

    if (cd == dd)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}