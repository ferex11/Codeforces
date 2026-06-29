#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    int countUpperCaseLetter = 0;
    int countLowerCaseLetter = 0;
    for (auto &ch : s) {
        if (isupper(ch)) {
            countUpperCaseLetter++;
        } else {
            countLowerCaseLetter++;
        }
    }
    if (countUpperCaseLetter == countLowerCaseLetter || countUpperCaseLetter < countLowerCaseLetter) {
        for (int i = 0; i < n; i++) {
            if (isupper(s[i])) {
                s[i] = tolower(s[i]);
            }
        }
    } else {
        for (int i = 0; i < n; i++) {
            if (islower(s[i])) {
                s[i] = toupper(s[i]);
            }
        }
    }
    cout << s << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
