#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define sp ' '
#define pb push_back
#define inf 1e18
#define pii pair<int, int>
#define pll pair<ll, ll>

void solve() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  int half = n / 2;
  for (int i = 0; i <= half; i += 2) {
    if (a[i] > a[2 * i])
      swap(a[i], a[2 * i]);
  }
  for (int i = 1; i <= half; i += 2) {
    if (a[i] > a[2 * i])
      swap(a[i], a[2 * i]);
  }
  for (int i = 1; i < n; i++) {
    if (a[i - 1] > a[i]) {
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
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
