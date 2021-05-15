#include<bits/stdc++.h>
using namespace std;

int main() {
    int  n; cin>>n;
    int h; cin>>h;
    int heights[n];
    int ans=0;
    for(int i=0; i<n; i++) {
        cin>>heights[i];
        if(heights[i]>h) ans+=2;
        else ans+=1;
    }
    cout<<ans<<"\n";
}