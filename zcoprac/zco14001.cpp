#include <iostream>
using namespace std;
#define mod 2147483645;
typedef long long int lld;

int main() {
    // 1 : Move left
    // 2 : Move right
    // 3 : Pick up box
    // 4 : Drop box
    // 0 : Quit
    int n;
    cin>>n;
    lld h;
    cin>>h;
    lld boxes[n];
    for(int i=0; i<n; i++) {
        cin>>boxes[i];
    }
    bool hold = false;
    bool running = true;
    int hook = 0;
    while(running) {
        int input;
        cin>>input;

        if(input==1) {
            if(hook!=0) {
                hook--;
            }
        }
        else if (input==2) {
            if(hook!=n-1) {
                hook++;
            }
        }
        else if(input==3) {
            if(hold == false) {
                if(boxes[hook] != 0) {
                    boxes[hook]--;
                    hold = true;
                }
            }
        }
        else if(input==4) {
            if(hold==true) {
                if(boxes[hook] <h) {
                    boxes[hook]++;
                    hold = false;
                }
            }
        }
        else if(input==0) {
            break;
        }
    }
    for(int i=0; i<n; i++) {
        cout<<boxes[i]<<' ';
    }
}