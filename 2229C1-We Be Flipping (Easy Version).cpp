#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back

void solve() {
  int n;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  int par = 0;
  vector<int> ans;
  for (int i = n - 1; i >= 0; i--) {
    if (par == 1) a[i] = -a[i];
    if (a[i] > 0) {
      ans.pb(i);
      par ^= 1;
    }
  }
  cout << ans.size() << endl;
  for (int i = 0; i < ans.size(); i++)
    cout << ans[i] + 1 << " ";
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
