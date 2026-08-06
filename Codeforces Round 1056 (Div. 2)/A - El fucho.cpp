#include<iostream>

using namespace std;

int solve(int n) {
    return 2 * n - 2;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        cout << solve(n) << endl;;
    }

    return 0;
}
