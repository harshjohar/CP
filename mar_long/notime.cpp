#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, h, x;
    cin>>n>>h>>x;
    // n -> number of time zones
    // h -> time to solve problem
    // x -> hours left
    int time_zones[n];
    for(int i=0; i<n; i++) {
        cin>>time_zones[i];
    }
    sort(time_zones, time_zones+n);
    bool running = false;
    for(int i=n-1; i>=0; i--) {
        int tmp = x+time_zones[i];
        if(tmp >= h) {
            running = true;
            break;
        }
    }

    if(running== true) {
        cout<<"YES"<<'\n';
    }
    else {
        cout<<"NO"<<'\n';
    }
}