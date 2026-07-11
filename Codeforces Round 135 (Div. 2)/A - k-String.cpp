#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define pb push_back

void solve() {
    int k;
    cin >> k;
    string s;
    cin >> s;
    vector<int> freq(26, 0);
    for (auto& ch : s)
        freq[ch - 'a']++;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % k != 0) {
            cout << -1;
            return;
        }
    }
    string res = "";
    for (int i = 0; i < 26; i++) {
        int times = freq[i] / k;
        while (times > 0) {
            res.pb(i + 'a');
            times--;
        }
    }
    while (k--) {
        cout << res;
    }
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    solve();
	return 0;
}
