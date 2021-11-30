#include <stdio.h>

int main(void) {
    int t, x, y;
    int arr[1000];
    scanf("%i", &t);
    for(int i = 0; i < t; i++) {
        scanf("%i", &x);
        scanf("%i", &y);
        arr[i] = x + y;
    }
    for(int j = 0; j < t; j++) {
        printf("%i\n", arr[j]);
    }
}