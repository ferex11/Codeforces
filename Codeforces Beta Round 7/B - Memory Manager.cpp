#include<bits/stdc++.h>
using namespace std;

void solve() {
  int t, m;
  cin >> t >> m;
  vector<int> memory(m, 0);
  int next_id = 1;
  while (t--) {
    string command;
    cin >> command;
    if (command == "alloc") {
      int n;
      cin >> n;
      bool allocated = false;
      int free_cnt = 0;
      for (int i = 0; i < m; i++) {
        if (memory[i] == 0) {
          free_cnt++;
        } else {
          free_cnt = 0;
        }
        if (free_cnt == n) {
          int start_ind = i - n + 1;
          for (int k = start_ind; k <= i; k++) {
            memory[k] = next_id;
          }
          cout << next_id << "\n";
          next_id++;
          allocated = true;
          break;
        }
      }
      if (!allocated) {
        cout << "NULL\n";
      }
    } else if (command == "erase") {
      int x;
      cin >> x;
      bool found = false;
      for (int i = 0; i < m; i++) {
        if (memory[i] == x) {
          found = true;
          memory[i] = 0;
        }
      }
      if (x <= 0 || !found) {
        cout << "ILLEGAL_ERASE_ARGUMENT\n";
      }
    } else {
      int ind = 0;
      for (int i = 0; i < m; i++) {
        if (memory[i] != 0) {
          memory[ind++] = memory[i];
        }
      }
      while (ind < m) {
        memory[ind++] = 0;
      }
    }
  }
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
