#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    int initial[n];
    for(int i=0; i<n; i++) cin>>initial[i];
    sort(initial, initial+n);
    for(int i=0; i<n; i++) cout<<initial[i]<<" ";
    cout<<"\n";
}