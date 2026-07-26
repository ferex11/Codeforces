#include<bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  int current_users = 0;
  long long total_traffics = 0;
  while (getline(cin, s)) {
    if (s.empty()) {
      continue;
    }
    if (s[0] == '+') {
      current_users++;
    } else if (s[0] == '-') {
      current_users--;
    } else {
      size_t colon_pos = s.find(':');
      string msg = s.substr(colon_pos + 1);
      total_traffics += (long long) msg.length() * current_users;
    }
  }
  cout << total_traffics << "\n";
  return 0;
}
