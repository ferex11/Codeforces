#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s1, s2;
    cin >> s1 >> s2;
    sort(s1.begin(), s1.end());
    if (s1[0] == '0') {
        for (int i = 0; i < (int) s1.length(); i++) {
            if(s1[i] != '0') {
                swap(s1[0], s1[i]);
                break;
            }
        }
    }
    if (s1 == s2) {
        cout << "OK\n";
    } else {
        cout << "WRONG_ANSWER\n";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
