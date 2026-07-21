#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool same = false;
    for (int i =  1; i < n; i++) {
        if (a[i - 1] != a[i]) {
            same = true;
            break;
        }
    }
    if (!same) {
        cout << "1\n";
        return;
    }
    int mn = 7;
    int mx = 0;
    for (int i = 0; i < n; i++) {
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
    }
    cout << mx - mn + 1 << '\n';
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
