#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int mx = INT_MIN;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        cout << n * mx << endl;
    }
    return 0;
}
