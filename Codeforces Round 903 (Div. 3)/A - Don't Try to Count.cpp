#include<bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    bool ok = false;
    for (int i = 0; i < 6; i++) {
      if (x.find(s) != string::npos) {
        cout << i << "\n";
        ok = true;
        break;
      }
      x += x;
    }
    if (!ok) {
      cout << "-1\n";
    }
  }
  return 0;
}
