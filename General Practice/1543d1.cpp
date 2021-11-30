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

	testcase
	{
		int n, k;
		cin >> n >> k;
		int anvi = 0;
		// new password after ith query will be
		// x ^ q1 ^ q2 ^ q3 ^ ....... ^ qi 
		loop(i, 0, n)
		{
			// there are n iterations at max
			int q = anvi ^ i;
			// brute force check all the passwords
			cout << q << endl;
			cout.flush();
			anvi = anvi ^ q; // new password, sort of a prefix xor
			int navi;
			cin >> navi; // tells ans is wrong or right
			if (navi == 1)
			{
				break;
			}
		}
	}
	return 0;
}