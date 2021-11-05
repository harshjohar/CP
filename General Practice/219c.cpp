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

int differences(string s1, string s2) {
    int ans=0;
    loop(i, 0, s1.length()) {
        if(s1[i]!=s2[i]) {
            ans++;
        }
    }
    return ans;
}

string contiguous(string s1) {
    sort(s1.begin(), s1.end());
    return s1;
}

int32_t main() {
    fastio;
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    
    int n, k;
    cin>>n>>k;
    string taylor;
    cin>>taylor;
    map<int, int> katy;
    if(k==2) {
        string ans1="", ans2="";
        loop(i, 0, n) {
            if(i%2) {
                ans1+='A';
                ans2+='B';
            } else {
                ans1+='B';
                ans2+='A';
            }
        }
        int d1 = differences(taylor, ans1), d2 = differences(taylor, ans2);
        if(d1>d2) {
            cout<<d2<<endl;
            cout<<ans2<<endl;
        } else {
            cout<<d1<<endl;
            cout<<ans1<<endl;
        }
    }

    else {
        string taylor1=contiguous(taylor);
        loop(i, 0, n) {
            katy[taylor[i]]++;
        }
        int i=0;
        while(i<n) {
            if(katy[taylor1[i]]%2) {
                char ch = taylor1[i]+1;
                loop(j, i, i+katy[taylor1[i]]) {
                    if(!(j%2)) {
                        taylor[i]=ch;
                    }
                }
            }
            else {

            }

            i+=katy[taylor[i]];
        }
    }
    return 0;
}