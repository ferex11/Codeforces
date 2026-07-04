#include<bits/stdc++.h>
using namespace std;
static long long MOD = 1e9;
#define ll long long
#define endl "\n"
#define pb push_back
void solve() {
  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  int overallDrinks = k * l;
  int toasts = overallDrinks / nl;
  int limes = c * d;
  int saltToasts = p / np;
  int mn = min({toasts, limes, saltToasts});
  cout << mn / n << endl;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
