#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define pb push_back

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> planes(m);
    for (int i = 0; i < m; i++) {
        cin >> planes[i];
    }
    priority_queue<int> max_pq;
    for (auto x : planes)
        max_pq.push(x);
    int temp = n;
    int maxCost = 0;
    while (temp--) {
        int val = max_pq.top();
        max_pq.pop();
        maxCost += val;
        val--;
        if (val != 0) 
            max_pq.push(val);
    }
    priority_queue<int, vector<int>, greater<int>> min_pq;
    for (auto x : planes)
        min_pq.push(x);
    int minCost = 0;
    while (n--) {
        int val = min_pq.top();
        min_pq.pop();
        minCost += val;
        val--;
        if (val != 0)
            min_pq.push(val);
    }
    cout << maxCost << " " << minCost << endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	solve();
	return 0;
}
