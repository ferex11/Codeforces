#include<bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int64_t a, b, c;
    cin >> a >> b >> c;
    if ((c & 1) == 1) {
      if (a + 1 > b) {
        cout << "First\n";
      } else {
        cout << "Second\n";
      }
    } else {
      if (a > b) {
        cout << "First\n";
      } else {
        cout << "Second\n";
      }
    }
  }
  return 0;
}
