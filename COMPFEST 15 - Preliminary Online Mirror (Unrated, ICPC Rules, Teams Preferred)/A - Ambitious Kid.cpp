#include<bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  bool found_zero = false;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (!a[i]) {
      found_zero = true;
    }
  }
  if (found_zero) {
    cout << "0\n";
  } else {
    int mn = INT_MAX;
    for (int i = 0; i < n; i++) {
      mn = min(mn, abs(a[i]));
    }
    cout << mn << "\n";
  }
  return 0;
}
