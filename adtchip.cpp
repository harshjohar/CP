#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define endl '\n'

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

void merge_neighbours(int i, int j) {
    if(i-1 >= 0 && grid[i-1][j]==0) merge(i*m+j, (i-1)*m+j);
    if(i+1 < n && grid[i+1][j]==0) merge(i*m+j, (i+1)*m+j);
    if(j-1 >= 0 && grid[i][j-1] == 0) merge(i*m+j, i*m+j-1);
    if(j+1 < m && grid[i][j+1] == 0) merge(i*m+j, i*m+j+1);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int q, type, x1, x2, y1, y2, i, j, k;
    cin>>n>>m>>q;
    grid.resize(n+1, vector<int>(m+1, 0));
    par.resize(n*m, -1);
    vector<vector<int>> queries;
    vector<string> ans;
    while(q--) {
        cin>>type>>x1>>x2>>y1>>y2;
        x1--; y1--; x2--; y2--;
        if(type == 1) {
            for(i=x1; i<=x2; i++) grid[i][y1]=1, grid[i][y2] = 1;
            for(j=y1; j<=y2; j++) grid[x1][j]=1; grid[x2][j] = 1;
        }
        queries.push_back({type, x1, x2, y1, y2});
    }
    for(i=0;i<n;i++) {
        for(j=0; j<m; j++) 
            if(grid[i][j] == 0) merge_neighbours(i, j);
    }
    for(k=queries.size()-1; k>=0; k--) {
        type = queries[k][0], x1=queries[k][1], y1=queries[k][2], x2=queries[k][3], y2 = queries[k][4];
        if(type==2) {
            if(find(x1*m+y1)==find(x2*m+y2)) ans.push_back("YES");
            else ans.push_back("NO");
        }
        else {
            for(i=x1; i<=x2; i++) {
                grid[i][y1]=0; merge_neighbours(i, y1);
                grid[i][y2]=0; merge_neighbours(i, y2);
            }
            for(j=y1; j<=y2; j++) {
                grid[x1][j]=0; merge_neighbours(x1,j);
                grid[x2][j]=0; merge_neighbours(x2,j);
            }
        }
    }
    for(i = ans.size()-1; i>=0; i--) cout<<ans[i]<<endl;
}