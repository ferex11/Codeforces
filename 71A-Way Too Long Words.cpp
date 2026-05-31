#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18

void solve() {
  string s;
  cin >> s;
  string ans = "";
  if (s.length() > 10) {
    cout << s[0] + to_string(s.length() - 2) + s[s.length() - 1] << endl;
    return;
  }
  cout << s << endl;
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
