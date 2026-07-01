#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    unordered_set<int> st;

    for (auto it : a) {
        st.insert(it);
    }

    for (int i = 1; i <= n; i++) {
        if (st.find(i) == st.end()) {
            cout << i;
            return 0;
        }
    }

    cout << n + 1;

    return 0;
}
