#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int x, y, z;
        cin>>x>>y>>z;
        if(x+y==z || x+z==y || y+z==x) {
            cout<<"YES"<<"\n";
        }
        else {
            cout<<"NO"<<"\n";
        }
    }
}