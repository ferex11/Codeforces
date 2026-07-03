#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            int presses = a[i][j];

            for (int k = 0; k < 4; k++) {
                int ni = i + dx[k];
                int nj = j + dy[k];
                if (ni >= 0 && ni < 3 && nj >= 0 && nj < 3)
                    presses += a[ni][nj];
            }
            if (presses % 2 == 0)
                cout << 1;
            else
                cout << 0;
        }
        cout << "\n";
    }

    return 0;
}
