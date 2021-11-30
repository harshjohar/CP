#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int salary[n];
        for(int i=0; i<n; i++) cin>>salary[i];
        sort(salary, salary+n);
        int count = 0;
        int j=1;
        for(int i=n-1; i>=1; i--) {
            count+=(salary[i]-salary[i-1])*j;
            j++;
        }
        cout<<count<<endl;
    }
}