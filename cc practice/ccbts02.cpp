#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;cin>>n;
        string commands[n];
        int cmd[n];
        for(int i=0; i<n; i++) {
            cin>>commands[i];
            if(commands[i][2]=='a') {
                cmd[i] = 1;
            }
            else if(commands[i][2]=='s') {
                cmd[i]=2;
            }
            else {
                cmd[i]=0;
            }
        }
        bool running = false;
        bool satyanaas = false;
        for(int i=0; i<n; i++) {
            if(cmd[i]==1) {
                running=true;
            }
            else if(cmd[i]==2) {
                running = true;
            }
            else {
                if(running == false) {
                    cout<<404<<endl;
                    satyanaas = true;
                    break;
                }
                else {
                    running = false;
                }
            }
        }
        if(satyanaas==false) {
            cout<<200<<endl;
        }
    }
    return 0;
}