#include <stdio.h>

int main(void) {
    int t;
    scanf("%i", &t);
    int arr[t];

    for(int i=0; i<t; i++) {
        int n;
        scanf("%i", &n);
        arr[i] = n;   
    }

    for(int j=0; j<t; j++) {
        int output = 0;
        int p = arr[j];
        int m = 1;

        while(p >= 1) {
            int u = p%10;
            p=(p-p%10)/10;
            output = 10*(output)+u;
            m++;
        }
        printf("%i\n", output);
    }
}