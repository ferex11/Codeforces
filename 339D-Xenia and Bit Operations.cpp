#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18
#define pii pair<int, int>
#define pll pair<ll, ll>

vector<int> seg;
vector<int> a;
void build(int ind, int low, int high, int flag) {
  if (low == high) {
    seg[ind] = a[low];
    return;
  }
  int mid = low + (high - low) / 2;
  build(2 * ind + 1, low, mid, !flag);
  build(2 * ind + 2, mid + 1, high, !flag);
  if (flag)
    seg[ind] = seg[2 * ind + 1] | seg[2 * ind + 2];
  else
    seg[ind] = seg[2 * ind + 1] ^ seg[2 * ind + 2];
}
void update(int ind, int low, int high, int pos, int val, int flag) {
  if (low == high) {
    seg[ind] = val;
    return;
  }
  int mid = low + (high - low) / 2;
  if (pos <= mid)
    update(2 * ind + 1, low, mid, pos, val, !flag);
  else  
    update(2 * ind + 2, mid + 1, high, pos, val, !flag);
  if (flag)
    seg[ind] = seg[2 * ind + 1] | seg[2 * ind + 2];
  else
    seg[ind] = seg[2 * ind + 1] ^ seg[2 * ind + 2];
}
void solve() {
  int n, m;
  cin >> n >> m;
  int sz = n;
  n = (1 << n);
  seg.resize(4 * n);
  a.resize(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  int initial_flag = (sz % 2 == 1) ? 1 : 0;
  build(0, 0, n - 1, initial_flag);
  while (m--) {
    int pos, val;
    cin >> pos >> val;
    pos--;
    update(0, 0, n - 1, pos, val, initial_flag);
    cout << seg[0] << endl;
  }
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
