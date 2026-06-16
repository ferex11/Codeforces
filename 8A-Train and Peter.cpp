#include<bits/stdc++.h>
using namespace std;

bool check(const string& flags, const string& s1, const string& s2) {
    size_t pos1 = flags.find(s1);
    if (pos1 == string::npos) return false;
    size_t pos2 = flags.find(s2, pos1 + s1.length());
    return pos2 != string::npos;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string flags, s1, s2;
    cin >> flags >> s1 >> s2;
    bool forward = check(flags, s1, s2);
    reverse(flags.begin(), flags.end());
    bool backward = check(flags, s1, s2);
    if (forward && backward) {
        cout << "both\n";
    } else if (forward) {
        cout << "forward\n";
    } else if (backward) {
        cout << "backward\n";
    } else {
        cout << "fantasy\n";
    }
    return 0;
}
