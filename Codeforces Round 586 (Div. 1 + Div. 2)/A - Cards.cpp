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
	string s;
	cin >> s;
	int cntZ = 0;
	int cntN = 0;
	for (auto it : s) {
		if (it == 'n') cntN++;
		else if (it == 'z') cntZ++;
	}
	while (cntN--) cout << "1" << sp;
	while (cntZ--) cout << "0" << sp;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
