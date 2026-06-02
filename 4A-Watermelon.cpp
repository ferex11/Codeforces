#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18
#define pii pair<int, int>
#define pll pair<ll, ll>

void solve() {
  int w;
  cin >> w;
  if (w > 2 && w % 2 == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
