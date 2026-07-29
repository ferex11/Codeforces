#include<bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    int64_t ans = 0;
    map<pair<int, int>, long long> mp;
    for (int i = 0; i < n; i++) {
      int xx = v[i] % x;
      int yy = v[i] % y;
      ans += mp[{(x - xx) % x, yy}];
      mp[{xx, yy}]++;
    }
    cout << ans << "\n";
  }
  return 0;
}
