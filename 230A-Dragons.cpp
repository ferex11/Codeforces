#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void solve() {
  int s, n;
  cin >> s >> n;
  vector<pair<int, int>> dragons(n);
  for (int i = 0; i < n; i++)
    cin >> dragons[i].first >> dragons[i].second;
  sort(dragons.begin(), dragons.end());
  for (auto &it : dragons) {
    if (s > it.first)
      s += it.second;
    else {
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
