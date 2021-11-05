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

string smol_leftout = "";
string big_leftout = "";

int matching(string s1, string s2)
{
    int ans = 0, newidx = 0;
    loop(i, 0, s1.length())
    {
        if (newidx < s2.length())
        {

            if (s1[i] == s2[newidx])
            {
                ans++;
                newidx++;
            }
            else if (s1[i] < s2[newidx])
            {
                // sedlyf+=s1[i];
                if ((int)s1[i] >= 65 and (int) s1[i] <= 90)
                {
                    big_leftout += s1[i];
                }
                else
                {
                    smol_leftout += s1[i];
                }
                continue;
            }
            else if (s1[i] > s2[newidx])
            {
                newidx++;
            }
        }
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

    string target, newsppr;
    cin >> target >> newsppr;
    sort(target.begin(), target.end());
    sort(newsppr.begin(), newsppr.end());
    string targetsmol = "", targetbig = "", newssmol = "", newsbig = "", newsbigtosmol = "", newssmoltobig = "", sedlyf = "";
    for (char ch : target)
    {
        if ((int)ch >= 65 and (int) ch <= 90)
        {
            targetbig += ch;
        }
        else
        {
            targetsmol += ch;
        }
    }

    for (char ch : newsppr)
    {
        if ((int)ch >= 65 and (int) ch <= 90)
        {
            newsbig += ch;
            newsbigtosmol += (char)((int)ch + 32);
        }
        else
        {
            newssmol += ch;
            newssmoltobig += (char)((int)ch - 32);
        }
    }

    int yay = 0, whoops = 0;

    yay += matching(targetbig, newsbig) + matching(targetsmol, newssmol);

    string smol_n_sad = smol_leftout, big_n_sad = big_leftout;

    whoops += matching(smol_n_sad, newsbigtosmol) + matching(big_n_sad, newssmoltobig);

    // whoops = target.length() - yay;
    debug(smol_n_sad);
    debug(big_n_sad);
    debug(newssmoltobig);
    debug(newsbigtosmol);
    cout << yay << " " << whoops << endl;

    return 0;
}