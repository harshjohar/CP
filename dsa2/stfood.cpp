#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int max = 0;
        for(int i=0; i<n; i++) {
            int s, p, v;
            cin>>s>>p>>v;
            s++;    // s stores in original +1 of chef
            int profit = floor(p/s)*v;
            if(profit>max) {
                max = profit;
            }
            // cout<<max<<'\n';
        }
        cout<<max<<"\n";
    }
}