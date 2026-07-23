#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n), c(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  set<int> st;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    st.insert(x);
  }
  int ok = true;
  for (int i = 0; i < n; i++) {
    auto it = st.lower_bound(a[i]);
    if (it == st.end()) {
      ok = false;
      break;
    }
    c[i] = *it;
    st.erase(it);
  }
  if (!ok) {
    cout << "-1\n";
    return;
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (c[i] > c[j]) {
        ans++;
      }
    }
  }
  cout << ans << "\n";
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
