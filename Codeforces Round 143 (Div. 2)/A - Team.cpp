#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	int cnt = 0;
	while (n--) {
		int x, y, z;
		cin >> x >> y >> z;
		int sum = x + y + z;
		if (sum > 1) cnt++;
	}
	cout << cnt;
	return 0;
}
