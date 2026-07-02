#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    string res = "";
    for (int i = 0; i < s.length();) {
        if (i + 2 < s.length() && s.substr(i, 3) == "WUB") {
            if (!res.empty() && res.back() != ' ') {
                res.push_back(' ');
            }
            i += 3;
        } else {
            res.push_back(s[i]);
            i++;
        }
    }
    cout << res << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
