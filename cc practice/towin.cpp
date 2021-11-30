#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end(), greater<int>());   // because both will try to maximize their score
        long long first=arr[0];
        long long second=arr[1]+arr[2];

        for(int j=3; j<n; j+=2) {
            first+=arr[j];
            if(j+1<n) {
                second+=arr[j+1];
            }
        }

        if(first==second) {
            cout<<"draw"<<"\n";
        }
        else if (first>second) {
            cout<<"first"<<"\n";
        }
        else {
            cout<<"second"<<"\n";
        }
    }
    return 0;
}