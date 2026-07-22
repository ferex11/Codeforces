#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> counts(26, 0);
    for (char ch : s) {
        counts[ch - 'A']++;
    }
    sort(counts.rbegin(), counts.rend());
    int64_t ans = 0;
    for (int i = 0; i < 26; i++) {
        if (k <= 0) break;
        int64_t take = min(k, counts[i]);
        ans += take * take;
        k -= take;
    }
    cout << ans << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
