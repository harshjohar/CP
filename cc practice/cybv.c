#include <stdio.h>

int main(void)
{
    int t;
    scanf("%i", &t);

    for(int i=0; i < t; i++) {
        int n, k;
        scanf("%i", &n);
        scanf("%i", &k);

        int c = k - k%n;
        int result = c/n;

        printf("%i", result);
    }
}