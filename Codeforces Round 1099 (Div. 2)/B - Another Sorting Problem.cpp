#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int mx = 0;
    for (int i = 1; i < n; i++)
        mx = max(mx, v[i - 1] - v[i]);

    for (int i = 1; i < n; i++) {
        if (v[i - 1] > v[i])   
            v[i] += mx;
    }

    for (int i = 1; i < n; i++) {
        if (v[i - 1] > v[i]) {
            cout << "NO" << endl;
            return;
        }
    }
    
    cout << "YES" << endl;
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
