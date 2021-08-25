#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define int long long int
#define pb push_back
#define loop(i, a, b) for(int i=a; i<b; i++)
#define loopb(i, a, b) for(int i=a; i>=b; i--)
#define testcase int t; cin>>t; while(t--)
#define pii pair<int, int>
#define f first
#define s second
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n";

int factorial(int x) {
    if(x==0) return 1;
    return x*factorial(x-1);
}


int32_t main() {
    fastio;
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    
    string correct; cin>>correct;
    string recieved; cin>>recieved; 

    vi signal(3, 0);
    // 0 = +, 1 = -, 2 = ?
    vi r_signal(3, 0);

    loop(i, 0, correct.length()) {
        char c = correct[i];
        if(c=='+') signal[0]++;
        if(c=='-') signal[1]++;
        // else signal[2]++; 
    }

    for(char c: recieved) {
        if(c=='+') r_signal[0]++;
        if(c=='-') r_signal[1]++;
        if(c=='?') r_signal[2]++; 
    }

    int n = r_signal[2];
    bool flag = true;

    int plus_missing = 0;
    int minus_missing = 0;

    if(signal[0]-r_signal[0]>=0) plus_missing+=(signal[0]-r_signal[0]);
    else flag=false;
    if(signal[1]-r_signal[1]>=0) minus_missing+=(signal[1]-r_signal[1]);
    else flag = false;


    double ans = 1;
    if(flag) {
        if(r_signal[2]!=0) {
            int r = plus_missing;
            int ncr = factorial(n)/(factorial(r)*factorial(n-r));
            ans = ncr * pow(0.5, plus_missing) * pow(0.5, minus_missing);

        }
    }

    // loop(i, 0, 3) {
    //     cout<<signal[i]<<endl;
    // }
    // loop(i, 0, 3) {
    //     cout<<r_signal[i]<<endl;
    // }
    double zero = 0;
    if(!flag) printf("%.12f\n", zero);
    else
        printf("%.12f\n", ans);
    return 0;
}