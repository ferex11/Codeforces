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
  vector<int> a(n);
  bool odd = false;
  bool even = false;
  for (auto& x : a) {
    cin >> x;
    if (x & 1) odd = true;
    else even = true;
  }
  if (odd && even)
    sort(a.begin(), a.end());
  for (int x : a)
    cout << x << sp;
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
