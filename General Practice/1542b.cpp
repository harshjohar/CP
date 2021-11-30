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

vi powersOfa(int a, int n)
{
    vi ans;
    ans.pb(1);
    if (a == 1)
    {
        return ans;
    }
    while (a <= n)
    {
        ans.pb(a);
        a *= a;
    }
    return ans;
}

int32_t main()
{
    // fastio;
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    testcase
    {
        int n, a, b;
        cin >> n >> a >> b;

        // pattern 1 - powers of a
        // pattern 2 - 1 + multiples of b
        // pattern 3 - pattern 2 * a
        // pattern 4 - pattern 1 + b

        // x is any number in S
        // x mod b = k; (say)
        // pattern 2 and 4 wont generate any new remainder
        // new remainder only when pattern 1 or 3 is done
        // vi p = powersOfa(a, n);
        int ans = 0;
        if (a == 1)
        {
            if ((n - 1) % b == 0)
            {
                ans++;
            }
        }
        else
        {
            int h = 1;
            while (h <= n)
            {
                if (h % b == n % b)
                {
                    ans++;
                    break;
                }
                h *= a;
            }
        }
        if (ans)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}