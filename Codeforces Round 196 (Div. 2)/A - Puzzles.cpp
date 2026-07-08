#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> f(m);
    for (int i = 0; i < m; i++)
        cin >> f[i];
    sort(f.begin(), f.end());
    int minDiff = INT_MAX;
    for (int i = 0; i <= m - n; i++)
        minDiff = min(minDiff, f[i + n - 1] - f[i]);
    cout << minDiff << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
