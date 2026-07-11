#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back

bool checkValue(string& s) {
    int val = s[0] - '0';
    for (auto it : s) {
        if (val != (it - '0'))
            return false;
    }
    return true;
}
void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> grid;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        grid.pb(s);
    }
    int prevValue = -1;
    for (int i = 0; i < n; i++) {
        if (checkValue(grid[i]) == false) {
            cout << "NO";
            return;
        }
        if (prevValue == -1)
            prevValue = grid[i][0] - '0';
        else {
            if (prevValue == grid[i][0] - '0') {
                cout << "NO";
                return;
            }
            prevValue = grid[i][0] - '0';
        }
    }
    cout << "YES";
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
