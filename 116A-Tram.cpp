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
  int res = 0;
  int mx = INT_MIN;
  while (n--) {
    int a, b;
    cin >> a >> b;
    res -= a;
    res += b;
    mx = max(mx, res);
  }
  cout << mx << endl;
  return 0;
}
