#include <stdio.h>

int main(void)
{
    int t;
    scanf("%i", &t);

    for(int i=0; i < t; i++) {
        int n, k;
        scanf("%i", &n);
        scanf("%i", &k);

        int arr[n];
        for(int j = 0; j < n; j++) {
            arr[j] = 0;
        }

        while(k > 0) {
            for(int l = 0; l < n; l++) {
                arr[l]++;
                k--;
                if(k<=0) {
                    break;
                }
            }
        }
        int min = arr[0];
        for(int q = 0; q < n; q++) {
            if(arr[q] < min) {
                min = arr[q];
            }
        }
        printf("%i\n", min);
    }
}