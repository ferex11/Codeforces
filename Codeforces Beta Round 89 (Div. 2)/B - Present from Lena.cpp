#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++) {
        for (int s = 0; s < n - i; s++)
            cout << " " << " ";
        bool flag = true;
        for (int j = 0; j <= i; j++) {
            if (!flag)
                cout << " ";
            cout << j;
            flag = false;
        }
        for (int j = i - 1; j >= 0; j--)
            cout << " " << j;
        cout << endl;
    }
    for (int i = n - 1; i >= 0; i--) {
        for (int s = 0; s < n - i; s++)
            cout << " " << " ";
        bool flag = true;
        for (int j = 0; j <= i; j++) {
            if (!flag)
                cout << " ";
            cout << j;
            flag = false;
        }
        for (int j = i - 1; j >= 0; j--)
            cout << " " << j;
        if (i > 0)
            cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
