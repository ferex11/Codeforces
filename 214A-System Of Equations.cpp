#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18
#define pii pair<int, int>
#define pll pair<ll, ll>

void solve() {
  int n, m;
	cin >> n >> m;
	int count = 0;
	for (int a = 0; a <= 31;  a++) {
		int b = n - (a * a);
		if (b >= 0 && a + (b * b) == m)
			count++;
	}
	cout << count << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
