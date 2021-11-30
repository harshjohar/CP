#include <stdio.h>
#define range 5000000

int main(void) {
    int n1, n2, n3;
    scanf("%d%d%d", &n1, &n2, &n3);
    static int list[range];
    static int result[range];
    int sum = n1+n2+n3;
    for (int i=0; i<sum; i++) {
        scanf("%d", &list[i]);
    }
    int index;
    for(int i=0; i<sum; i++) {
        index = list[i];
        result[index]++;
    }
    result[0]=0;
    int k=0;
    int print[sum];
    for(int i=0; i<range; i++) {
        if(result[i] >= 2) {
            print[k] = i;
            k++;
        }
    }
    int length = k;
    printf("%d\n", length);
    for(int i=0; i<length; i++) {
        printf("%d\n", print[i]);
    }
    return 0;
}