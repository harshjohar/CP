#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int x;
    int lucky=0;
    int unlucky=0;
    for(int i=0; i<n; i++) {
        cin>>x;
        if(x%2==0) {
            lucky++;
        }
        else {
            unlucky++;
        }
    }
    if(lucky>unlucky) {
        cout<<"READY FOR BATTLE"<<"\n";
    }
    else {
        cout<<"NOT READY"<<"\n";
    }
}