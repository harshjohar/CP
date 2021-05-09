#include<iostream>
#include<vector>
using namespace std;
typedef long long int lld;
lld max(vector<lld> vect) {
    int m = 0;
    for(int i=0; i<vect.size(); i++) {
        if(vect[i]>m) m=vect[i];
    }
    return m;
}

int main() {
    vector<lld> lol;
    int n; cin>>n;
    lld seq[n];
    for(int i=0; i<n; i++) {
        cin>>seq[i];
    }
    int curr = 1;
    for(int i=0; i<n-1; i++) {
        lld x = seq[i];
        for(int j=i+1; j<n; j++) {
            if(seq[j]%x==0) {
                curr++;
                x = seq[j];
            }
        }
        lol.push_back(curr);
        curr = 1;
    }
    // for(int i=0; i<lol.size(); i++) {
    //     cout<<lol[i]<<' ';
    // }
    // cout<<endl;

    cout<<max(lol)<<endl;
}