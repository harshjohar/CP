#include <bits/stdc++.h>
using namespace std;

int number(int n);

int main() {
    int t;
    cin>>t;
    while(t--) {
        long n;
        cin>>n;
        long count = 0;
        while(n!=0) {
            count+=n/5;
            n = n/5;
        }
        cout<<count<<endl;
    }
    return 0;
}