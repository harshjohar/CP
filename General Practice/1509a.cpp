#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t; while(t--) {
        int n, x; cin>>n;
        vector<int> odd, even;
        for(int i=0; i<n; i++) {
            cin>>x;
            if(x%2) odd.push_back(x);
            else even.push_back(x); 
        }
        for(int a : odd) {
            cout<<a<<' ';
        }
        for(int a : even) {
            cout<<a<<' ';
        }
        cout<<'\n';
    }
}