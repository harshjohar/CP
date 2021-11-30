#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int d0, d1;
    long long k;
        
    while(t--) {
        cin>>k>>d0>>d1;
        long long sum = 0;
        int d2 = d0+d1;
        if(k==2) {
            sum = d0+d1;
        }
        else if(k==3) {
            sum = d0+d1+d2%10;
        }
        else {
            // cycles of 2, 4, 8, 6
            long long s = (2*d2)%10 + (4*d2)%10 + (8*d2)%10 + (6*d2)%10;
            sum = d0+d1+d2%10+((k-3)/4)*s;
            k -= 3;
            if(k%4==1) {
                sum += (2*d2)%10;
            }
            else if(k%4==2) {
                sum += (2*d2)%10 + (4*d2)%10;
            }
            else if(k%4==3) {
                sum += (2*d2)%10 + (4*d2)%10 + (8*d2)%10;
            }
        }
        if(sum%3==0) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}