#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18

void solve() {
    ll n;
    if (!(cin >> n)) return;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    ll mx = *max_element(a.begin(), a.end());
    ll mn = *min_element(a.begin(), a.end());
    ll countMx = 0;
    ll countMn = 0;
    for (int i = 0; i < n; i++) {
        countMx += (a[i] == mx);
        countMn += (a[i] == mn);
    }
    if (mx == mn)
        cout << 0 << " " << (n * (n - 1)) / 2;
    else    
        cout << mx - mn << " " << countMx * countMn;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
