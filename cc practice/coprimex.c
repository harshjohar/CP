#include <stdio.h>
#include <stdbool.h>
typedef long long int ll;

bool isPrime(ll n) {
    if(n<2) {
        return false;
    }
    if(n<=3) {
        return true;
    }
    if(n%2==0 || n%3==0) {
        return false;
    }
    for(ll i=5; i*i <= n; i=i+6) {
        if(n%i==0 || n%(i+2)==0) {
            return false;
        }
    }
    return true;
}
// remember \n always :(
int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        ll l, r;
        scanf("%lld%lld", &l, &r);
        r++;
        while(!isPrime(r)) {
            r++;
        }
        printf("%lld\n", r);
    }
}