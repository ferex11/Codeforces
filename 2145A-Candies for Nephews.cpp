#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define sp ' '
#define pb push_back
#define inf 1e18
#define pii pair<int, int>
#define pll pair<ll, ll>

void solve() {
	int n;
	cin >> n;
  if (n % 3 == 0) {
		cout << "0";
	} else {
		for (int i = 1; i <= 2; i++) {
			if ((n + i) % 3 == 0) {
				cout << i;
			}
		}
	}
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
