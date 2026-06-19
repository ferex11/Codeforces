#include<bits/stdc++.h>
using namespace std;

void solve() {
    int d, sumTime;
    cin >> d >> sumTime;
    vector<pair<int, int>> intervals(d);
    int minTime = 0, maxTime = 0;
    for (int i = 0; i < d; i++) {
        cin >> intervals[i].first >> intervals[i].second;
        minTime += intervals[i].first;
        maxTime += intervals[i].second;
    }
    if (sumTime < minTime || maxTime < sumTime) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    vector<int> res(d);
    for (int i = 0; i < d; i++) {
        res[i] = intervals[i].first;
    }
    int extraTime = sumTime - minTime;
    for (int i = 0; i < d && extraTime > 0; i++) {
        int maxExtraCanTake = intervals[i].second - intervals[i].first;
        int add = min(extraTime, maxExtraCanTake);
        res[i] += add;
        extraTime -= add;
    }
    for (int x : res) {
        cout << x << " ";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
