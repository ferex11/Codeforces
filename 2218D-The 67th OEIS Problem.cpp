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
    int x = 1;
    for (int i = 0; i < n; i++) {
      cout << x * (x + 2) << " ";
      x += 2;
    }
    cout << '\n';
  }
  return 0;
}
