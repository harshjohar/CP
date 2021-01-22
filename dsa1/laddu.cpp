#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--) {
        int n;
        string type;
        cin>>n>>type;
        int x = type.length();
        int laddu=0;
        for(int i=0; i<n; i++) {
            string contest;
            int points;
            cin>>contest;
            int c= contest.length();

            if(c==11) {
                laddu += 300;
                cin>>points;
                if(points<=20) {
                    laddu += 20-points;
                }
            }
            else if(c==15) {
                laddu += 300;
            }
            else if(c==9) {
                cin>>points;
                laddu += points;
            }
            else if(c==14) {
                laddu += 50;
            }
            // cout<<laddu<<endl;
        }

        if(x == 6) {
            int month=0;
            while(laddu>=200) {
                laddu -= 200;
                month++;
            }
            cout<<month<<endl;
        }
        else if(x == 10) {
            int month=0;
            while(laddu>=400) {
                laddu -= 400;
                month++;
            }
            cout<<month<<endl;
        }
    }
}