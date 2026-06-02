#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18

void solve() {
  int n;
  cin >> n;
  vector<int> c(n);
  for (auto& x : c) cin >> x;
  ll sum = 0;
  for (auto& x : c) sum += x;
  ll ones = 0;
  ll slots = 0;
  for (auto& x : c) {
    if (x == 1) ones++;
    else slots += x / 2 - 1;
  }
  if (ones == n - 1) slots++;
  int wasted = max(1LL * 0, ones - slots);
  if (sum - wasted < 3) 
    cout << "0" << endl;
  else 
    cout << sum - wasted << endl;
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
