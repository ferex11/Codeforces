#include<bits/stdc++.h>
using namespace std;

static long long MOD = 1e9;
#define ll long long
#define endl "\n"

bool isSame(string& s, string& t) {
  reverse(s.begin(), s.end());
  if (s == t)
    return true;
  return false;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  string t;
  cin >> t;
  if (isSame(s, t))
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
