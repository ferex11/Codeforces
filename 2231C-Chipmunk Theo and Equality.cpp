#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18

int nxt(int num) {
    if (num % 2)
        num += 1;
    else
        num /= 2;
    return num;
}

bool is_reachable(int x, int target) {
    if (x == 1)
        return target == 1 || target == 2;
    if (x == target)
        return true;
    return is_reachable(nxt(x), target);
}

vector<int> compute_candidates(int x) {
    vector<int> candidate;
    candidate.pb(x);
    while (x != 1) {
        x = nxt(x);
        candidate.pb(x);
    }
    candidate.pb(2);
    return candidate;
}

int reach(int x, int target) {
    if (x == target)
        return 0;
    return 1 + reach(nxt(x), target);
}

void solve() {
    int n;
    cin >> n;

    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int mn = *min_element(v.begin(), v.end());
    auto candidate = compute_candidates(mn);
    ll ans = inf;
    for (auto target : candidate) {
        ll cost = 0;
        for (int i = 0; i < n; i++) {
            if (!is_reachable(v[i], target)) {
                cost = inf;
                break;
            }
            cost += reach(v[i], target);
        }
        ans = min(ans, cost);
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
