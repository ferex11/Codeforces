#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, p1, p2, p3, t1, t2;
    cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
    vector<pair<int, int>> intervals(n);
    int64_t total_power = 0;
    for (int i = 0; i < n; i++) {
        cin >> intervals[i].first >> intervals[i].second;
        int work_duration = intervals[i].second - intervals[i].first;
        total_power += work_duration * p1;
        if (i > 0) {
            int idle_time = intervals[i].first - intervals[i - 1].second;
            int normal_idle = min(idle_time, t1);
            total_power += normal_idle * p1;
            idle_time -= normal_idle;
            int screensaver_idle = min(idle_time, t2);
            total_power += screensaver_idle * p2;
            idle_time -= screensaver_idle;
            if (idle_time > 0) {
                total_power += idle_time * p3;
            }
        }
    }
    cout << total_power << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
