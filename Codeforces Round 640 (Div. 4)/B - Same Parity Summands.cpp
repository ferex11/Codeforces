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
    int n1 = n - (k - 1);
    if (n1 > 0 && n1 % 2 == 1) {
      cout << "YES" << endl;
      for (int i = 0; i < k - 1; i++) cout << "1" << sp;
      cout << n1 << endl;
      continue;
    }
    int n2 = n - 2 * (k - 1);
    if (n2 > 0 && n2 % 2 == 0) {
      cout << "YES" << endl;
      for (int i = 0; i < k - 1; i++) cout << "2" << sp;
      cout << n2 << endl;
      continue;
    }
    cout << "NO" << endl;
  }
  return 0;
}
