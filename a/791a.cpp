#include<bits/stdc++.h>
using namespace std;
#define int long long
#define testcase int t; cin>>t; while(t--)
#define loop(i, a, b) for(int i=a; i<b; i++)

int32_t main() {
    int a, b;
    cin>>a>>b;
    int cnt=0;
    while(b>=a) {
        a*=3;
        b*=2;
        cnt++;
    }
    cout<<cnt<<"\n";
}