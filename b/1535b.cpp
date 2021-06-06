#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define int long long int
#define pb push_back
#define loop(i, a, b) for(int i=a; i<b; i++)
#define loopb(i, a, b) for(int i=a; i>=b; i--)
#define testcase int t; cin>>t; while(t--)
#define pii pair<int, int>
#define f first
#define s second
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n";


int32_t main() {
    fastio;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    testcase {
        int n; 
        cin>>n;
        int arr[n];
        int tmp;
        vi odd;
        vi even;
        loop(i, 0, n) {
            cin>>tmp;
            if(tmp%2==0) {
                even.pb(tmp);
            } else odd.pb(tmp);
        }

        loop(i, 0, even.size()) arr[i]=even[i];
        loop(i, 0, odd.size()) arr[i+even.size()]=odd[i];


        // loop(i, 0, n) cout<<arr[i]<<" ";cout<<endl;
        int cnt = 0;
        loop(i, 0, n) {
            loop(j, i+1, n) {
                if(__gcd(arr[i], 2*arr[j]) > 1) cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    
    return 0;
}