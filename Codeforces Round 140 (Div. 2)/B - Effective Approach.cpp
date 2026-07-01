#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<int> a(n);
    vector<int> pos(n + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pos[a[i]] = i + 1;
    }
    ll m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++) cin >> b[i];
    ll cntLeft = 0;
    ll cntRight = 0;
    for (int i = 0; i < m; i++) {
        int p = pos[b[i]];
        cntLeft += p;
        cntRight += n - p + 1;
    }
    cout << cntLeft << " " << cntRight;
    return 0;
}
