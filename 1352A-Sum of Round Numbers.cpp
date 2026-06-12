#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> ans;
        int num = 1;
        while (n > 0) {
            int digit = n % 10;
            if (digit != 0)
                ans.push_back(digit * num);
            n /= 10;
            num *= 10;
        }
        cout << ans.size() << endl;
        for(auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}
