#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define pb push_back

void solve() {
	int n, m;
	cin >> n >> m;
	vector<int> a(m);
	for (int i = 0; i < m; i++) cin >> a[i];
	ll totalTime = 0;
	ll current = 1;
	for (int i = 0; i < m; i++) {
		int target = a[i];
		if (target >= current) {
			totalTime += target - current;
		} else {
			totalTime += (n - current) + target;
		}
		current = target;
	}
	cout << totalTime << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
