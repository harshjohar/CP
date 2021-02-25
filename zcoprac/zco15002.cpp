#include <iostream>
#include <algorithm>
typedef long long int lld;
using namespace std;
// brute force op
// TLE(partial correct.....)
int main() {
    int n, k;
    cin>>n>>k;
    lld num[n];
    for(int i=0; i<n; i++) {
        cin>>num[i];
    }
    int count = 0;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(abs(num[i]-num[j]) >= k) {
                count++;
            }
        }
    }
    cout<<count<<'\n';
}