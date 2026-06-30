#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18

void solve() {
    string s;
    cin >> s;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == '.') {
            cout << 0;
            i++;
        } else if (s[i] == '-' && s[i+1] == '.') {
            cout << 1;
            i += 2;
        } else {
            cout << 2;
            i += 2;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
