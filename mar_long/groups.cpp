#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        string s; cin>>s;
        int n = s.length();
        int groups = 0;
        bool running = false; // counting of a grp going on or not
        for(int i=0; i<n; i++) {
            if(s[i]=='1' && running == false) {
                running = true;
                groups++;
            }

            else if(s[i]=='0') {
                running = false;
            }
        }
        
        cout<<groups<<'\n';
    }
}