#include<iostream>
using namespace std;
typedef long long int lld;
int main() {
    int t; cin>>t;
    while(t--) {
        lld n, c;
        cin>>n>>c;
        lld tmp;
        for(lld i=0; i<n; i++) {
            cin>>tmp;
            c-=tmp;
        }
        if(c>=0) {
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
}