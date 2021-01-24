#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        if(x1==x2) {
            if(y2>y1) {
                cout<<"up"<<endl;
            }
            else if(y1>y2) {
                cout<<"down"<<endl;
            }
        }
        else if(y1==y2) {
            if(x2>x1) {
                cout<<"right"<<endl;
            }
            else if(x2<x1) {
                cout<<"left"<<endl;
            }
        }
        else {
            cout<<"sad"<<endl;
        }
    }
}