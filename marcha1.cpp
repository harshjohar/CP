#include<iostream>
#include<vector>
using namespace std;
bool solve(vector<int> money, int m, int curr_sum, int index);
int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while(t--) {
        int n,m; cin>>n>>m;
        vector<int> money;
        for(int i=0; i<n; i++) {
            int tmp; cin>>tmp;
            money.push_back(tmp);
        }
        bool ans = solve(money, m, 0, 0);
        if(ans) cout<<"Yes"<<'\n';
        else cout<<"No"<<'\n';
    }
}

bool solve(vector<int> money, int m, int curr_sum, int index) {
    if(curr_sum == m) return true;
    else if(index==money.size() || curr_sum > m) return false; 
    else return solve(money, m, curr_sum+money[index], index+1) || solve(money, m, curr_sum, index+1);
}
