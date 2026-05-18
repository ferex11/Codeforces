#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back

void solve() {
    string s;
    cin >> s;
    int n = s.length();
    if (s[0] == 'R') {
        bool flag = false;
        int ind = 1;
        string row = "";
        if (isdigit(s[ind])) {
            while (ind < n && isdigit(s[ind])) {
                row.pb(s[ind]);
                ind++;
            }
            if (ind < n && s[ind] == 'C')
                flag = true;
        }        
        if (flag) {
            ind++;
            ll col = 0;
            while (ind < n && isdigit(s[ind])) {
                col = col * 10 + (s[ind] - '0');
                ind++;
            }
            string ans = "";
            while (col > 0) {
                col--;
                char ch = 'A' + (col % 26);
                ans.pb(ch);
                col /= 26;
            }
            reverse(ans.begin(), ans.end());
            cout << ans << row << endl;
            return;
        }  
    }
    string letters = "";
    string digits = "";
    int ind = 0;
    while (ind < n && isalpha(s[ind])) {
        letters.pb(s[ind]);
        ind++;
    }
    digits = s.substr(ind);
    ll ans = 0;
    ind = 0;
    while (ind < letters.length()) {
        ans = ans * 26 + (letters[ind] - 'A' + 1);
        ind++;
    }
    cout << 'R' << digits << 'C' << ans << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
