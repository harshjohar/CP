#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin>>t;
    while(t--) {
        // inputs
        int n, k, e, m;
        ll input;
        cin>>n>>k>>e>>m;
        ll marks[n] = {0};

        for(int i=0; i<n-1; i++) {
            for(int j=0; j<e; j++) {
                cin>>input;
                marks[i]+=input;
            }
        }
        for(int k=0; k<e-1; k++) {
            cin>>input;
            marks[n-1]+=input;
        }

        // marksheet
        // for(int i=0; i<n; i++) {
        //     for(int j=0; j<e; j++) {
        //         cout<<arr[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        //total marks
        // for(int m=0; m<n; m++) {
        //     cout<<marks[m]<<endl;
        // }

        // matrix ready!
        sort(marks, marks+n-1);
        reverse(marks, marks+n-1);

        // sorted marks
        // for(int m=0; m<n; m++) {
        //     cout<<marks[m]<<endl;
        // }

        int required_marks = (marks[k-1] + 1) - marks[n-1];
        if(required_marks > m) {
            cout<<"Impossible"<<"\n";
        }
        else if(required_marks<0) {
            cout<<"0"<<"\n";
        }
        else {
            cout<<required_marks<<"\n";
        }
    }
    return 0;
}