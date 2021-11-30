#include <stdio.h>
// method 1
int main(void)
{
    int t;
    scanf("%i", &t);
    for(int i =0; i < t; i++) {
        int n, b, m, q_time;
        scanf("%i", &n);    // number of problems
        scanf("%i", &b);    // length of break
        scanf("%i", &m);    // time to solve one problem
 
        long long result = (((n - n%2)/2) - 1)*b;   // break time already added
        while(n>1) {
            if(n%2 != 0) {
                n = n+1;
            }
            q_time = (n/2)*m;
            result += q_time;
            m *= 2;
            n = n/2;
        }
        if(n == 1) {
            result += q_time;
        }
        printf("%lld\n", result);
    }
}