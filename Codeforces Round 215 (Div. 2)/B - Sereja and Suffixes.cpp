#include<bits/stdc++.h>
using namespace std;

void solve() {
    int  n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> distinct_count(n + 1, 0);
    set<int> seen;
    for (int i = n - 1; i >= 0; i--) {
        if (seen.count(a[i])) {
            distinct_count[i] = distinct_count[i + 1];
        } else {
            seen.insert(a[i]);
            distinct_count[i] = distinct_count[i + 1] + 1;
        }
    }
    while (m--) {
        int l;
        cin >> l;
        cout << distinct_count[l - 1] << "\n";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
