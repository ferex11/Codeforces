#include<bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  int i = 0;
  int j = n / 2;
  int cnt = 0;
  while (i < n / 2 && j < n) {
    if (a[j] >= 2 * a[i]) {
      cnt++;
      i++;
    }
    j++;
  }
  cout << n - cnt << "\n";
  return 0;
}
