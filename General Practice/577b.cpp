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

// phew!
int32_t main()
{
    fastio;
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int n, m;
    cin >> n >> m;
    vi num(n);
    loop(i, 0, n)
    {
        cin >> num[i];
    }

    if (n > m)
    {
        cout << "YES" << endl;
        return 0;
    }

    bool MaeveWiley[m];
    memset(MaeveWiley, false, m);
    loop(i, 0, n)
    {
        if (MaeveWiley[0])
        {
            cout << "YES" << endl;
            return 0;
        }

        bool tmp[m];
        memset(tmp, false, m);

        loop(j, 0, m)
        {
            if (MaeveWiley[j])
            {
                if (!MaeveWiley[(j + num[i]) % m])
                {
                    tmp[(j + num[i]) % m] = true;
                }
            }
        }
        loop(j, 0, m)
        {
            if (tmp[j])
            {
                MaeveWiley[j] = true;
            }
        }
        MaeveWiley[num[i] % m] = true;
    }

    if (MaeveWiley[0])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}