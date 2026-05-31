#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18

void solve() {
  int n;
  cin >> n;
  vector<ll> a(n);
  for (auto& x : a) cin >> x;
  vector<ll> b(n);
  for (auto& x : b) cin >> x;
  for (int i = 0; i < n; i++) {
    if (a[i] > b[i]) {
      swap(a[i], b[i]);
    }
  }
  ll mx = -inf;
  ll sum = 0;
  for (int i = 0; i < n; i++) {
    mx = max(mx, a[i]);
    sum += b[i];
  }
  cout << sum + mx << endl;
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
