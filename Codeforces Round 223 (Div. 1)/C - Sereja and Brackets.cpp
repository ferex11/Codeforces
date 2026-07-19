#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define sp ' '
#define pb push_back
#define inf 1e18
#define pii pair<int, int>
#define pll pair<ll, ll>

struct Node {
  int open, close, full;
};
class SegmentTree {
private:
  vector<Node> seg;
  string s;
  int n;
  Node merge(Node a, Node b) {
    Node ans = {0, 0, 0};
    ans.full = a.full + b.full + min(a.open, b.close);
    ans.open = a.open + b.open - min(a.open, b.close);
    ans.close = a.close + b.close - min(a.open, b.close);
    return ans;
  }
  void build(int ind, int low, int high) {
    if (low == high) {
      seg[ind].open = s[low] == '(';
      seg[ind].close = s[low] == ')';
      seg[ind].full = 0;
      return;
    }
    int mid = (low + high) >> 1;
    build(2 * ind + 1, low, mid);
    build(2 * ind + 2, mid + 1, high);
    seg[ind] = merge(seg[2 * ind + 1], seg[2 * ind + 2]);
  }
  Node query(int ind, int low, int high, int l, int r) {
    if (high < l || r < low) return {0, 0, 0};
    if (l <= low && high <= r) return seg[ind];
    int mid = (low + high) >> 1;
    Node left = query(2 * ind + 1, low, mid, l, r);
    Node right = query(2 * ind + 2, mid + 1, high, l, r);
    return merge(left, right);
  }
public:
  SegmentTree(string& s1) {
    s = s1;
    n = (int) s.length();
    seg.resize(n * 4);
    build(0, 0, n - 1);
  }
  Node getQuery(int l, int r) {
    return query(0, 0, n - 1, l, r);
  }
};
void solve() {
  string s;
  cin >> s;
  SegmentTree smt(s);
  int q;
  cin >> q;
  while (q--) {
    int l, r;
    cin >> l >> r;
    l--;
    r--;
    Node ans = smt.getQuery(l, r);
    cout << ans.full * 2 << endl;
  }
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
