#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
// #define int long long int
#define pb push_back
#define loop(i, a, b) for (int i = a; i < b; ++i)
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

int nav[110][110];   // primary artifacts required to make a complex
int neet[110][110]; // primary bought by a friend

map<string, int> Mahi;

// to iterate over the map
typedef map<string, int>::iterator it;

int k, n, m, q;
int32_t main()
{
    fastio;
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    memset(nav, 0, sizeof(nav));
    memset(neet, 0, sizeof(neet));

    cin >> k >> n >> m >> q;

    loop(i, 0, n)
    {
        string ka;
        cin >> ka;
        Mahi[ka] = i; // maps the simple ones to their respective indices
    }

    loop(i, n, m + n)
    { // put the complex ones after the simple ones
        string ka;
        cin >> ka;
        ka.erase(ka.end() - 1); // remove the colon
        Mahi[ka] = i;
        int ve;
        char separator;
        do
        {
            cin >> ka >> ve;
            nav[i][Mahi[ka]] += ve; 
            separator = getchar();
        } while (separator == ',');
    }
    loop(i, 0, q)
    {
        int ve;
        string ka;
        cin >> ve >> ka;
        neet[ve][Mahi[ka]]++;   
        // complex wala km neeche shuru hun
        loop(j, n, n+m)
        {
            bool flag = true;
            loop(kk, 0, n)
                if (neet[ve][kk] < nav[j][kk])
                {
                    flag = false;
                    break;
                }
            
            if (flag)
            {
                neet[ve][j]++;
                loop(kk, 0, n)
                    neet[ve][kk] -= nav[j][kk];
                break;
            }
        }
    }

    for(int i=1; i<=k; ++i)
    {
        int items = 0;
        loop(j, 0, m + n)
            if (neet[i][j])
                items++;
        cout << items << endl;

        for (it j = Mahi.begin(); j != Mahi.end(); ++j)
        {
            if (neet[i][j->second])
                cout << j->first << ' ' << neet[i][j->second] << endl;
        }
    }
    // cout<<"hello"<<endl;
    debug(n);
    debug(k);
    debug(m);
    debug(q);
    return 0;
}