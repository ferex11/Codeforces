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
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while(t--) {
    ll a, b, k;
    cin >> a >> b >> k;
    ll g = gcd(a, b);
    if (max(a / g, b / g) <= k)
      cout << "1" << endl;
    else
      cout << "2" << endl;
  }
  return 0;
}
