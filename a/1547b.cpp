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
    testcase
    {
        string s;
        cin >> s;
        int n = s.length();
        int left = 1, right = n + 1;
        char max = 'a';
        char curr = 'a';
        bool valid = true;
        loop(i, 0, n)
        {
            if (s[i] == 'a')
            {
                left = i;
                right = i;
            }
        }
        if (left == -1)
        {
            cout << "NO" << endl;
        }
        else {

        while (true)
        {
            if (left > 0 and right < n - 1)
            {
                if (s[left - 1] == (char)((int)curr++))
                {
                    left--;
                }
                else if (s[right + 1] == (char)((int)curr++))
                {
                    right++;
                }
                else
                {
                    cout << "NO" << endl;
                    valid = false;

                    break;
                }
            }
            else if (left == 0 and right == n - 1)
            {
                break;
            }
            else if (left == 0)
            {
                if (s[right + 1] == (char)((int)curr++))
                {
                    right++;
                }
                else
                {
                    cout << "NO" << endl;
                    valid = false;
                    break;
                }
            }
            else if (right == n - 1)
            {
                if (s[left - 1] == (char)((int)curr++))
                {
                    left--;
                }
                else
                {
                    cout << "NO" << endl;
                    valid = false;
                    break;
                }
            }
            curr++;
        }
        }
        if(valid)
            cout << "YES" << endl;
    }
        return 0;
}