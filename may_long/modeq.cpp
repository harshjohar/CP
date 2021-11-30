#include<bits/stdc++.h>
using namespace std;
#define testcase int t; cin>>t; while(t--)
#define int long long int
vector<int>par;
vector<vector<int>>grid; // the 2D matrix
int n, m;
int find(int x) {
    if(par[x] < 0) return x;
    return par[x] = find(par[x]);
}

bool merge(int x, int y) {
    int px = find(x), py = find(y);
    if(px == py) return false;
    if(par[px] > par[py]) swap(px, py);
    par[px] += par[py];
    par[py] = px;
    return true; 
}


int32_t main() {
    testcase {
        int k, n, m; cin>>n>>m;
        vector<int> v(n+1, 1);
        int c=0;
        for(int i=2; i<=n; i++) {
            k=m%i;
            c+=v[k];
            for(int j=k; j<=n; j+=i) {
                v[j]++;
            }   
        }
        cout<<c<<endl;
        // for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
        // cout<<endl;
    }
    return 0;
}
void merge_neighbours(int i, int j) {
    if(i-1 >= 0 && grid[i-1][j]==0) merge(i*m+j, (i-1)*m+j);
    if(i+1 < n && grid[i+1][j]==0) merge(i*m+j, (i+1)*m+j);
    if(j-1 >= 0 && grid[i][j-1] == 0) merge(i*m+j, i*m+j-1);
    if(j+1 < m && grid[i][j+1] == 0) merge(i*m+j, i*m+j+1);
}