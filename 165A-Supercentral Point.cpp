#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int, int>> points;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        points.push_back({x, y});
    }
    int count = 0;
    for (int i = 0; i <= n; i++) {
        bool hasLeft = false;
        bool hasRight = false;
        bool hasUp = false;
        bool hasDown = false;
        for (int j = 0; j <= n; j++) {
            if (points[i].first == points[j].first) {
                if (points[j].second > points[i].second) hasUp = true;
                if (points[j].second < points[i].second) hasDown = true;
            }
            if (points[i].second == points[j].second) {
                if (points[j].first > points[i].first) hasRight = true;
                if (points[j].first < points[i].first) hasLeft = true;
            }
        }
        if (hasRight && hasLeft && hasUp && hasDown) count++;
    }
    cout << count << endl;
    return 0;
}
