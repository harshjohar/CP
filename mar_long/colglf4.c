#include <stdio.h>

long long int mini(long long int a, long long int b) {
    if(a<b) {
        return a;
    }
    return b;
}

long long int maxi(long long int a, long long int b) {
    if(a>b) {
        return a;
    }
    return b;
}

long long int solve(long long int n, long long int e, long long int h, long long int a, long long int b, long long int c) {
	if(n<=0) {
		return 0;
	}
	long long int ans = 1e15;
	if((n <= e) && (n<=h)) {
		ans = mini(ans, n*c);
	}
    if(3*n <= h) {
        ans = mini(ans, n*b);
    }
    if(2*n <= e) {
        ans = mini(ans, n*a);
    }
    if(((h-n)/2 >= 1) && ((h-n)/2) >= n-e) {
        if(b-c < 0) {
            long long int x = mini(n-1, (h-n)/2); 
            ans = mini(ans, x*(b-c) + n*c);
        }
        else {
            long long int x = maxi(1, n-e);
            ans = mini(ans, x*(b-c) + n*c);
        }
    }
    if(e-n >= 1 && e-n >= n-h) {
        if(a-c < 0) {
            long long int x = mini(n-1, e-n);
            ans = mini(ans, (a-c)*x + n*c);
        } 
        else {
            long long int x = maxi(1, n-h);
            ans = mini(ans, (a-c)*x + n*c);
        }
    }
    if((e/2 >= 1) && (e/2 >= (3*n -h+2)/3)) {
        if(a-b <0) {
            long long int x = mini(n-1, e/2);
            ans = mini(ans, (a-b)*x + n*b);
        }
        else {
            long long int x = maxi(1, (3*n - h + 2)/3);
            ans = mini(ans, (a-b)*x + n*b);
        }
    }
    if((e>=3) && (h>=4) && (n>=3)) {
        ans = mini(ans, a+b+c+solve(n-3, e-3, h-4, a, b, c));
    }
    return ans;
}

int main(void) {
    long long int t;
    scanf("%lld", &t);
    for(int i=0; i<t; i++) {
        long long int n, e, h, a, b, c;
        scanf("%lld%lld%lld%lld%lld%lld", &n, &e, &h, &a, &b, &c);
        long long int ans;
        ans = solve(n, e, h, a, b, c);
        if(ans==1e15) printf("-1\n");
        else printf("%lld\n", ans);
    }
    return 0;
}