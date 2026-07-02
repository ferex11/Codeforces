#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    if ((min(n, m) & 1) == 1) cout << "Akshat" << endl;
    else cout << "Malvika" << endl;
    return 0;
}
