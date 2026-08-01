#include<bits/stdc++.h>
using namespace std;

void solve() {
  long long n, k;
  cin >> n >> k;
  long long total_popcount = 0;
  long long bit_val = 1;
  while (n > 0) {
    if (n / bit_val >= k) {
      total_popcount += k;
      n -= k * bit_val;
    } else {
      total_popcount += n / bit_val;
      break;
    }
    if (bit_val > n) break;
    bit_val *= 2;
  }
  cout << total_popcount << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
