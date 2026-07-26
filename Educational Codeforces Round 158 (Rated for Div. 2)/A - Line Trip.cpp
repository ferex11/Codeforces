#include<bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n >> x;
    vector<int> a;
    a.push_back(0);
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      a.push_back(x);
    }
    a.push_back(x);
    n = (int) a.size();
    int max_dist = INT_MIN;
    for (int i = 1; i < n; i++) {
      if (i == n - 1) {
        max_dist = max(max_dist, 2 * (a[i] - a[i - 1]));
      } else {
        max_dist = max(max_dist, a[i] - a[i - 1]);
      }
    }
    cout << max_dist << "\n";
  }
  return 0;
}
