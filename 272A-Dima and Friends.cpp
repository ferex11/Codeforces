#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }
  int totalPerson = n + 1;
  int res = 0;
  for (int i = 1; i <= 5; i++) {
    int total = sum + i;
    if (total % totalPerson != 1) res++;
  }
  cout << res << '\n';
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
