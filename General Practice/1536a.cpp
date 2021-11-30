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
#define debug(x) cout<<(#x)<<": "<<x<<endl
#define debugvi(v) cout<<(#v)<<": "; loop(i, 0, v.size()) cout<<v[i]<<" "; cout<<endl;


int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
int findGCD(vi &arr, int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);
 
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}

int32_t main() {
    fastio;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    testcase {
        int n; cin>>n;
        vi b;
        int tmp;
        int flag = 1;
        int max = 0;
        vi ans;
        loop(i, 0, n) {
            cin>>tmp;
            b.pb(tmp);
            if(tmp<0) flag = 0;
            if(tmp>max) max=tmp;
            if(tmp==0) ans.pb(0);
        }
        // debugvi(b);
        int sz=0;
        if(flag) {
            int gcd = findGCD(b, b.size());
            int x = gcd;
            while(gcd<=max) {
                ans.pb(gcd);
                gcd+=x;
            }
            sz= ans.size();
        }
        
        if(sz>300 or flag==0){
            cout<<"NO"<<endl;
        } 
        else {
            cout<<"YES"<<endl;
            cout<<sz<<endl;
            loop(i, 0, ans.size()) cout<<ans[i]<<" "; cout<<endl;
        }
        // debugvi(b);
    }
    return 0;
}