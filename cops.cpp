#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int m, x, y, tmp;
        cin>>m>>x>>y;
        int safe_distance = x*y;
        // cout<<safe_distance<<endl;
        int houses[100];

        for(int i=0; i<100; i++){
           houses[i] = 1;
        } 
        // cout<<endl;
        // 0 means unsafe and 1 means safe
        int police[m];
        for(int i=0; i<m; i++) {
            cin>>police[i];
        }
        for(int i=0; i<m; i++) {
            for(int j=police[i]-1; j<police[i]+safe_distance; j++) {
                if(j<100)
                    houses[j] = 0;
            }
            for(int j=police[i]-1; j>police[i]-safe_distance-2; j--) {
                if(j>=0)
                    houses[j] = 0;
            }
        }
        int count=0;
        for(int i=0; i<100; i++){
            //cout<<houses[i]<<" ";
            if(houses[i]==1)
                count++;
        } 
        //cout<<endl;
        cout<<count<<endl;
    }
}