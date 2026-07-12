#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    for (auto ch : s) {
        if (ch == 'a')
            count++;
        else    
            count--;
    }
    if (count == 0) {
        cout << 0 << endl;
        return;
    }
    unordered_map<int, int> mpp;
    mpp[0]  = -1;
    int prefixSum = 0;
    int ans = n;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'a')
            prefixSum++;
        else    
            prefixSum--;
        mpp[prefixSum] = i;
        if (mpp.count(prefixSum - count))
            ans = min(ans, i - mpp[prefixSum - count]);
    }
    if (ans == n)
        cout << -1 << endl;
    else
        cout << ans << endl;
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
