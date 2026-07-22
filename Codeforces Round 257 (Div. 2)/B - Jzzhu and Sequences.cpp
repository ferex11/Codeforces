#include<bits/stdc++.h>
using namespace std;

const int mod = (int) 1000000007 ;
void solve() {
    int x, y, n;
    cin >> x >> y >> n;
    int v[6] = {x - y, x, y, y - x, -x, -y};
    int ans = (v[n % 6] % mod + mod) % mod;
    cout << ans << "\n";
} 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
