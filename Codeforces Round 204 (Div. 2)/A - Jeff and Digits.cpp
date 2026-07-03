#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl "\n"
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<int> a(n);
    int cnt5 = 0;
    int cnt0 = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0) cnt0++;
        else cnt5++;
    }
    if (cnt0 == 0) {
        cout << -1 << endl;
        return 0;
    }
    cnt5 = (cnt5 / 9) * 9;
    if (cnt5 == 0) {
        cout << 0 << endl;
        return 0;
    }
    while (cnt5--) cout << 5;
    while (cnt0--) cout << 0;
    return 0;
}
