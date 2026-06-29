#include<bits/stdc++.h>
using namespace std;

int solve(string& s1, string& s2) {
    int n = s1.length();
    for (int i = 0; i < n; i++) {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }

    for (int i = 0; i < n; i++) {
        if (s1[i] > s2[i]) {
            return 1;
        } else if (s1[i] < s2[i]) {
            return -1;
        }
    }

    return 0;
}

int main() {
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;

    cout << solve(s1, s2) << endl;

    return 0;
}
