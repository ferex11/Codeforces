#include<iostream>
#include<vector>
using namespace std;

bool isLuckyNumber(int n) {
    while (n) {
        int digit = n % 10;
        if (digit != 7 && digit != 4) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 4; i <= n; i++) {
        if (isLuckyNumber(i)) {
            if (i == n) {
                cout << "YES";
                return 0;
            } else if (n % i == 0) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
