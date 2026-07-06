#include<bits/stdc++.h>
using namespace std;
static long long MOD = 1e9;
#define ll long long
#define endl "\n"

void solve() {
    int n;
    cin >> n;
    vector<int> towns(n);
    int mn = INT_MAX;
    int townNumber = -1;
    int count = 1;
    for (int i = 0; i < n; i++) {
        cin >> towns[i];
        if (towns[i] < mn) {
            mn = towns[i];
            townNumber = i + 1;
            count = 1;
        } else if (towns[i] == mn) {
            count++;
        }
    }
    if (count > 1) {
        cout << "Still Rozdil" << endl;
    } else {
        cout << townNumber << endl;
    }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
