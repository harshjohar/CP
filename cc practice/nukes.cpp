#include<iostream>
using namespace std;
typedef long long int lld;
int main() {
    lld a, n, k;
    cin>>a>>n>>k;
    // whole logic is that i need to change the base of 'a' from decimal to base n+1
    lld ans[k] = {0};
    // cout<<n<<endl;
    lld base = n+1;
    // int i=0;
    // while(a>=base) {
    //     ans[i] = a%base;
    //     a = (int) a/base;
    //     i+=1;
    // }
    // ans[i] = a%base;
    for(int i=0; i<k; i++) {
        cout<<a%base<<' ';
        a/=base;
    }
    cout<<'\n';
}