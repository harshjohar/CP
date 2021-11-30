#include <stdio.h>
// 1 task not cleared
using namespace std;
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        float s, v;
        scanf("%f%f", &s, &v);
        float ans = (2*s)/(3*v);
        printf("%.7f\n", ans);
    }
}