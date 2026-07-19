#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double n, vb, vs;
    cin >> n >> vb >> vs;
    vector<double> coordinates(n);
    for (auto& x : coordinates) cin >> x;
    double xu, yu;
    cin >> xu >> yu;
    int ind = -1;
    double min_time = INT_MAX;
    auto sq = [&](double x) {
        return x * x;
    };
    for (int i = 1; i < n; i++) {
        double bus_time = coordinates[i] / vb;
        double running_time = sqrt(sq(xu - coordinates[i]) + sq(yu)) / vs;
        double tot_time = bus_time + running_time;
        if (tot_time <= min_time) {
            min_time = tot_time;
            ind = i;
        }
    }
    cout << ind + 1 << "\n";
    return 0;
}
