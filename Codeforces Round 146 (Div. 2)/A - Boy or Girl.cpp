#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define pb push_back

void solve() {
  string s;
  cin >> s;
  set<char> st;
  for (auto it : s) {
    st.insert(it);
  }
  if (st.size() % 2 == 0) cout << "CHAT WITH HER!";
  else cout << "IGNORE HIM!";
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
