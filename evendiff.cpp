#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }
        int odd=0;
        int even=0;
        // either ALL ODD or ALL EVEN
        for(int i=0; i<n; i++) {
            if(arr[i]%2==0) {
                even++;
            }
            else {
                odd++;
            }
        }
        if(even<=odd) {
            cout<<even<<"\n";
        }
        else {
            cout<<odd<<"\n";
        }
    }
}