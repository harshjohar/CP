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
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int n; cin>>n;
    int arr[n];
    loop(i, 0, n) {
        cin>>arr[i];
    }

    int check = 0;
    int cnt = 1; // counts the number of contiguous non inc sequences.
    int start = 0;
    int end = 0;
    loop(i, 1, n) {
        if(arr[i]<arr[i-1]) {
            if(check) {
                start = i-1;
                end = i;
                cnt++;
            }
            else {
                end = i;
            }
        }
        else {
            check = 0;
        }
        cout<<"Start: "<<start<<" "<<"End: "<<end<<endl;
    }
    cout<<"cnt: "<<cnt<<endl;
    if(cnt==1) {
        cout<<"yes"<<endl;
        cout<<start+1<<" "<<end+1;
    }
    else {
        cout<<"no"<<endl;
    }
    return 0;
}