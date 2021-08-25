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

pii checkAP(vi apple)
{
    int d = apple[1] - apple[0], dif;
    loop(i, 2, apple.size())
    {
        dif = apple[i] - apple[i - 1];
        if (d != dif)
        {
            return {false, -1};
        }
    }
    return {true, d};
} // -- O(n) whole array.. no worries

int32_t main()
{
    fastio;
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    int n;
    cin >> n;
    vi entries(n);
    map<int, vi> katy;
    loop(i, 0, n)
    {
        cin >> entries[i];
        katy[entries[i]].pb(i + 1);
    }

    vector<pii> wideawake;

    for (auto roar : katy)
    {
        // debugvi(roar.s);
        if (roar.s.size() == 1)
        {
            wideawake.pb({roar.f, 0});
        }

        else
        {
            pii cd = checkAP(roar.s);
            if (cd.f)
            {
                wideawake.pb({roar.f, cd.s});
            }
        }
    }

    cout << wideawake.size() << endl;
    loop(i, 0, wideawake.size())
    {
        cout << wideawake[i].f << " " << wideawake[i].s << endl;
    }
    return 0;
}