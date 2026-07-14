#include<bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t, sx, sy, ex, ey;
  cin >> t >> sx >> sy >> ex >> ey;
  string direction;
  cin >> direction;
  int dx = ex - sx;
  int dy = ey - sy;
  int cnt = 0;
  for (auto& d : direction) {
    if (dx == 0 && dy == 0) {
      cout << cnt;
      return 0;
    }
    if (d == 'E' && dx > 0) dx--;
    if (d == 'W' && dx < 0) dx++;
    if (d == 'S' && dy < 0) dy++;
    if (d == 'N' && dy > 0) dy--;
    cnt++;
  }
  if (dx == 0 && dy == 0) cout << cnt;
  else cout << "-1";
  return 0;
}
