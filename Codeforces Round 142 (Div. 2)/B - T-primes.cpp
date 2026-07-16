#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define sp ' '
#define pb push_back
#define inf 1e18
#define pii pair<int, int>
#define pll pair<ll, ll>

const int MAXPRIME = 1000005;
bool is_prime[MAXPRIME + 1];

void precompute_t_primes() {
  fill(is_prime, is_prime + MAXPRIME + 1, true);
  is_prime[0] = is_prime[1] = false;
  for (int p = 2; p * p <= MAXPRIME; p++) {
    if (is_prime[p]) {
      for (int j = p * p; j <= MAXPRIME; j += p) {
        is_prime[j] = false;
      }
    }
  }
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  precompute_t_primes();
  int t;
  cin >> t;
  while(t--) {
    ll x;
    cin >> x;
    ll root = round(sqrt(x));
    if (root * root == x && is_prime[root])
      cout << "YES" << endl;
    else 
      cout << "NO" << endl;
  }
  return 0;
}
