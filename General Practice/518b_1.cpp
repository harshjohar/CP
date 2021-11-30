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

// map approach, but doosri v krni hai !!!!!!!!!!!!!!!!!!!!!
int32_t main() {
    fastio;
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    
    string target, newspaper;
    cin>>target>>newspaper;

    map<char, int> nav;
    map<char, int> neet;
    for(char i: newspaper) {nav[i]+=1;}

    int yayy = 0, whoops = 0;

    for(char i: target) {
        if(nav[i]) {
            yayy++;
            nav[i]--;
        }
        else {
            neet[i]++;
        }
    }

    for(pii ch: neet) {
        if((int)ch.f>=65 and (int)ch.f<=90) {
            whoops += min(ch.s, nav[ch.f+32]);
        }
        else {
            whoops += min(ch.s, nav[ch.f-32]);
        }
    }

    cout<<yayy<<" "<<whoops<<endl;
    return 0;
}