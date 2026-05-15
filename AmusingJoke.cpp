#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define pb push_back

void solve() {
    string guestName;
    string hostName;
    string pile;
    cin >> guestName;
    cin >> hostName;
    cin >> pile;
    vector<int> freq1(26, 0);
    for (auto it : guestName) {
        freq1[it - 'A']++;
    }
    for (auto it : hostName) {
        freq1[it - 'A']++;
    }
    vector<int> freq2(26, 0);
    for (auto it : pile) {
        freq2[it - 'A']++;
    }
    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}