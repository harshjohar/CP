#include <stdio.h>

#define prime_true 1
#define prime_false 0

int is_prime(int perhaps) {
    int limit;
    int testfactor;

    limit = (perhaps >> 1)+1;
    for(testfactor = 3; testfactor <= limit; ++testfactor) {
        if ((perhaps%testfactor)==0) {
            return prime_false;
        }
    }
    return prime_true;
}

int next_prime(int val) {
    int perhaps;
    if(val < 2) {
        return 2;
    }
    perhaps = (val+1) | 1;
    while(is_prime(perhaps) != prime_true) {
        perhaps+=2;
    }
    return perhaps;
}

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        int l, r;
        scanf("%d%d", &l, &r);
        int ans = next_prime(r);
        printf("%d", ans);
    }
}
