#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, k;
        cin>>n>>k;
        int arr[n];
        int correct=0;
        int slow=0;
        int bot=0;
        int least = ceil(n/2);
        for(int i=0; i<n; i++) {
            cin>>arr[i];

            if(arr[i]!=-1) {
                correct++;
            }
            else if(arr[i]>k) {
                slow++;
            }
            else if(arr[i]<=1) {
                bot++;
            }
        }
        cout<<least<<" ";
        cout<<correct<<" ";
        cout<<slow<<" ";
        cout<<bot<<" ";
        if(correct>=least) {
            if(slow<1) {
                if(bot!=n) {
                    cout<<"Accepted"<<"\n";
                }
                else {
                    cout<<"Bot"<<"\n";
                }
            } 
            else {
                cout<<"Too Slow"<<"\n";
            }
        }
        else {
            cout<<"Rejected"<<"\n";
        }
    }
}