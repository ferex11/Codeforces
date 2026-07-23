#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    bool flip = true;
    while (n) {
        if (flip)
            cout << "I hate ";
        else
            cout << "I love ";
        if (n > 1)
            cout << "that ";
        flip = !flip;
        n--;
    }
    cout << "it";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
