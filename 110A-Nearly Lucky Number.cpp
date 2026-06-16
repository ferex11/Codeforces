#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    int countLuckNumber = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit == 4 || digit == 7) 
            countLuckNumber++;
        n /= 10;
    }
    if (countLuckNumber == 0) {
        cout << "NO" << endl;
        return 0;
    }
    while (countLuckNumber > 0) {
        int digit = countLuckNumber % 10;
        if (digit != 4 && digit != 7) {
            cout << "NO" << endl;
            return 0;
        }
        countLuckNumber /= 10;
    }
    cout << "YES" << endl;
    return 0;
}
