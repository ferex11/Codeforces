#include<bits/stdc++.h>
using namespace std;

void solve() {
  vector<vector<char>> grid(8, vector<char> (8));
  for (int i = 0; i < 8; i++) {
    string s;
    cin >> s;
    for (int j = 0; j < 8; j++) {
      grid[i][j] = s[j];
    }
  }
  int ans = 0;
  for (int i = 0; i < 8; i++) {
    int cntB = 0;
    for (int j = 0; j < 8; j++) {
      if (grid[i][j] == 'B') {
        cntB++;
      }
    }
    if (cntB == 8) {
      ans++;
    }
  }
  for (int j = 0; j < 8; j++) {
    int cntB = 0;
    for (int i = 0; i < 8; i++) {
      if (grid[i][j] == 'B') {
        cntB++;
      }
    }
    if (cntB == 8) {
      ans++;
    }
  }
  if (ans == 16) {
    ans = 8;
  }
  cout << ans << "\n";
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
