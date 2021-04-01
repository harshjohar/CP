#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        string binary; cin>>binary;
        long long int ones = 0;
        for(int i=0; i<n; i++) {
            if(binary[i]=='1') ones++;
        }
        // cout<<ones<<endl;
        long long int count = 0;
        count+=ones;
        long long int extra = (ones*(ones-1))/2;
        count+=extra;
        cout<<count<<endl;
    }
}