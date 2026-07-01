#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string p;
    cin >> p;

    for (auto &ch : p) {
        if (ch == 'H' || ch == 'Q' || ch == '9') {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
