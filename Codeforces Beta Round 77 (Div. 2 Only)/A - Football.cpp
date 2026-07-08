#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void solve() {
    string s;
    cin >> s;
    if (s.find("0000000") != string::npos) {
        cout << "YES" << endl;
        return;
    }
    if (s.find("1111111") != string::npos) {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
