#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];

    int maxi = a[0], mini = a[0];
    int posMax = 0, posMin = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > maxi) {
            maxi = a[i];
            posMax = i;
        }

        if (mini >= a[i]) {
            mini = a[i];
            posMin = i;
        }
    }

    int res = posMax + (n - 1 - posMin);
    if (posMax > posMin) 
        res--;

    cout << res << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    
    return 0;
}
