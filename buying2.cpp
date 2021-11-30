#include <iostream>
using namespace std;
//bugs reported!
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, k, sum, max_sweets;
        bool adequate = true;
        cin>>n>>k;
        int notes[n];
        for(int i=0; i<n; i++) {
            cin>>notes[i];
            sum+=notes[i];
        }
        max_sweets = (sum - sum%k)/k;
        int c = 0;
        while(adequate == true) {
            if(sum - notes[c] >= max_sweets) {
                adequate = false;
            }
            c++;
        }
        if(adequate == true) {
            cout<<max_sweets<<"\n";
        }
        else {
            cout<<"-1"<<"\n";
        }
    }
}