#include <bits/stdc++.h>
using namespace std;

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
        int count = 1;
        for(int j=0; j<n-1; j++) {
            if(arr[j+1] > arr[j]) {
                arr[j+1] = arr[j];
            }
            else {
                count++;
            }
        }
        cout<<count<<endl;
    }
}