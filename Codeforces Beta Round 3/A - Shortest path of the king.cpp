#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t;
    cin >> s >> t;
    int x1 = s[0] - 'a', y1 = s[1] - '1';
    int x2 = t[0] - 'a', y2 = t[1] - '1';
    vector<string> moves;
    while (x1 != x2 || y1 != y2) {
        string cur_move = "";
        if (x1 < x2) {
            cur_move += "R";
            x1++;
        } else if (x1 > x2) {
            cur_move += "L";
            x1--;
        }
        if (y1 < y2) {
            cur_move += "U";
            y1++;
        } else if (y1 > y2) {
            cur_move += "D";
            y1--;
        }
        moves.push_back(cur_move);
    }
    cout << (int)moves.size() << '\n';
    for (auto& s : moves) {
        cout << s << '\n';
    }
    return 0;
}
