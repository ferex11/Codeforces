#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> dist;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> product_type(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> product_type[i];
    }
    adj.assign(n + 1, vector<int> ());
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dist.assign(n + 1, -1);
    queue<int> q;
    q.push(1);
    dist[1] = 0;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        for (int adjNode : adj[node]) {
            if (dist[adjNode] == -1) {
                dist[adjNode] = dist[node] + 1;
                q.push(adjNode); 
            }
        }
    }
    vector<int> max_product_dist(k + 1, 0);
    for (int i = 1; i <= n; i++) {
        int p_type = product_type[i];
        int d = dist[i];
        max_product_dist[p_type] = max(max_product_dist[p_type], d);
    }
    for (int i = 1; i <= k; i++) {
        cout << max_product_dist[i] << ' ';
    }
    cout << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
