#include<bits/stdc++.h>
using namespace std;
static long long MOD = 1e9;
#define ll long long
#define endl "\n"
#define pb push_back
void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  int ans = 0;
  int mx = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    float temp = ceil((double)a[i] / m);
    if (temp >= mx) {
      mx = temp;
      ans = i + 1;
    }
  }
  cout << ans << endl;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
