#include<bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> adj;

pair<int, int> dfs(int node, int parent, int dist, int banU, int banV) {
    pair<int, int> ans = {dist, node};
    for (int adjNode : adj[node]) {
        if (adjNode == parent) continue;
        if ((node == banU && adjNode == banV) || (adjNode == banU && node == banV))
            continue;
        ans = max(ans, dfs(adjNode, node, dist + 1, banU, banV)); 
    }
    return ans;
}
int diameter(int start, int banU, int banV) {
    pair<int, int> p = dfs(start, -1, 0, banU, banV);
    int d1 = p.first;
    int A = p.second;
    p = dfs(A, -1, 0, banU, banV);
    int d2 = p.first;
    return d2;
}
void solve() {
    cin >> n;
    adj.assign(n + 1, vector<int> ());
    vector<pair<int, int>> edges;
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        edges.push_back({u, v});
    }
    int ans = 0;
    for (auto& p : edges) {
        int u = p.first;
        int v = p.second;
        int d1 = diameter(u, u, v);
        int d2 = diameter(v, u, v);
        ans = max(ans, d1 * d2);
    }
    cout << ans << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
