#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int p; cin>>p;
        int a=2;
        int b;
        int m=p%a;
        if(m) {
            b=p-1;
        } else {
            b=p;
        }
        cout<<a<<' '<<b<<endl;
    }
    return 0;
}