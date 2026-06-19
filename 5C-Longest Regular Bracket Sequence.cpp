#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    stack<int> st;
    st.push(-1);
    int ans = 0;
    int count = 1;
    for (int i = 0; i < (int) s.length(); i++) {
        if (s[i] == '(') {
            st.push(i);
        } else {
            st.pop();
            if (st.empty()) {
                st.push(i);
            } else {
                int cur_len = i - st.top();
                if (cur_len > ans) {
                    ans = cur_len;
                    count = 1;
                } else if (cur_len == ans) {
                    count++;
                }
            }
        }
    }
    cout << ans << " " << count << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
