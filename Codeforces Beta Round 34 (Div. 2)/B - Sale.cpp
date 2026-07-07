#include<bits/stdc++.h>
using namespace std;

static long long MOD = 1e9;
#define ll long long
#define endl "\n"

int maxSales(int m, vector<int>& a) {
    sort(a.begin(), a.end());
    int res = 0;
    for (int i = 0; i < m; i++) {
        if (a[i] < 0)
            res += -a[i];
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << maxSales(m, a) << endl;
    return 0;
}
