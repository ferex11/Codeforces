#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18
#define pii pair<int, int>
#define pll pair<ll, ll>

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (auto& x : a)
    cin >> x;
  int target = a[k - 1];
  for (int i = k - 1; i < n; i++) {
    if (a[i] != target) {
      cout << "-1" << endl;
      return;
    }
  }
  int last_diff = -1;
  for (int i = 0; i < k - 1; i++) {
    if (a[i] != target) {
      last_diff = i;
    }
  }
  cout << last_diff + 1 << endl;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
