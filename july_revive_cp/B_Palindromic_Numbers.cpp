#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector< vector<int> >
#define int long long int
#define pb push_back
#define loop(i, a, b) for(int i=a; i<b; i++)
#define loopb(i, a, b) for(int i=a; i>=b; i--)
#define testcase int t; cin>>t; while(t--)
#define pii pair<int, int>
#define mii map<int, int>
#define ff first
#define ss second
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n";
#define debug(x) cout<<(#x)<<": "<<x<<endl
#define debugvi(v) cout<<(#v)<<": "; loop(i, 0, v.size()) cout<<v[i]<<" "; cout<<endl;

// commandore : this is the worst code i ve ever heard of
// capn' : but it works :)
// commandore : no it didnt u idiot
// capn' : o sorry i didnt see the input format, now say it again mister

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    loop(i,0,n) s[i] = '0'+'9'-s[i];
    if(s[0]=='0'){
        int carry=0;
    
        s[n-1] += 2;
    
        if(s[n-1]>'9') {
            s[n-1]-=10;
            carry++;
        }
    
        for(int i=n-2;i>=0;i--){
            s[i] = s[i]+1+carry;
            carry=0;
 
            if(s[i]>'9'){
                s[i]-=10;
                carry++;
            }
        }
    }
    cout<<s<<endl;
}
int32_t main() {
    testcase
    solve();
    return 0;
}