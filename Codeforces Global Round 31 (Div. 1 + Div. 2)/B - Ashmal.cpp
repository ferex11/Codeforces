#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18

void solve() {
    int n;
    cin >> n;
    vector<string> a(n);
    string res = "";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (res.empty()) {
            res += a[i];
        } else {
            string s1 = res + a[i];
            string s2 = a[i] + res;
            res = min(s1, s2);
        }
    }
    cout << res << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
