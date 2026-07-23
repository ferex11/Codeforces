#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int count_ones = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i])
            count_ones++;
    }
    int max_ones = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int cur_ones = count_ones;
            for (int k = i; k <= j; k++) {
                if (a[k])
                    cur_ones--;
                else    
                    cur_ones++;
            }
            max_ones = max(max_ones, cur_ones);
        }
    }
    cout << max_ones << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
