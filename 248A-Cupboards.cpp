#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int64_t t;
    cin >> t;
    int leftOpen = 0;
    int leftClose = 0;
    int rightOpen = 0;
    int rightClose = 0;
    while (t--) {
        int l, r;
        cin >> l >> r;
        if (l == 1) leftOpen++;
        else leftClose++;
        if (r == 1) rightOpen++;
        else rightClose++;
    }
    int leftCost = min(leftOpen, leftClose);
    int rightCost = min(rightOpen, rightClose);
    cout << leftCost + rightCost << '\n';
    return 0;
}
