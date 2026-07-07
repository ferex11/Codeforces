#include<bits/stdc++.h>
using namespace std;

static long long MOD = 1e9;
#define ll long long
#define endl "\n"

string maxGoal() {
    int n;
    cin >> n;
    unordered_map<string, int> mpp;
    while (n--) {
        string s;
        cin >> s;
        mpp[s]++;
    }
    int mx = INT_MIN;
    string res = "";
    for (auto &it : mpp) {
        if (it.second > mx) {
            mx = it.second;
            res = it.first;
        }
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << maxGoal() << endl;
    return 0;
}
