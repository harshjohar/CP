#include<iostream>
#include<cmath>
#define current (float)958/100
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        float k1, k2, k3, v;
        cin>>k1>>k2>>k3>>v;
        float final = k1*k2*k3*v;
        float time = round((100/final)*100.0)/100.0;
        // cout<<current<<endl;
        // cout<<time<<' '<<100/final<<endl;
        if(time < current) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
        // if(time == current) cout<<'a'<<endl;
    }
}