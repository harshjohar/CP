#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, k;
        cin>>n>>k;
        //int arr[n];
        int tmp;
        int count=0;
        for(int i=0; i<n; i++) {
            cin>>tmp;
            if((tmp+k)%7==0) count++;
        }
        cout<<count<<endl;
    }
}