#include<bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    vector<int> p(n + 1, -1);
    for (int i = 1; i <= n; i++) {
      cin >> a[i];
      if (i > 1) {
        if (a[i - 1] == a[i]) {
          p[i] = p[i - 1];
        } else {
          p[i] = i - 1;
        }
      }
    }
    int q;
    cin >> q;
    while (q--) {
      int l, r;
      cin >> l >> r;
      if (p[r] >= l) {
        cout << p[r] << " " << r << '\n';
      } else {
        cout << "-1 -1\n";
      }
    }
    cout << "\n";
  }
  return 0;
}
