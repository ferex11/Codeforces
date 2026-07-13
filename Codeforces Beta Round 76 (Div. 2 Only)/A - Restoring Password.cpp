#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18

void solve() {
    string s;
    cin >> s;
    unordered_map<string, int> mpp;
    for (int i = 0; i < 10; i++) {
        string temp;
        cin >> temp;
        mpp[temp] = i;
    }
    for (int i = 0; i < 80; i += 10) {
        if (mpp.count(s.substr(i, 10))) {
            cout << mpp[s.substr(i, 10)];
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
