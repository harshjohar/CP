#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, r, g, b;
        cin>>n>>r>>g>>b;
        int tiles = n;
        int ans = n;
        int del1 = abs(r-b);
        ans-=del1;
        int demand = min(r,b) - g - 1;
        if(demand>0) {
            // pepehands
        } 
    }
}