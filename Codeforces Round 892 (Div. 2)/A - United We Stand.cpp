#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<long long> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  vector<long long> b, c;
  long long mx = *max_element(a.begin(), a.end());
  for (int i = 0; i < n; i++) {
    if (a[i] == mx) c.push_back(a[i]);
    else b.push_back(a[i]);
  }
  if (b.empty()) cout << "-1\n";
  else {
    cout << b.size() << " " << c.size() << "\n";
    for (int it : b) cout << it << " ";
    cout << "\n";
    for (int it : c) cout << it << " ";
    cout << "\n";
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
