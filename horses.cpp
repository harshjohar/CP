#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int strength[n];
        for(int i=0; i<n; i++) {
            cin>>strength[i];
        }
        sort(strength, strength+n);
        int min = strength[1]-strength[0];
        for(int i=1; i<n; i++) {
            if(strength[i]-strength[i-1] < min) {
                min = strength[i]-strength[i-1];
            }
        }
        cout<<min<<'\n';
    }
}