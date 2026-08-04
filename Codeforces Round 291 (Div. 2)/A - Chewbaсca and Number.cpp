#include<bits/stdc++.h>
using namespace std;

string solve(string& x) {

    for (int i = 0; i < x.size(); i++) {
        if (i == 0 && x[0] == '9') {
            continue;
        }

        int digit = x[i] - '0';
        int mini = 9 - digit;

        int result = min(digit, mini);
        x[i] = char(result + '0');
    }

    return x;
}

int main() {
    string t;
    cin >> t;

    cout << solve(t);

    return 0;
}
