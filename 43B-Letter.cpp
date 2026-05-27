#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define inf 1e18

void solve() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    unordered_map<char, int> mpp;
    for (auto &c : s1) {
        if (c != ' ') mpp[c]++;
    }
    for (auto &it : s2) {
        if (it == ' ') continue;
        if (mpp[it] == 0) {
            cout << "NO";
            return;
        }
        mpp[it]--;
    }
    cout << "YES";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
  return 0;
}
