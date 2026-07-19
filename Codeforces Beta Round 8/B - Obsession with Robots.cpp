#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    set<pair<int, int>> vis;
    int x = 0, y = 0;
    vis.insert({x, y});
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, 1, 0, -1};
    for (char move : s) {
        if (move == 'L') x--;
        else if (move == 'R') x++;
        else if (move == 'U') y++;
        else if (move == 'D') y--;
        if (vis.count({x, y})) {
            cout << "BUG\n";
            return 0;
        }
        int cnt = 0;
        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];
            if (vis.count({nx, ny})) {
                cnt++;
            }
        }
        if (cnt > 1) {
            cout << "BUG\n";
            return 0;
        }
        vis.insert({x, y});
    }
    cout << "OK";
    return 0;
}
