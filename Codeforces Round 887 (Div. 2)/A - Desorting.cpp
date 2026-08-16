#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<long long> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  int min_operations = INT_MAX;
  for (int i = 0; i < n - 1; i++) {
    if (a[i] <= a[i + 1]) {
      int diff = a[i + 1] - a[i];
      int requied = diff / 2 + 1;
      min_operations = min(min_operations, requied);
    } else {
      min_operations = 0;
    }
  }
  cout << min_operations << "\n";
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
