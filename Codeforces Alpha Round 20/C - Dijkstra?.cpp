#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back

const ll INF = 1e18;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int>>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].pb({v, w});
        adj[v].pb({u, w});
    }
    vector<int> parent(n + 1);
    for (int i = 1; i <= n; i++)
        parent[i] = i;
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
    vector<ll> dist(n + 1, INF);
    pq.push({0, 1});
    dist[1] = 0;
    while (!pq.empty()) {
        auto p = pq.top();
        ll dis = p.first;
        int node = p.second;
        pq.pop();
        if (dis > dist[node])
            continue;
        for (auto edge : adj[node]) {
            int adjNode = edge.first;
            int wt = edge.second;
            if (dis + wt < dist[adjNode]) {
                dist[adjNode] = dis + wt;
                parent[adjNode] = node;
                pq.push({dist[adjNode], adjNode});
            }
        }
    }
    if (dist[n] == INF) {
        cout << -1 << endl;
        return;
    }
    vector<int> path;
    int node = n;
    while (node != parent[node]) {
        path.pb(node);
        node = parent[node];
    }
    path.pb(1);
    reverse(path.begin(), path.end());
    for (auto it : path)
        cout << it << " ";
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
