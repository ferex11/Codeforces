#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int mx = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            mx = max(mx, v[i] ^ v[j]);
        }
    }
    cout << mx << endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
  cin >> t;
  while (t--)
      solve();
	return 0;
}
