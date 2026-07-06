#include<bits/stdc++.h>
using namespace std;

static long long MOD = 1e9;
#define ll long long
#define endl "\n"

bool isMagicNumber(string& s) {
    for (int i = 0; i < s.length(); i++) 
        if (s[i] != '1' && s[i] != '4')
            return false;
    if (s[0] != '1')
        return false;
    if (s.find("444") != string::npos)
        return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    if (isMagicNumber(s))
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    return 0;
}
