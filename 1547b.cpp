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
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    testcase
    {
        string word;
        cin >> word;
        int n = word.length();
        int left = -1, right = n + 1;
        char max = 'a';
        char curr = 'a';
        bool valid = true;
        loop(i, 0, n)
        {
            if (word[i] == 'a')
            {
                left = i;
                right = i;
            }
        }
        if (left == -1)
        {
            cout << "NO" << endl;
            valid = false;
        }
        else
        {
            while (true)
            {
                curr++;
                // debug(left); debug(right); debug(curr); cout<<endl;
                if (left > 0 and right < n - 1)
                {
                    if (word[left - 1] == curr)
                    {
                        left--;
                    }
                    else if (word[right + 1] == curr)
                    {
                        right++;
                    }
                    else
                    {
                        valid = false;
                        cout << "NO" << endl;
                        break;
                    }
                }
                else if (left > 0)
                {
                    if (word[left - 1] == curr)
                    {
                        left--;
                    }
                    else
                    {
                        valid = false;
                        cout << "NO" << endl;
                        break;
                    }
                }
                else if (right < n - 1)
                {
                    if (word[right + 1] == curr)
                    {
                        right++;
                    }
                    else
                    {
                        valid = false;
                        cout << "NO" << endl;
                        break;
                    }
                }
                else
                {
                    break;
                }
            }
        }
        if (valid)
            cout << "YES" << endl;
    }
    return 0;
}