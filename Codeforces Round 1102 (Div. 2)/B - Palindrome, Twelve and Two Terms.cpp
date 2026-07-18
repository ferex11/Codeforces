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
  int r = n % 12;
  if (r < 10) {
    cout << r << sp << n - r << endl;
  } else if (r == 11) {
    cout << "11" << sp << n - 11 << endl;
  } else {
    if (n >= 22) {
      cout << "22" << sp << n - 22 << endl;
    } else {
      cout << "-1" << endl;
    }
  }
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
