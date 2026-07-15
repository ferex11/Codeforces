#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n + 2);
  for (int i = 1; i <= n; i++) cin >> a[i];
  int pivot;
  cin >> pivot;
  a[0] = a[n + 1] = a[pivot];
  int countLeft = 0;
  for (int i = 0; i < pivot; i++) {
    if (a[i] != a[i + 1]) countLeft++;
  }
  int countRight = 0;
  for (int i = pivot; i < n + 1; i++) {
    if (a[i] != a[i + 1]) countRight++;
  }
  cout << max(countLeft, countRight) << endl;
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
