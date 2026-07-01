#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    ll res = 0;
    while (t--) {
        string s;
        cin >> s;
        if (s[0] == 'T') 
            res += 4;
        else if (s[0] == 'C') 
            res += 6;
        else if (s[0] == 'O') 
            res += 8;
        else if (s[0] == 'D') 
            res += 12;
        else 
            res += 20;
    }
    cout << res;
    return 0;
}
