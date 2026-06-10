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
  ll n;
  cin >> n;
  ll d = 11;
  vector<ll> ans;
  while (n >= d) {
    if (n % d == 0)
      ans.pb(n / d);
    d = (d - 1) * 10 + 1;
  }
  cout << (int)ans.size() << endl;
  for (int i = (int) ans.size() - 1; i >= 0; i--)
    cout << ans[i] << sp;
  cout << endl;
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
