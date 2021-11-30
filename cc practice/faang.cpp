#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    int t; cin>>t;
    while(t--) {
        vector<int> v(4);
        // 0 - g
        // 1 - o
        // 2 - l 
        // 3 - e
        string s;
        cin>>s;
        for(int i=0; i<s.length(); i++) {
            if(s[i]=='g') {
                v[0]++;
            }

            else if(s[i]=='o') {
                v[1]++;
            }

            else if(s[i]=='l') {
                v[2]++;
            }

            else if(s[i]=='e') {
                v[3]++;
            }
        }

        int a = min(v[0], v[1]);
        int b = min(v[2], v[3]);
        if(b*2==a) cout<<b<<endl;
        else if(b*2>a) cout<<a/2<<endl;
        else cout<<b<<endl;
    }
}