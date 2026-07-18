#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define sp ' '
#define pb push_back
#define inf 1e18
#define pii pair<int, int>
#define pll pair<ll, ll>

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while(t--) {
    int n, k;
    cin >> n >> k;
    int need = (k - 1) / (n - 1);
    cout << k + need << endl;
  }
  return 0;
}
