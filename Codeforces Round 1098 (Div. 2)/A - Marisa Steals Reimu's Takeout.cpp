#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  int cnt0 = 0;
  int cnt1 = 0;
  int cnt2 = 0;
  for (auto& x : a) {
    cin >> x;
    if (x == 0) cnt0++;
    else if (x == 1) cnt1++;
    else cnt2++;
  }
  int operations = cnt0;
  int pairs = min(cnt1, cnt2);
  operations += pairs;
  cnt1 -= pairs;
  cnt2 -= pairs;
  operations += cnt1 / 3;
  operations += cnt2 / 3;
  cout << operations << "\n";
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
