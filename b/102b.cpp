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
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    string num;
    cin>>num;
    int transformations = 0;
    while(num.length()!=1) {
        int tmp_sum=0;
        loop(i, 0, num.length()) {
            tmp_sum+=(int)(num[i]-'0');
        }
        num=to_string(tmp_sum);
        // cout<<num<<endl;
        transformations++;
    }
    cout<<transformations<<endl; 
    
    return 0;
}