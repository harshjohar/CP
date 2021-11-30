#include<iostream>
using namespace std;
// typedef long long int lld;

int main() {
    int t;
    scanf("%lld", &t);
    while(t--) {
        long long int l, r;
        scanf("%lld %lld", &l, &r);
        
        long long odds = 0;

        if (l%2!=0 || r%2!=0) {
            odds=(r-l)/2;
            odds++;
        }
        else {
            odds = (r-l)/2;
        }
        string s = (odds%2 == 0) ? "Even\n":"Odd\n";
        cout<<s;
    }
}