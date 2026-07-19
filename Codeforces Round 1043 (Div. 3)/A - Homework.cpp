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
  string a;
  cin >> a;
  int m;
  cin >> m;
  string b, c;
  cin >> b >> c;
  for (int i = 0; i < m; i++) {
    if (c[i] == 'D')
      a = a + b[i];
    else
      a = b[i] + a;
  }
  cout << a << endl;
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
