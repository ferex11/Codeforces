#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n, k, x;
  cin >> n >> k >> x;
  if (x != 1) {
    cout << "YES\n";
    cout << n << "\n";
    while (n--) cout << "1 ";
    cout << "\n";
  } else {
    if (k == 1 || (k == 2 && n % 2 == 1)) cout << "NO\n";
    else {
      cout << "YES\n";
      if (n % 2 == 0) {
        cout << n / 2 << "\n";
        for (int i = 1; i <= n / 2; i++) cout << "2 ";
        cout << "\n";
      } else {
        cout << (n - 3) / 2 + 1 << "\n";
        for (int i = 1; i <= (n - 3) / 2; i++) cout << "2 ";
        cout << "3\n";
      }
    }
  }
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
