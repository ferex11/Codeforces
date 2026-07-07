#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define inf 1e18

void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	int m; 
	cin >> m;
	vector<int> b(m);
	for (int i = 0; i < m; i++) cin >> b[i];
	int maxRatio = INT_MIN;
	int count = 0;
	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++) {
			if (b[j] % a[i] == 0) {
				int ratio = b[j] / a[i];
				if (ratio > maxRatio) {
					maxRatio = ratio;
					count = 1;
				} else if (ratio == maxRatio)
					count++;
			}
		}
	}
	cout << count << endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}
