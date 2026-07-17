#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define sp ' '
#define pb push_back
#define inf 1e18
#define pii pair<int, int>
#define pll pair<ll, ll>

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> p[2];
    for (ll x : a)
      p[x % 2].push_back(x);
    ll ans = 0;
    if (p[1].size())
      ans += accumulate(p[0].begin(), p[0].end(), 0LL);
    sort(p[1].rbegin(), p[1].rend());
    int m = p[1].size();
    for (int i = 0; i < (m + 1) / 2; i++)
      ans += p[1][i];
    cout << ans << endl;
  }
  return 0;
}
