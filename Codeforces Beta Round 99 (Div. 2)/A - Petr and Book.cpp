#include<bits/stdc++.h>
using namespace std;

static long long MOD = 1e9;
#define ll long long
#define endl "\n"
#define pb push_back

void solve() {
  int n;
  cin >> n;
  vector<int> a(7);
  for (int i = 0; i < 7; i++) {
    cin >> a[i];
  }
  while (true) {
    for (int i = 0; i < 7; i++) {
      n-= a[i];
      if (n <= 0) {
        cout << i + 1 << endl;
        return;
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
