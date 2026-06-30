#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    int ans = a + b + c;
    ans = max(ans, (a + b) * c);
    ans = max(ans, a * (b + c));
    ans = max(ans, a * b * c);

    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
