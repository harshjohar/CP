#include <iostream>
#include <algorithm>
typedef long long int lld;
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;
    lld num[n];
    for(int i=0; i<n; i++) {
        cin>>num[i];
    }
    int count = 0;
    sort(num, num+n);
    for(int i=0; i<n-1; i++) {
        if(abs(num[i] - num[i+1]) >= k) {
            count+=(n-i-1);
        }
    }
    cout<<count<<'\n';
}