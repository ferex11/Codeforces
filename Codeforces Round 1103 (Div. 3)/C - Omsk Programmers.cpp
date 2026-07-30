#include<bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int a, b, x;
    cin >> a >> b >> x;
    int ans = INT_MAX;
    int i = 0;
    while (a != b) {
      if (b > a) {
        swap(a, b);
      }
      ans = min(ans, abs(a - b) + i);
      a /= x;
      i++;
    }
    ans = min(ans, i);
    cout << ans << "\n";
  }
  return 0;
}
