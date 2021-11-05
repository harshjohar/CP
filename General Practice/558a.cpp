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
    int left = 0, right = 0;
    vi positive, negative;
    map<int, int> KatyPerry;
    int pos, apple;
    int n;
    cin >> n;
    loop(i, 0, n)
    {
        cin >> pos >> apple;
        if (pos > 0)
        {
            positive.pb(pos);
            right++;
        }
        else
        {
            negative.pb(pos);
            left++;
        }

        KatyPerry[pos] = apple;
    }

    sort(positive.begin(), positive.end());
    sort(negative.begin(), negative.end(), greater<int>());

    // debugging

    // debugvi(positive);
    // debugvi(negative);
    // debug(left);
    // debug(right);

    int ans = 0;
    int i = 0;
    if (left > right)
    {
        if (positive.size() == 0)
        {
            ans += KatyPerry[negative[i]];
        }
        else
        {

            while (i < positive.size())
            {
                ans += KatyPerry[negative[i]] + KatyPerry[positive[i]];
                i++;
            }
            ans += KatyPerry[negative[i]];
        }
        i = 0;
    }
    else
    {
        if (negative.size() == 0)
        {
            ans += KatyPerry[positive[i]];
        }
        else
        {

            while (i < negative.size())
            {
                ans += KatyPerry[negative[i]] + KatyPerry[positive[i]];
                i++;
            }
            ans += KatyPerry[positive[i]];
        }
    }
    cout << ans << endl;
    return 0;
}