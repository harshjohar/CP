#include <stdio.h>

int main(void) {
    int x;
    float y;
    scanf("%i", &x);
    scanf("%f", &y);

    if(x < 0 || x > 2000) {
        return 1;
    }

    if(y < 0 || y > 2000) {
        return 2;
    }

    if(x % 5 != 0) {
        printf("%.2f", y);
    }
    else {
        if(x+0.50 > y) {
            printf("%.2f", y);
        }

        else {
            float r = y - x - 0.50;
            printf("%.2f", r);
        }
    }
    return 0;
}