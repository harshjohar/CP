#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;
    int arr[n];
    while(k--) {
        for(int i=0; i<n; i++) cin>>arr[i];
        next_permutation(arr, arr+n);
        for(int i=0; i<n; i++) {
            cout<<arr[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}