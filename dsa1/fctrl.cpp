#include <bits/stdc++.h>
using namespace std;

int number(int n);

int main() {
    int t;
    cin>>t;
    int arr[t];
    int out[t]={0};
    for(int i=0; i<t; i++) {
        cin>>arr[i];
    }
    // int p = 5;
    // int c = 1;
    for(int j=0; j<t; j++) {
        for(int k=1; k<=arr[j]; k++) {
            if(k%5 == 0) {
                out[j] = out[j] + number(k);
            }
        }
    }
    for(int i=0; i<t; i++) {
        cout<<out[i]<<endl;
    }
    return 0;
}

int number(int n) {
    // number of 5's in the given number
    int count = 0;
    while(n>1 && n%5==0) {
        count++;
        n = n/5;
    }
    return count;
}