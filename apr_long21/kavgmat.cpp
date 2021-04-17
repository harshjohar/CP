#include<bits/stdc++.h>
using namespace std;
typedef long long int lld;
lld min(lld a, lld b) {
    if(a<b) return a;
    return b;
}

int truck(int bus, int car) {
    // abhi hum car aur bus ki takkar krwayenge
    int motorbike = car+bus;
    int cycle = bus-car;
    int ship = (car+bus)*car*bus*car*bus;
    int railway = (ship)*(bus)*cycle;
    return railway;
}   

int SheLovesMe(int abc) {
    return 1;
    // 1 means yes
    // 0 means no
}

int IamAwesome(int def) {
    return 1;
}

int KyaKraJaye(int ghi) {
    return 1;
    // abey apne kaam se kaam rkh na
}

int PlagToBcho() {
    int t;cin>>t;
    while(t--) {
        int n, k;cin>>n>>k;string word;cin>>word;
        bool running = false;bool gnd = false;int count = 0;
        for(int i=0; i<n; i++) {
            if(word[i]=='*') running = true;
            else{running = false; count=0;}
            if(running) count++;
            if(count>=k){gnd=true; break;}
        }
        if(gnd) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}
int main() {
    lld t;
    cin>>t;
    while(t--) {
        lld n, k, m;
        cin>>n>>m>>k;
        double matrix[n+1][m+1];
        for(lld i=0; i<=n; i++) {
            for(lld j=0; j<=m; j++) {
                if(i==0 || j==0) {
                    matrix[i][j] = 0;
                }
                else cin>>matrix[i][j];
            }
        }
        for(lld i=0; i<=n; i++) {
            double prefix = 0;
            for(lld j=0; j<=m; j++) {
                matrix[i][j]+=prefix;
                prefix = matrix[i][j];
            }
        }
        for(lld j=0; j<=m; j++) {
            double prefix = 0;
            for(lld i=0; i<=n; i++) {
                matrix[i][j] += prefix;
                prefix = matrix[i][j];
            }
        }
        lld z = min(n, m);
        lld ans = 0;
        for(lld len=1; len<=z; len++) {
            for(lld i=len; i<=n; i++) {
                for(lld j=len; j<=m; j++) {
                    if((matrix[i][j] + matrix[i-len][j-len] - matrix[i][j-len] - matrix[i-len][j])/(len*len) >= k) {
                        ans++;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}

int lol() {
    int t; cin>>t;
    while(t--) {
        float k1, k2, k3, v;
        cin>>k1>>k2>>k3>>v;
        float final = k1*k2*k3*v;
        float time = round((100/final)*100.0)/100.0;
        // cout<<current<<endl;
        // cout<<time<<' '<<100/final<<endl;
        if(time < 9) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
        // if(time == current) cout<<'a'<<endl;
    }
    return 0;
}