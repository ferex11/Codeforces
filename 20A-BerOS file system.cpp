#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int ind = (int) s.length() - 1;
    while (s[ind] == '/') {
        ind--;
    }
    cout << s[0];
    for (int i = 1; i <= ind; i++) {
        if (s[i] == '/' && s[i - 1] == '/') {
            continue;
        } else {
            cout << s[i];
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
