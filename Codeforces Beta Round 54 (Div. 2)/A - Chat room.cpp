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
	string s1;
	cin >> s1;
	string s2 = "hello";
	int i = 0;
	int j = 0;
	while (i < s1.length() && j < s2.length()) {
			if (s1[i] == s2[j]) {
					j++;
			}
			i++;
	}
	if (j == s2.length()) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}
