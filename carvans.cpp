#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int cars[n];
        for(int i=0; i<n; i++) cin>>cars[i];
        int min = cars[0];
        int count = 0;
        for(int i=0; i<n; i++) {
            if(cars[i] <= min) {count++; min=cars[i];}
        }
        cout<<count<<endl;
    }
}