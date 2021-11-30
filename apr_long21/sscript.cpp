#include<iostream>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--) {
        int n, k;cin>>n>>k;string word;cin>>word;
        bool running = false;bool gnd = false;int count = 0;
        for(int i=0; i<n; i++) {
            if(word[i]=='*') running = true;
            else{running = false; count=0;}
            if(running) count++;
            if(count>=k){gnd=true; break;}
        }
        if(gnd) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
}