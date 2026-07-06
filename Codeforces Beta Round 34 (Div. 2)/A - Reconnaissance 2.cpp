#include<bits/stdc++.h>
using namespace std;
static long long MOD = 1e9;
#define ll long long
#define endl "\n"

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int mn = INT_MAX;
    int firstSoldier = -1;
    int secondSoldier = -1;
    for (int i = 0; i < n; i++) {
        int absDiff = abs(a[i] - a[(i + 1) % n]);
        if (absDiff < mn) {
            firstSoldier = i;
            secondSoldier = (i + 1) % n;
            mn = absDiff;
        }
    }
    cout << firstSoldier + 1 << " " << secondSoldier + 1 << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
