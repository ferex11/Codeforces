#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define pb push_back
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int cnt = 0;
    int mx = a[0];
    int mn = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > mx || a[i] < mn) {
            cnt++;
            mx = max(mx, a[i]);
            mn = min(mn, a[i]);
        }
    }
    cout << cnt << endl;
    return 0;
}
