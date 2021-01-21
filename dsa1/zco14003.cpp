#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;
    long long arr[n];

    for(long long i=0; i<n; i++) {
        long long budget;
        cin>>budget;
        arr[i]=budget;
    }
    for(long long i=0; i<n; i++) {
        // sorting the array
        for(long long j=0; j<n; j++) {
            if(arr[i] > arr[j]) {
                long long tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

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
}