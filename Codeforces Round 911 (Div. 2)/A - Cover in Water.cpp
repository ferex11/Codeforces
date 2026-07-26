#include<bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    size_t pos = s.find("...");
    if (pos == string::npos) {
      int cnt = 0;
      for (char ch : s) {
        if (ch == '.') {
          cnt++;
        }
      }
      cout << cnt << "\n";
    } else {
      cout << "2\n";
    }
  }
  return 0;
}
