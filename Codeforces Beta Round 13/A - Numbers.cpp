#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int f(int num, int base) {
    int sum = 0;
    while (num > 0) {
        sum += num % base;
        num /= base;
    }
    return sum;
}
void solve() {
    int A;
    cin >> A;
    int sum = 0;
    for (int i = 2; i < A; i++) {
        sum += f(A, i);
    }
    int total_base = A - 2;
    int g = gcd(sum, total_base);
    cout << sum / g << "/" << total_base / g << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
