 
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18
#define pii pair<int, int>
#define pll pair<long long>

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto& x : a) {
    cin >> x;
  }
  int mx = *max_element(a.begin(), a.end());
  int mn = *min_element(a.begin(), a.end());
  cout << (mx - mn + 1) / 2 << endl;
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
