#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18
#define pii pair<int, int>
#define pll pair<ll, ll>

void solve() {
  string num1, num2;
  cin >> num1 >> num2;
  string res = "";
  for (int i = 0; i < (int) num1.length(); i++) {
		if (num1[i] == num2[i]) {
			res.pb('0');
		} else {
			res.pb('1');
		}
  }
	cout << res << endl;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
