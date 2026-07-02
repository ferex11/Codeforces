#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> ans(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ans[a[i]] = i + 1;
    }
    for (int i = 1; i <= n; i++) cout << ans[i] << " ";
    return 0;
}
