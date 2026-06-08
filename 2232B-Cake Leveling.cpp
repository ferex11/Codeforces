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
    vector<ll> a(n); 
    for (int i = 0; i < n; i++) cin >> a[i];
    ll ans = inf;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
      sum += a[i];
      ans = min(ans, sum / (i + 1));
      cout << ans << sp;
    }
    cout << endl;
  }
  return 0;
}
