#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18
#define pii pair<int, int>
#define pll pair<long long>

void solve() {
  ll n, a, b;
  cin >> n >> a >> b;
  ll groups = n / 3;
  ll rem = n % 3;
  ll ans = groups * min(3 * a, b) + min(rem * a, b);
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
