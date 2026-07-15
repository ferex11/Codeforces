#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18
#define pii pair<int, int>
#define pll pair<long long>

void solve() {
  ll n, x1, x2, k;
  cin >> n >> x1 >> x2 >> k;
  if (n <= 3) {
    cout << "1" << endl;
    return;
  }
  ll diff = abs(x1 - x2);
  ll ans = min(diff, n - diff) + k;
  cout << ans << endl;
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
