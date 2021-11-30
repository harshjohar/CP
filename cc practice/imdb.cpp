#include<bits/stdc++.h>
using namespace std;
typedef long long int lld;

bool sort_two_d(const vector<lld>& v1, const vector<lld>& v2) {
    return v1[1]<v2[1];
}

int main() {
    int t; cin>>t;
    while(t--) {
        lld n, x, s, r;
        cin>>n>>x;
        vector<pair<lld, lld>>data;
        for(int i=0; i<n; i++) {
            cin>>s>>r;
            data.push_back(make_pair(r, s));
        }
        sort(data.rbegin(), data.rend());
        for(int i=0; i<data.size(); i++) {
            if(data[i].second <= x) {
                cout<<data[i].first<<endl;
                break;
            }
        }
    }
}