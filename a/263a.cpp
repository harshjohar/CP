#include<bits/stdc++.h>
using namespace std;
int main() {
    int matrix[5][5];
    int ci=2, cj=2;
    int moves=0;
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            cin>>matrix[i][j];
            if(matrix[i][j]==1) {
                moves+=abs(i-ci)+abs(j-cj);
            }
        }
    }
    cout<<moves<<"\n";
}