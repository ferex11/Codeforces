#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back

void solve() {
    int g, c, l;
    cin >> g >> c >> l;

    int maxi = max(g, max(c, l));
    int mini = min(g, min(c, l));
    
    if (maxi - mini >= 10) {
        cout << "check again";
    } else {
        vector<int> v = {g, c, l};
        sort(v.begin(), v.end());
        cout << "final " << v[1];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
