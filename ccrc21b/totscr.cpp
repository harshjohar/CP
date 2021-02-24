#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, k;
        int marks[k];
        for(int i=0; i<k; i++) {
            cin>>marks[i];
        }
        for(int j=0; j<n; j++) {
            int ans=0;
            string s;
            cin>>s;
            for(int p=0; p<k; p++) {
                if(s[p] == '1') {
                    ans+=marks[p];
                }   
            }
            cout<<"ans"<<ans<<'\n';
        }
    }
}