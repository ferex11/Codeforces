#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18
#define pii pair<int, int>
#define pll pair<ll, ll>

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	vector<int> a(n);
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	sort(a.rbegin(), a.rend());
	int cnt = 0;
	int mySum = 0;
	for (auto it : a) {
		mySum += it;
		sum -= it;
		cnt++;
		if (mySum > sum) 
			break;
	}
	cout << cnt << endl;
	return 0;
}
