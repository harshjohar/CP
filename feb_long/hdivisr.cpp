#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int max = 1;
    for(int i=1; i<=10; i++) {
        if(n%i == 0) {
            if(i>max) {
                max = i;
            }
        }
    }
    cout<<max<<"\n";
}