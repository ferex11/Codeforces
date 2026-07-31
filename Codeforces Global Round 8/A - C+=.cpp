#include<bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int64_t a, b, n;
    cin >> a >> b >> n;
    if (a > n || b > n) {
      cout << "0\n";
      continue;
    }
    int cnt = 0;
    while ( n >= a && n >= b) {
      if (a < b) {
        a += b;
      } else {
        b += a;
      }
      cnt++;
    }
    cout << cnt << "\n";
  }
  return 0;
}
