#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    int ans=1;
    int pos; cin>>pos;
    int curr=pos%10;
    n--;
    while(n--) {
        int pos; cin>>pos;
        if(pos%10 != curr) {
            ans++;
            curr = pos%10;
        }
    }
    cout<<ans<<"\n";
}