#include<bits/stdc++.h>
using namespace std;

long long binExp(long long a, long long n, long long mod) {
  long long res = 1;
  while (n > 0) {
    if (n & 1) res = (res * a) % mod;
    a = (a * a) % mod;
    n >>= 1;
  }
  return res;
}

void solve() {
  long long n, m, r, c;
  cin >> n >> m >> r >> c;
  const long long mod = 998244353;
  long long p = n * m - (n - r + 1) * (m - c + 1);
  long long ans = binExp(2, p, mod);
  cout << ans << "\n";
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
