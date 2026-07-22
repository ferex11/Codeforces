#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> mat(n, vector<int> (n, 0));
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (i == j) {
                mat[i][j] = 0;
            } else {
                mat[i][j] = (i + j) % (n - 1) + 1;
            }
        }
    }
    for (int i = 0; i < n - 1; i++) {
        int missing_value = (2 * i) % (n - 1) + 1;
        mat[i][n - 1] = missing_value;
        mat[n - 1][i] = missing_value;
    }
    mat[n - 1][n - 1] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
    cout << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
