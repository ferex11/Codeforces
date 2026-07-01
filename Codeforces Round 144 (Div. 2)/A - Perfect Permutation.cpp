#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    if (n % 2 == 1) {
        cout << -1;
        return 0;
    }
    vector<int> a(n);
    int evenNum = 2;
    int oddNum = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            a[i] = evenNum;
            evenNum += 2;
        } else {
            a[i] = oddNum;
            oddNum += 2;
        }
    }
    for (auto it : a) 
        cout << it << " ";
    return 0;
}
