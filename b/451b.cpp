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

const int N = (int)1e5+5;
int a[N], b[N];

int32_t main() {
    fastio;
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    
    int n; cin>>n;
    loop(i, 0, n) {
        cin>>a[i];
        b[i]=a[i];
    }

    map<int, int> mapping;
    sort(b, b+n);

    loop(i, 0, n) {
        mapping[b[i]]=i;
    }

    loop(i, 0, n) {
        a[i]=mapping[a[i]];
    }

    int left = -1;
    loop(i, 0, n) {
        if(a[i] != i) {
            left=i;
            break;
        }
    }

    int right = -1;
    loopb(i, n-1, 0) {
        if(a[i]!=i) {
            right=i;
            break;
        }
    }

    if(left==-1||right==-1) {
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
    }
    else {
        reverse(a+left, a+right+1);
        int ok = true;
        loop(i, 0, n) {
            if(a[i]!=i) {
                ok=false;
            }
        }

        if(ok) {
            cout<<"yes"<<endl;
            cout<<left+1<<" "<<right+1<<endl;
        }
        else {
            cout<<"no"<<endl;
        }
    }
    return 0;
}