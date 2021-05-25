#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int count = 0;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            int avg = (arr[i]+arr[j])/2;
            for(int k=0; k<n; k++) {
                if(avg=arr[k]) {
                    count++;
                    break;
                }
            }
        }
    }
    cout<<count<<"\n";
}