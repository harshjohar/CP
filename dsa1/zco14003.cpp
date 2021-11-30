#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;
    long long arr[n];

    for(long long i=0; i<n; i++) {
        cin>>arr[i];
    }
    sort(arr, arr+n, greater<int>());

    long long cost = arr[0];
    long long revenue = arr[0];
    for(long long k=1; k<n; k++) {
        if(arr[k] <= cost) {
            cost = arr[k];
            long long sell = cost*(k+1);
            if(sell>revenue) {
                revenue = sell;
            }
        }
    }
    cout<<revenue<<endl;
    return 0;
}