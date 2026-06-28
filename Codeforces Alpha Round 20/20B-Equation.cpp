#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back

void solve() {
    double a, b, c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(5);
    if (a != 0) {
        double d = b * b - 4 * a * c;
        if (d < 0) {
            cout << 0 << endl;
        } else if (d == 0) {
            cout << 1 << endl;
            double x = -b / (2 * a);
            cout << x << endl;
        } else {
            double x1 = (-b - sqrt(d)) / (2 * a);
            double x2 = (-b + sqrt(d)) / (2 * a);
            cout << 2 << endl;
            cout << min(x1, x2) << endl;
            cout << max(x1, x2) << endl;
        }
    } else {
        if (b != 0) {
            double x = -c / b;
            cout << 1 << endl;
            cout << x << endl;
        } else {
            if (c == 0) {
                cout << -1 << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
