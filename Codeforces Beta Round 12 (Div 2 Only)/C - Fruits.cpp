#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    map<string, int> mp;
    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;
        mp[s]++;
    }
    vector<int> counts;
    for (auto& it : mp) {
        counts.push_back(it.second);
    }
    sort(counts.rbegin(), counts.rend());
    int mn = 0;
    for (int i = 0; i < (int)counts.size(); i++) {
        mn += counts[i] * v[i];
    }
    int mx = 0;
    int ind = (int) v.size() - 1;
    for (int i = 0; i < (int)counts.size(); i++) {
        mx += counts[i] * v[ind--];
    }
    cout << mn << " " << mx;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
