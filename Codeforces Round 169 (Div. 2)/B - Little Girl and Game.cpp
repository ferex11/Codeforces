#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18

void solve() {
    string s;
    cin >> s;
    vector<int> freq(26, 0);
    for (auto& x : s) freq[x - 'a']++;
    int odd = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 == 1) odd++;
    }
    if (odd <= 1) {
        cout << "First";
        return;
    }
    if (odd % 2 == 0) cout << "Second";
    else cout << "First";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
  return 0;
}
