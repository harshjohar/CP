#include <iostream>
#include <algorithm>
using namespace std;
// weird... not accepted.. don't know why
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }
        sort(arr, arr+n, greater<int>());
        int ans = 2*(arr[0] - arr[n-1]);
        cout<<ans<<"\n";
    }
}