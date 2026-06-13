#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void solve() {
    int n;
    cin >> n;
    bool found = false;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 67)
            found = true;
    }
    cout << (found ? "YES" : "NO") << endl;
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
