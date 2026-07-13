#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18

void solve() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> dp(n + 1, -inf);
    dp[0] = 0;
    for (int ind = 1; ind <= n; ind++) {
        if (ind - a >= 0)
            dp[ind] = max(dp[ind], 1 + dp[ind - a]);
        if (ind - b >= 0)
            dp[ind] = max(dp[ind], 1 + dp[ind - b]);
        if (ind - c >= 0)
            dp[ind] = max(dp[ind], 1 + dp[ind - c]);
    }
    cout << dp[n];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

  return 0;
}
