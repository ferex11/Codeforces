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
	int k;
	cin >> k;
	if (k == 0) {
		cout << 0 << endl;
		return;
	}
	vector<int> a(12);
	for (int i = 0; i < 12; i++) cin >> a[i];
	sort(a.begin(), a.end());
	int numberOfMonths = 0;
	for (int i = 11; i >= 0; i--) {
		k -= a[i];
		numberOfMonths++;
		if (k <= 0) break;
	}
	if (k > 0)
		cout << -1 << endl;
	else
		cout << numberOfMonths << endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}
