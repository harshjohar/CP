#include <bits/stdc++.h>
#define int long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);     // enhances the efficiency of c++ code... reason still not able to understand
using namespace std;

const int N = 1e6+5;    // (a)e(b)+(c) = a*(10^b) + c
int res[N];

void sieve() {
    vector<int>v;
    bool prime[N];
    memset(prime, true, sizeof(prime));

    for(int p=2; p*p<N; p++) {
        if(prime[p] == true) {
            for(int i=p*p; i<N; i+=p) {
                prime[i] = false;
            }
        }
    }

    for(int p=2; p<N; p++) {
        if(prime[p]) {
            v.push_back(p);
        }
    }
    auto it = v.begin();            // same as iterator in python --> for i in list:
    int count = 0;
    for(int i=0; i<N; i++) {
        if(*it<=i) {
            ++count;
            ++it;
        }
        res[i] = count;
    }
}

signed main() {
    fastio;
    sieve();
    int t;
    cin>>t;
    while(t--) {
        int x, y;
        cin>>x>>y;
        if(res[x] <= y) {
            printf("Chef\n");
        }
        else {
            printf("Divyam\n");
        }
    }
    return 0;
}