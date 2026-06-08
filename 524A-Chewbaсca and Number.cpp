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
	string x;
	cin >> x;
	for (int i = 0; i < x.size(); i++) {
		if (i == 0 && x[0] == '9') {
				continue;
		}
		int digit = x[i] - '0';
		int mini = 9 - digit;
		int result = min(digit, mini);
		x[i] = char(result + '0');
	}
	cout << x << endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}
