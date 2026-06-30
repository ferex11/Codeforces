#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    bool flag = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i % 2 == 0) {
                cout << "#";
            } else {
                if (flag == true && j == m-1) cout << "#";
                else if (flag == false && j == 0) cout << "#";
                else cout << ".";
                flag = (j == m-1) ? !flag : flag;
            }
        }
        cout << endl;
    }

    return 0;
}
