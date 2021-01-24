#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int lead[n][n];
    int total_a=0;
    int total_b=0;
    for(int i=0; i<n; i++) {
        int a, b;
        cin>>a>>b;
        total_a += a;
        total_b += b;
        lead[i][1] = abs(total_a - total_b);
        if(total_a > total_b) {
            lead[i][0] = 1; // --> a wins
        }
        else {
            lead[i][0] = 2; // --> b wins
        }
    }
    // for(int i=0; i<n; i++) {
    //     cout<<lead[i][0]<<" "<<lead[i][1]<<"\n";
    // }
    int max = 0;
    int winner = 0;
    for(int i=0; i<n; i++) {
        if(lead[i][1] > max) {
            max = lead[i][1];
            winner = lead[i][0];
        }
    }
    cout<<winner<<" "<<max<<"\n";
    return 0;
}