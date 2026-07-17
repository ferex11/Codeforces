#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define sp ' '
#define pb push_back
#define inf 1e18
#define pii pair<int, int>
#define pll pair<ll, ll>

ll gcd(ll a, ll b) {
  while (b != 0) {
    ll r = a % b;
    a = b;
    b = r;
  }
  return a;
}
ll countDivisors(ll x) {
  ll res = 1;
  for (ll i = 2; i * i <= x; i++) {
    ll cnt = 0;
    while (x % i == 0) {
      x /= i;
      cnt++;
    }
    res *= (cnt + 1);
  }
  if (x > 1) res *= 2;
  return res;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<ll> a(n);
  for (auto& x : a) cin >> x;
  ll g = 0;
  for (int i = 0; i < n; i++)
    g = gcd(g, a[i]);
  cout << countDivisors(g) << endl;
  return 0;
}
