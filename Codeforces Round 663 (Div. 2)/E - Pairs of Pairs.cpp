#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> adj;
vector<int> parent;
vector<int> depth;
vector<bool> vis;
vector<vector<int>> depth_layers;

void dfs(int node, int d, int p) {
    vis[node] = true;
    parent[node] = p;
    depth[node] = d;
    depth_layers[d].push_back(node);
    for (int adjNode : adj[node]) {
        if (!vis[adjNode]) {
            dfs(adjNode, d + 1, node);
        }
    }
}
void solve() {
    cin >> n >> m;
    adj.assign(n + 1, vector<int> ());
    depth.assign(n + 1, 0);
    parent.assign(n + 1, -1);
    vis.assign(n + 1, false);
    depth_layers.assign(n + 1, vector<int> ());
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, 1, -1);
    int required_len = (n + 1) / 2;
    int deepest_node = -1;
    for (int i = 1; i <= n; i++) {
        if (depth[i] >= required_len) {
            deepest_node = i;
            break;
        }
    }
    if (deepest_node != -1) {
        cout << "PATH\n";
        vector<int> path;
        int cur = deepest_node;
        while (cur != -1) {
            path.push_back(cur);
            cur = parent[cur];
        }
        cout << path.size() << "\n";
        for (int node : path) {
            cout << node << " ";
        }
        cout << '\n';
        return;
    }
    cout << "PAIRING\n";
    vector<pair<int, int>> pairs;
    for (int d = 1; d <= n; ++d) {
        for (int i = 0; i + 1 < depth_layers[d].size(); i += 2) {
            pairs.push_back({depth_layers[d][i], depth_layers[d][i + 1]});
        }
    }
    cout << pairs.size() << "\n";
    for (auto& p : pairs) {
        cout << p.first << " " << p.second << '\n';
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
