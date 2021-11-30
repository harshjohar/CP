#include <iostream>
#include <algorithm>
using namespace std;
int gcd(int a, int b);
int main() {
    int t;
    cin>>t;
    while(t--) {
        int s1, s2, x1, x2, count=0;
        cin>>s1>>s2;
        int relative = abs(s1-s2);
        s1 = abs(s1);
        s2 = abs(s2);
        cout<<relative/gcd(s1, s2)<<"\n";
    }
}

int gcd(int a, int b) {
    while(b) {
        a %= b;
        swap(a, b);
    }
    return a;
}