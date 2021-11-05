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
    testcase {
    int a, b;
    cin>>a>>b;

    if(b==1) {
        cout<<"NO"<<endl;
    }
    else if(b==2) {
        cout<<"YES"<<endl;
        cout<<a<<" "<<3*a<<" "<<4*a<<endl;;
    }
    else {
        cout<<"YES"<<endl;
        cout<<a<<" "<<(b-1)*a<<" "<<b*a<<endl;
    }

    }
    return 0;
}