#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin>>t;
    while(t--) {
        int n; 
        cin>>n;
        int gasoline[n];
        for(int i=0; i<n; i++) {
            cin>>gasoline[i];
        }
        int fuel = gasoline[0];
        int count = 0;
        while(fuel != 0) {
            if(count < n-1) {
                count++;
                fuel = fuel + gasoline[count] - 1;
            } 
            else {
                count++;
                fuel--;
            }
        }
        cout<<count<<"\n";
    }
}