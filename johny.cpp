#include<iostream>
#include<algorithm>
using namespace std;

// int binary_search(int n, int* arr, int target) {
//     int lo = 0;
//     int hi = n-1;
//     while(lo<hi) {
//         int mid = (lo + (hi-lo)/2);
//         if(target==arr[mid]) return mid;
//         if(target>arr[mid]) lo = mid+1;
//         if(target<arr[mid]) hi = mid;
//     }
// }

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int playlist[n];
        for(int i=0; i<n; i++) cin>>playlist[i];
        int johny; cin>>johny;
        int target = playlist[johny-1];
        sort(playlist, playlist+n);
        int ans;
        for(int i=0; i<n; i++) {
            if(playlist[i]==target) ans = i;
        }
        cout<<ans+1<<endl;
    }
}