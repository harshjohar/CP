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
    vi tasks(n);
    loop(i, 0, n) cin >> tasks[i];
    bool code_Day=0;
    bool gym_Day=0;
    int ans=0;

    // ai equals 0, if on the i-th day of vacations the gym is closed and the contest is not carried out;
    // ai equals 1, if on the i-th day of vacations the gym is closed, but the contest is carried out;
    // ai equals 2, if on the i-th day of vacations the gym is open and the contest is not carried out;
    // ai equals 3, if on the i-th day of vacations the gym is open and the contest is carried out.
    loop(i, 0, n) {
        if(tasks[i]==0) {
            ans++;
            gym_Day=0; code_Day=0;
        }
        if(tasks[i]==1) {
                if(code_Day) {
                    ans++;
                    code_Day=0;
                }
                else {
                    code_Day=1;
                    gym_Day=0;
                }
        }

        if(tasks[i]==2) {
            if(gym_Day) {
                ans++;
                gym_Day=0;
            }
            else {
                gym_Day=1;
                code_Day=0;
            }
        }

        if(tasks[i]==3) {
            if(gym_Day && !(code_Day)) {
                code_Day=1;
                gym_Day=0;
            }
            else if(!(gym_Day) && code_Day) {
                gym_Day=1;
                code_Day=0;
            }
        }
        // debug(ans); debug(gym_Day); debug(code_Day); cout<<endl;
    }
    cout<<ans<<endl;
    return 0;
}