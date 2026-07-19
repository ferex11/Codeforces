#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int64_t n, d;
    cin >> n >> d;
    vector<int64_t> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int64_t cnt = 0;
    for (int i = 1; i < n; i++) {
        if (a[i - 1] == a[i]) {
            a[i] += d;
            cnt++;
        } else if (a[i - 1] > a[i]) {
            int64_t diff = a[i - 1] - a[i];
            int64_t times = diff / d + 1;
            a[i] += d * times;
            cnt += times;
        }
    }
    cout << cnt << "\n";
    return 0;
}
