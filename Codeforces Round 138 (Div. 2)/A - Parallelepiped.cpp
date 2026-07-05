#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

void solve() {
  ll ab, bc, ac;
  cin >> ab >> bc >> ac;
  ll a = sqrt((ab * ac) / bc);
  ll b = sqrt((ab * bc) / ac);
  ll c = sqrt((ac * bc) / ab);
  cout << 4 * (a + b + c) << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
