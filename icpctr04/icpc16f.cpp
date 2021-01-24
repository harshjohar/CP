#include <iostream>
#include<stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,e,d,D;
        scanf("%d %d %d %d",&n,&e,&d,&D);
        if((n*D)<e || e<(n*d)){
            printf("-1\n");
            continue;
        }

        for (int i = 0; i < D; ++i) {
            for (int j = 0; j < n; ++j) {
                if(e>0)
                {
                   printf("%d %d\n",(j+1),((i+j)%n+1));
                   e -= 1;
                }
            }
        }
    }
    return 0;
}