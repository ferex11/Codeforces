#include<bits/stdc++.h>
using namespace std;
static long long MOD = 1e9;
#define ll long long
#define endl "\n"

void solve() {
    ll n, k;
    cin >> n >> k;
    ll oddCount = (n + 1) / 2;
    if (k <= oddCount) cout << 2 * k - 1 << endl;
    else cout << 2 * (k - oddCount) << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
