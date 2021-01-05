#include <stdio.h>

int main(void)
{
    int n, k;
    scanf("%i", &n);
    scanf("%i", &k);

    int count = 0;
    for(int i=0; i<n; i++) {
        int t;
        scanf("%i", &t);
        if(t%k == 0) {
            count++;
        }
    }
    printf("%i", count);
}