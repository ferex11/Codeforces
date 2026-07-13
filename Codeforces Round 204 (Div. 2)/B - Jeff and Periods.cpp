#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18

void solve() {
    int n;
    cin >> n;
    map<int, vector<int>> mpp;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mpp[x].pb(i);
    }
    vector<pair<int, int>> ans;
    for (auto &it : mpp) {
        if (it.second.size() == 1)
            ans.pb({it.first, 0});
        else {
            int cd = it.second[1] - it.second[0];
            bool ok = true;
            for (int i = 1; i < it.second.size(); i++) {
                if (it.second[i] - it.second[i - 1] != cd) {
                    ok = false;
                    break;
                }
            }
            if (ok) ans.pb({it.first, cd});
        }
    }
    cout << ans.size() << endl;
    for (auto& it : ans)
        cout << it.first << " " << it.second << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
  return 0;
}
