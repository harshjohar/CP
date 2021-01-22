#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int g;
        cin>>g;
        while(g--) {
            int count=0;
            int i, n, q;
            cin>>i>>n>>q;
            int head = 0;
            int tail = 0;

            if(n%2==0) {
                cout<<n/2<<endl;
            }
            else if(n%2 != 0 && i==q) {
                cout<<(n/2)<<endl;
            }
            else if(n%2 !=0 && i!=q) {
                cout<<(n/2)+1<<endl;
            }
        }
    }
}