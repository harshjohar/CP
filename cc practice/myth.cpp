#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define loop(i, a, b) for(int i=a; i<b; i++) 
#define sz(v) ((int)(v).size())

int32_t main() {
    int t; cin>>t;
    while(t--) {
        string s;
      cin>>s;
      if (sz(s) == 1) {cout<<"mythistrue"<<endl; continue;}
      loop(i, 0, sz(s)){
          if (s[i] != 'a') {s[i] = 'a'; cout<<s<<endl;break;}
          if (i==sz(s) - 1) {s[i]++; cout<<s<<endl;}
      }
    }
}