#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18
#define pii pair<int, int>
#define pll pair<ll, ll>

void solve() {
  int n;
  cin >> n;
  vector<int> cnt(8, 0);
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    cnt[x]++;
  }
  if (cnt[5] > 0 || cnt[7] > 0 || cnt[1] != n / 3) {
    cout << "-1" << endl;
    return;
  }
  vector<string> res;
  while (cnt[4] > 0) {
    if (cnt[1] > 0 && cnt[2] > 0) {
      res.pb("1 2 4");
      cnt[1]--;
      cnt[2]--;
      cnt[4]--;
    } else {
      cout << "-1" << endl;
      return;
    }
  }
  while (cnt[3] > 0) {
    if (cnt[1] > 0 && cnt[6] > 0) {
      res.pb("1 3 6");
      cnt[1]--;
      cnt[3]--;
      cnt[6]--;
    } else {
      cout << "-1" << endl;
      return;
    }
  }
  while (cnt[2] > 0) {
    if (cnt[1] > 0 && cnt[6] > 0) {
      res.pb("1 2 6");
      cnt[1]--;
      cnt[2]--;
      cnt[6]--;
    } else {
      cout << "-1" << endl;
      return;
    }
  }
  if (res.size() != n / 3) {
    cout << "-1" << endl;
    return;
  }
  for (auto& s : res) {
    cout << s << endl;
  }
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
