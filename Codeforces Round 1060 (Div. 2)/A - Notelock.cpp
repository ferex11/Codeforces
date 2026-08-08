#include<iostream>
#include<string>
using namespace std;

int solve(int n, string s, int k) {
    int protect = 0;
    int lastOne = -1e9;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            if (i - lastOne >= k) {
                protect++;
            }
            lastOne = i;
        }
    }
    return protect;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k, n;
        string s;
        cin >> n >> k;
        cin >> s;

        cout << solve(n, s, k) << endl;
    }

    return 0;
}
