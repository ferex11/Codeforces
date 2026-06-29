#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    
    int n;
    cin >> n;

    int sumX = 0;
    int sumY = 0;
    int sumZ = 0;
    int x, y, z;

    for (int i = 0; i < n; i++) {
        cin >> x >> y >> z;

        sumX += x;
        sumY += y;
        sumZ += z;
    }

    if (sumX == 0 && sumY == 0 && sumZ == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
