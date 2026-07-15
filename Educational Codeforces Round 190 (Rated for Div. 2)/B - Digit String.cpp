#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18

void solve() {
  string s;
  cin >> s;
  int suf = 0;
  for (auto &x : s) {
    if (x == '1' || x == '3') suf++;
  }
  int ans = suf;
  int pref2 = 0;
  for (auto &it : s) {
    if (it == '2') pref2++;
    if (it == '1' || it == '3') suf--;
    ans = max(ans, pref2 + suf);
  }
  cout << (int)s.length() - ans << endl;
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
