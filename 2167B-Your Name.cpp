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
  string s, t;
  cin >> s >> t;
  vector<int> f(26, 0);
  for (char ch : s)
    f[ch - 'a']++;
  for (char ch : t)
    f[ch - 'a']--;
  for (int i = 0; i < 26; i++) {
    if (f[i] != 0) {
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
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
