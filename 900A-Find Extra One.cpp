#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back

void solve() {
    int t;
    cin >> t;
    int countLeftPoints = 0;
    int countRightPoints = 0;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (x < 0)
            countLeftPoints++;
        else    
            countRightPoints++;
    }
    if (min(countLeftPoints, countRightPoints) > 1)
        cout << "NO";
    else    
        cout << "YES";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
