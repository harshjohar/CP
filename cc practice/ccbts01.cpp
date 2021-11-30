#include <iostream>
#include <set>

using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        set<int, greater<int>> pcm;
        string s;
        cin>>s;
        for(int i=0; i<3; i++) {
            pcm.insert(s[i]);
        }
        int sz = pcm.size();
        // cout<<sz<<endl;
        if(sz == 3) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}