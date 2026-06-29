#include<bits/stdc++.h>
using namespace std;

string solve(string& s) {
    int n = s.length();
    
    vector<char> digits;
    for (auto it : s) {
        if (it != '+') {
            digits.push_back(it);
        }
    }

    sort(digits.begin(), digits.end());

    int index = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '+') {
            s[i] = digits[index++];
        }
    }

    return s;
}

int main() {
    string s;
    cin >> s;

    cout << solve(s) << endl;

    return 0;
}
