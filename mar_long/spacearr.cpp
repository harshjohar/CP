#include <iostream>
using namespace std;
//TLE
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n; cin>>n;
        int array[n];
        int compare[n];
        int j = 1;
        for(int i=0; i<n; i++) {
            cin>>array[i];
            compare[i] = j;
            j++;
        }
        int turn = 1;   // true = player1; false = player2
        int point = n-1;
        while(true) {
            if(array[point] < n) {
                array[point]++;
                turn++;
            }
            else {
                point--;
                n--;
            }
            if(n<0) {
                break;
            }
            //cout<<turn<<'\n';
        }
        //cout<<turn<<endl;
        // Lats turn is the LOSER
        if(turn%2 == 0) {
            cout<<"First"<<'\n';
        }
        else {
            cout<<"Second"<<'\n';
        }
    }
}