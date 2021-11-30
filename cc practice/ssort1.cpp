#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    int k; cin>>k;
    bool t = true;
    bool satyanaas = false;
    int start=0;
    while(start<n) {
        if(t)
        {sort(arr+start, arr+start+k); t=false; start+=k;}
        else
        {sort(arr+start, arr+start+k, greater<int>()); t=true; start+=k;}
        if(start+k>n) {satyanaas = true;break;}
    }

    if(satyanaas) {
        k=n-start;
        if(t)
        {sort(arr+start, arr+start+k); t=false; start+=k;}
        else
        {sort(arr+start, arr+start+k, greater<int>()); t=true; start+=k;}
    }

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}