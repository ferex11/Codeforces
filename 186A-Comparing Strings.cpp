#include<bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s1, s2;
  cin >> s1 >> s2;
  if (s1.length() != s2.length()) {
    cout << "NO" << '\n';
    return 0;
  }
  vector<int> mismatch_indices;
  for (int i = 0; i < (int)s1.length(); i++) {
    if (s1[i] != s2[i])
      mismatch_indices.push_back(i);
  }
  if (mismatch_indices.size() != 2) {
    cout << "NO" << '\n';
    return 0;
  }
  int pos1 = mismatch_indices[0];
  int pos2 = mismatch_indices[1];
  if (s1[pos1] == s2[pos2] && s1[pos2] == s2[pos1]) {
    cout << "YES" << '\n';
  } else {
    cout << "NO" << '\n';
  }
  return 0;
}
