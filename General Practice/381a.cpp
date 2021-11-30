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

int32_t main() {
    fastio;
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    
    int n; cin>>n;
    int cards[n];
    loop(i, 0, n) cin>>cards[i];
    int player1=0, player2=0, turn1=1;
    int left=0, right=n-1;
    while(left<=right) {
        if(turn1) {
            player1+=max(cards[left], cards[right]);
        }
        else {
            player2+=max(cards[left], cards[right]);
        }
        turn1=1-turn1;
        if(cards[left]>cards[right])
            left+=1;
        else 
            right-=1;
    }
    cout<<player1<<" "<<player2<<endl;
    return 0;
}