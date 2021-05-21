#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
using pii = pair<int, int>;
#define eb emplace_back
#define ALL(x) begin(x), end(x)
#define RALL(x) rbegin(x), rend(x)
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0)
const int maxn = 3e5 + 5;
const int mod = 1e9 + 7;
vector<int> adj[maxn], subval, val;
vector<pii> ch;
vector<int> par;
vector<vector<int>>grid; // the 2D matrix
int n, m;
void dfs(int now, int lst = -1) {
    for (auto x : adj[now]) {
        if (x == lst) continue;
        dfs(x, now);
    }
    ch.clear();
    for (auto x : adj[now]) {
        if (x != lst) ch.eb(subval[x], x);
    }
    sort(RALL(ch));
    // rbegin, rend means reverse pointers

    int tok = 1;
    for (auto &x : ch) val[x.second] = tok++;
    // x iterates over whole vector

    for (auto x : adj[now]) {
        if (x != lst) subval[now] += val[x] * subval[x];
    }
}
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
void solve() {
    int N, X; 
    cin >> N >> X;

    subval.assign(N, 1), val.assign(N, 0);
    // assign: replace all the value of a vector
    
    for (int i = 0; i < N; ++i) vector<int>().swap(adj[i]);

    for (int i = 0; i < N-1; ++i) {
        int u, v; cin >> u >> v, --u, --v;
        adj[u].eb(v), adj[v].eb(u);
    }
    dfs(0);
    cout << subval[0] % mod * X % mod << "\n";
}
int32_t main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    fastIO();

    int t = 1; cin >> t;
    for (int _ = 1; _ <= t; ++_) {
        solve();
    }
    return 0;
}