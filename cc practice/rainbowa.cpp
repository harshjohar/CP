#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int arr[n];
        bool valid = true;
        for(int i=0; i<n; i++) {
            cin>>arr[i];
            if(arr[i]>7) {
                valid = false;
                break;
            }
        }
        int check = 1;
        // for(int i=0; i<n/2; i++) {
        //     if(arr[i] >= arr[i+1]) valid = false;
        // }
        for(int i=0; i<n/2; i++) {
            // cout<<check<<endl;
            if(check!=arr[i]) {
                if(check+1 == arr[i]) {
                    check++;
                }
                else {
                    valid = false;
                    // cout<<"this one "<<check<<endl;
                }
            }
        }
        // cout<<endl;
        if(valid==false) {
            cout<<"no"<<endl;
        }
        else {
            for(int i=0; i<=int(n/2); i++) {
                if(arr[i] != arr[n-i-1]) valid=false;
                // if(valid==false) cout<<i<<endl;
            }
            if(valid) {
                cout<<"yes"<<endl;
            }
            else {cout<<"no"<<endl;}
        }
    }
}