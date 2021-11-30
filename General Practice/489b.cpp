#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define int long long int
#define pb push_back
#define loop(i, a, b) for(int i=a; i<b; i++)
#define loopb(i, a, b) for(int i=a; i>=b; i--)
#define testcase int t; cin>>t; while(t--)
#define pii pair<int, int>
#define mii map<int, int>
#define f first
#define s second
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n";
#define debug(x) cout<<(#x)<<": "<<x<<endl
#define debugvi(v) cout<<(#v)<<": "; loop(i, 0, v.size()) cout<<v[i]<<" "; cout<<endl;


int32_t main() {
    fastio;
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    
    int a; cin>>a;
    vi angelina(a);
    loop(i, 0, a) cin>>angelina[i];
    sort(angelina.begin(), angelina.end());
    int b; cin>>b;
    vi jolie(b);
    loop(i, 0, b) cin>>jolie[i];
    sort(jolie.begin(), jolie.end());

    int p1=0, p2=0, ans=0;

    while(p1<a and p2<b) {
        if(abs(angelina[p1]-jolie[p2]) < 2) {
            ans++, p1++, p2++;
        }
        else if(angelina[p1]-jolie[p2]>1) {
            p2++;    
        } 
        else if(jolie[p2]-angelina[p1]>1) {
            p1++;
        }
    }
    cout<<ans<<endl;
    return 0;
}